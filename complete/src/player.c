#include <stdio.h>
#include <stdlib.h>
#include "player.h"
#include "bullet.h"
#include "util.h"
#include "enemy.h"
#include "item.h"
#include "game.h"

#define MOVING_CALIBRATION 8

int playerX, playerY;
int playerSpeedX, playerSpeedY;
int playerLife;
int playerBomb;
int playerPower;
int playerAppearance;

extern bullet playerBullet[];
extern bullet enemyBullet[];
extern enemy enemyArray[];
extern int gameState;

void initPlayerPosition(void)
{
	playerX = 16;
	playerY = DEFAULT_PLAYER_Y;
	playerSpeedX = 0;
	playerSpeedY = 0;
	playerBomb = 2;
	playerPower = 0;
	playerAppearance = 16;
}

void initPlayer(void)
{
	playerX = 16;
	playerY = DEFAULT_PLAYER_Y;
	playerSpeedX = 0;
	playerSpeedY = 0;
	playerLife = 3;
	playerBomb = 2;
	playerPower = 0;
	playerAppearance = 16;
}

void setPlayerSpeed(int x, int y)
{
	float vector;

	x = x + 48;

	playerSpeedX = x - playerX;
	playerSpeedY = y - playerY;

	vector = mysqrt((float)(playerSpeedX * playerSpeedX + playerSpeedY * playerSpeedY));

	if(vector > MAX_SPEED)
	{
		playerSpeedX = playerSpeedX * MAX_SPEED / vector;
		playerSpeedY = playerSpeedY * MAX_SPEED / vector;
	}
}

void movePlayer(void)
{
	if(playerAppearance < DEFAULT_PLAYER_X)
	{
		playerX++;
		playerAppearance++;
		return;
	}
	else if(playerAppearance < DEFAULT_PLAYER_X * 2)
	{
		playerAppearance++;
	}

	if(-MOVING_CALIBRATION < playerSpeedX && playerSpeedX < MOVING_CALIBRATION &&
		-MOVING_CALIBRATION < playerSpeedY && playerSpeedY < MOVING_CALIBRATION)
		return;
	
	playerX += playerSpeedX;
	playerY += playerSpeedY;

	if(playerX < 16)
		playerX = 16;
	else if(playerX > 784)
		playerX = 784;

	if(playerY < 136)
		playerY = 136;
	else if(playerY > 464)
		playerY = 464;

	if(gameState == GAME)
	{
		playerSpeedX = 0;
		playerSpeedY = 0;
	}

	return;
}

void firePlayerBullet(void)
{
	int i;

	if(playerAppearance < DEFAULT_PLAYER_X)
		return;

	if(playerPower == 0)
	{
		for(i=0; i<PLAYER_BULLET_MAX; i++)
		{
			if(playerBullet[i].state == BULLET_DEAD)
				break;
		}

		if(i==PLAYER_BULLET_MAX)
			return;

		playerBullet[i].x = playerX + 16;
		playerBullet[i].y = playerY;
		playerBullet[i].speedX = PLAYER_BULLET_SPEED;
		playerBullet[i].speedY = 0;
		playerBullet[i].state = BULLET_ALIVE;
	}
	else if(playerPower == 1)
	{
		for(i=0; i<PLAYER_BULLET_MAX; i++)
		{
			if(playerBullet[i].state == BULLET_DEAD)
				break;
		}

		if(i==PLAYER_BULLET_MAX)
			return;

		playerBullet[i].x = playerX + 16;
		playerBullet[i].y = playerY - 8;
		playerBullet[i].speedX = PLAYER_BULLET_SPEED;
		playerBullet[i].speedY = 0;
		playerBullet[i].state = BULLET_ALIVE;

		for(i=0; i<PLAYER_BULLET_MAX; i++)
		{
			if(playerBullet[i].state == BULLET_DEAD)
				break;
		}

		if(i==PLAYER_BULLET_MAX)
			return;

		playerBullet[i].x = playerX + 16;
		playerBullet[i].y = playerY + 8;
		playerBullet[i].speedX = PLAYER_BULLET_SPEED;
		playerBullet[i].speedY = 0;
		playerBullet[i].state = BULLET_ALIVE;
	}
	else if(playerPower == 2)
	{
		for(i=0; i<PLAYER_BULLET_MAX; i++)
		{
			if(playerBullet[i].state == BULLET_DEAD)
				break;
		}

		if(i==PLAYER_BULLET_MAX)
			return;

		playerBullet[i].x = playerX + 16;
		playerBullet[i].y = playerY;
		playerBullet[i].speedX = PLAYER_BULLET_SPEED;
		playerBullet[i].speedY = 0;
		playerBullet[i].state = BULLET_ALIVE;

		for(i=0; i<PLAYER_BULLET_MAX; i++)
		{
			if(playerBullet[i].state == BULLET_DEAD)
				break;
		}

		if(i==PLAYER_BULLET_MAX)
			return;

		playerBullet[i].x = playerX + 16;
		playerBullet[i].y = playerY - 8;
		playerBullet[i].speedX = PLAYER_BULLET_SPEED - 1;
		playerBullet[i].speedY = -1;
		playerBullet[i].state = BULLET_ALIVE;

		for(i=0; i<PLAYER_BULLET_MAX; i++)
		{
			if(playerBullet[i].state == BULLET_DEAD)
				break;
		}

		if(i==PLAYER_BULLET_MAX)
			return;

		playerBullet[i].x = playerX + 16;
		playerBullet[i].y = playerY + 8;
		playerBullet[i].speedX = PLAYER_BULLET_SPEED - 1;
		playerBullet[i].speedY = 1;
		playerBullet[i].state = BULLET_ALIVE;
	}

	return;
}

void firePlayerBomb(void)
{
	int i;

	if(playerBomb > 0)
	{
		for(i=0; i<ENEMY_MAX_NUMBER; i++)
		{
			if(rand() % ITEM_PROB == 0 && enemyArray[i].state == ENEMY_ALIVE && gameState != CLEAR)
				makeItem(i);

			enemyArray[i].state = ENEMY_EXPLODING;
		}

		for(i=0; i<ENEMY_BULLET_MAX; i++)
		{
			enemyBullet[i].state = BULLET_DEAD;
		}

		playerBomb--;
	}
}