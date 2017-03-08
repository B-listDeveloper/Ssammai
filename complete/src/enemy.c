#include "enemy.h"
#include <stdio.h>
#include <stdlib.h>
#include "util.h"
#include "player.h"
#include "bullet.h"
#include "game.h"

#define ENEMY_MAX_SPEED 5
#define COOLTIME_DEFAULT 180
#define ENEMY_BULLET_SPEED 5

enemy enemyArray[ENEMY_MAX_NUMBER];

extern int playerX, playerY;
extern bullet enemyBullet[];
extern int stage;

void initEnemy(void)
{
	int i;

	for(i=0; i<ENEMY_MAX_NUMBER; i++)
	{
		enemyArray[i].x = 0;
		enemyArray[i].y = 0;
		enemyArray[i].speedX = 0;
		enemyArray[i].speedY = 0;
		enemyArray[i].hp = 0;
		enemyArray[i].hp2 = 0;
		enemyArray[i].cooltime = 0;
		enemyArray[i].explosion = ENEMY_EXPLOSION;
		enemyArray[i].state = ENEMY_DEAD;
		enemyArray[i].type = NORMAL;
	}
}

void makeEnemy(void)
{
	int i;

	for(i=0; i<ENEMY_MAX_NUMBER; i++)
		if(enemyArray[i].state == ENEMY_DEAD)
			break;

	if(i == ENEMY_MAX_NUMBER)
		return;

	enemyArray[i].x = 784;
	enemyArray[i].y = rand() % 328 + 136;

	enemyArray[i].speedX = -(rand() % 5 + 1);
	enemyArray[i].speedY = rand() % 5 - 2;

	enemyArray[i].hp = stage;
	enemyArray[i].explosion = ENEMY_EXPLOSION;
	enemyArray[i].cooltime = (COOLTIME_DEFAULT / stage);
	enemyArray[i].state = ENEMY_ALIVE;
	enemyArray[i].type = NORMAL;
}

void moveEnemy(void)
{
	int i;

	for(i=0; i<ENEMY_MAX_NUMBER; i++)
	{
		//printf("enemyArray[%2d]: ", i);

		if(enemyArray[i].state == ENEMY_ALIVE)
		{
			enemyArray[i].x += enemyArray[i].speedX;
			enemyArray[i].y += enemyArray[i].speedY;

			if(enemyArray[i].x < 16)
				enemyArray[i].state = ENEMY_DEAD;
			else if(enemyArray[i].x > 784)
				enemyArray[i].state = ENEMY_DEAD;

			if(enemyArray[i].y < 136)
			{
				enemyArray[i].y = 136;
				enemyArray[i].speedY = -enemyArray[i].speedY;
			}
			else if(enemyArray[i].y > 464)
			{
				enemyArray[i].y = 464;
				enemyArray[i].speedY = -enemyArray[i].speedY;
			}

			//printf("%d %d\n", enemyArray[i].x, enemyArray[i].y);
		}
		//else
			//printf("DEAD\n");
	}
}

void fireEnemyBullet(void)
{
	int i, j;

	for(j=0; j<ENEMY_MAX_NUMBER; j++)
	{
		if(enemyArray[j].cooltime <= 0 && enemyArray[j].state == ENEMY_ALIVE)
		{
			for(i=0; i<ENEMY_BULLET_MAX; i++)
			{
				if(enemyBullet[i].state == BULLET_DEAD)
					break;
			}

			if(i==ENEMY_BULLET_MAX)
				return;
			else
			{
				int x = enemyArray[j].x;
				int y = enemyArray[j].y;
				int speedX, speedY; 
				float vector;

				enemyBullet[i].x = x - 16;
				enemyBullet[i].y = y;

				speedX = playerX - x;
				speedY = playerY - y;

				if(speedX > 0)
				{
					speedX = -ENEMY_BULLET_SPEED;
					speedY = 0;
				}

				vector = mysqrt((float)(speedX * speedX + speedY * speedY));

				enemyBullet[i].speedX = speedX * ENEMY_BULLET_SPEED / vector;
				enemyBullet[i].speedY = speedY * ENEMY_BULLET_SPEED / vector;

				enemyBullet[i].state = BULLET_ALIVE;

				enemyArray[j].cooltime = COOLTIME_DEFAULT;
			}
		}
		else
			enemyArray[j].cooltime--;
	}

	return;
}