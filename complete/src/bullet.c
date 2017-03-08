#include <stdio.h>
#include <stdlib.h>
#include "bullet.h"
#include "player.h"
#include "enemy.h"
#include "item.h"
#include "game.h"

#define PLAYER_COLLISION_BOX 16
#define ENEMY_COLLISION_BOX 16

bullet playerBullet[PLAYER_BULLET_MAX];
bullet enemyBullet[ENEMY_BULLET_MAX];

extern int playerX, playerY, playerLife, playerBomb, playerPower, playerAppearance;
extern enemy enemyArray[];

void initBullet(void)
{
	int i;

	for(i=0; i<PLAYER_BULLET_MAX; i++)
	{
		playerBullet[i].x = 0;
		playerBullet[i].y = 0;
		playerBullet[i].speedX = 0;
		playerBullet[i].speedY = 0;
		playerBullet[i].state = BULLET_DEAD;
	}

	for(i=0; i<ENEMY_BULLET_MAX; i++)
	{
		enemyBullet[i].x = 0;
		enemyBullet[i].y = 0;
		enemyBullet[i].speedX = 0;
		enemyBullet[i].speedY = 0;
		enemyBullet[i].state = BULLET_DEAD;
	}
}

void moveBullet(void)
{
	int i;

	for(i=0; i<PLAYER_BULLET_MAX; i++)
	{
		//printf("playerBullet[%2d]: ", i);

		if(playerBullet[i].state == BULLET_ALIVE)
		{
			playerBullet[i].x += playerBullet[i].speedX;
			playerBullet[i].y += playerBullet[i].speedY;

			//printf("%d %d\n", playerBullet[i].x, playerBullet[i].y);

			if(playerBullet[i].x < 0 || playerBullet[i].x > 800)
				playerBullet[i].state = BULLET_DEAD;
			else if(playerBullet[i].y < 124 || playerBullet[i].y > 476)
				playerBullet[i].state = BULLET_DEAD;
		}
		//else
			//printf("DEAD\n");
	}

	for(i=0; i<ENEMY_BULLET_MAX; i++)
	{
		if(enemyBullet[i].state == BULLET_ALIVE)
		{
			enemyBullet[i].x += enemyBullet[i].speedX;
			enemyBullet[i].y += enemyBullet[i].speedY;

			if(enemyBullet[i].x < 4 || enemyBullet[i].x > 796)
				enemyBullet[i].state = BULLET_DEAD;
			else if(enemyBullet[i].y < 124 || enemyBullet[i].y > 476)
				enemyBullet[i].state = BULLET_DEAD;
		}
	}
}

void bulletCollision(void)
{
	int i, j;

	for(i=0; i<ENEMY_BULLET_MAX; i++)
	{
		if(enemyBullet[i].state == BULLET_ALIVE && playerAppearance == DEFAULT_PLAYER_X * 2)
		{
			int xdiff = playerX - enemyBullet[i].x;
			int ydiff = playerY - enemyBullet[i].y;

			if(-PLAYER_COLLISION_BOX < xdiff && xdiff < PLAYER_COLLISION_BOX &&
				-PLAYER_COLLISION_BOX < ydiff && ydiff < PLAYER_COLLISION_BOX)
			{
				for(i=0; i<ENEMY_MAX_NUMBER; i++)
					if(enemyArray[i].state == ENEMY_DEAD)
						break;

				if(i!=ENEMY_MAX_NUMBER)
				{
					enemyArray[i].x = playerX;
					enemyArray[i].y = playerY;
					enemyArray[i].speedX = 0;
					enemyArray[i].speedY = 0;
					enemyArray[i].explosion = ENEMY_EXPLOSION;
					enemyArray[i].state = ENEMY_EXPLODING;
				}
				
				playerLife--;
				if (playerLife < 0)
					gameOver();

				enemyBullet[i].state = BULLET_DEAD;

				if(playerLife >= 0)
					initPlayerPosition();
			}
		}
	}

	for(i=0; i<PLAYER_BULLET_MAX; i++)
	{
		for(j=0; j<ENEMY_MAX_NUMBER; j++)
		{
			if(playerBullet[i].state == BULLET_ALIVE && enemyArray[j].state == ENEMY_ALIVE)
			{
				int xdiff = playerBullet[i].x - enemyArray[j].x;
				int ydiff = playerBullet[i].y - enemyArray[j].y;

				if(-ENEMY_COLLISION_BOX < xdiff && xdiff < ENEMY_COLLISION_BOX &&
					-ENEMY_COLLISION_BOX < ydiff && ydiff < ENEMY_COLLISION_BOX)
				{
					enemyArray[j].hp -= playerPower + 1;

					if(enemyArray[j].hp <= 0) {
						if ((rand() % ITEM_PROB) == 0)
							makeItem(j);

						enemyArray[j].state = ENEMY_EXPLODING;
					}

					playerBullet[i].state = BULLET_DEAD;
				}
			}
		}
	}
}