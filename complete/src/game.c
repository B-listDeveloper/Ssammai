#include "game.h"
#include "player.h"
#include "bullet.h"
#include "enemy.h"
#include "item.h"

GAME_STATE gameState;
int stage, stageTime;
extern int playerLife, playerBomb, playerSpeedX, playerSpeedY;

void initGame(void)
{
	gameState = MAIN;
}

void startGame(void)
{
	playerLife = 3;
	stage = 1;
	initPlayer();
	initBullet();
	initEnemy();
	initItem();
	stageTime = 0;
	gameState = GAME;
}

void gameOver(void)
{
	gameState = GAMEOVER;
}

void goNextStage(void)
{
	int origin = playerBomb;

	gameState = CLEAR;
	
	playerBomb++;
	firePlayerBomb();
	
	playerBomb = origin;

	playerSpeedX = MAX_SPEED / 2;
	playerSpeedY = 0;
}

void startStage(void)
{
	if(stage == 3)
	{
		showEnding();
		return;
	}

	stage++;
	stageTime = 0;
	initPlayerPosition();
	initBullet();
	initEnemy();
	initItem();
	gameState = GAME;
}

void showCredit(void)
{
	gameState = CREDIT;
}

void showEnding(void)
{
	gameState = ENDING;
}