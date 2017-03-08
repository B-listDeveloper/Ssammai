#include "item.h"
#include "enemy.h"
#include "player.h"
#include "bullet.h"
#include <stdlib.h>
#include <stdio.h>

#define PLAYER_COLLISION_BOX 16

item itemArray[ITEM_MAX];

extern int playerLife, playerBomb, playerPower;
extern int playerX, playerY;
extern enemy enemyArray[];

void initItem(void) {
	int i;

	for (i = 0; i < ITEM_MAX; i++) {
		itemArray[i].x = 0;
		itemArray[i].y = 0;
		itemArray[i].speedX = 0;
		itemArray[i].speedY = 0;
		itemArray[i].timeLimit = 0;
		itemArray[i].itemState = ITEM_DEAD;
		itemArray[i].itemType = LIFE;
	}
}

void makeItem(int enemyIndex) {
	int i;
	for(i=0; i<ITEM_MAX; i++)
		if(itemArray[i].itemState == ITEM_DEAD)
			break;

	if (i == ITEM_MAX)
		return;

	itemArray[i].x = enemyArray[enemyIndex].x;
	itemArray[i].y = enemyArray[enemyIndex].y;
	itemArray[i].speedX = -(rand() % 5 + 1);
	itemArray[i].speedY = rand() % 6 - 3;
	itemArray[i].timeLimit = ITEM_TIMELIMIT;
	itemArray[i].itemType = rand() % 3;
	itemArray[i].itemState = ITEM_ALIVE;
}

void moveItem(void) {
	int i;

	for (i = 0; i < ITEM_MAX; i++) {
		if (itemArray[i].itemState == ITEM_ALIVE) {
			itemArray[i].x += itemArray[i].speedX;
			itemArray[i].y += itemArray[i].speedY;

			if (itemArray[i].x > 784) {
				itemArray[i].x = 784;
				itemArray[i].speedX = -itemArray[i].speedX;
				//printf("bounce x max %d %d\n", itemArray[i].speedX, itemArray[i].speedY);
			}
			else if (itemArray[i].x < 16) {
				itemArray[i].x = 16;
				itemArray[i].speedX = -itemArray[i].speedX;
				//printf("bounce x min %d %d\n", itemArray[i].speedX, itemArray[i].speedY);
			}

			if (itemArray[i].y < 136) {
				itemArray[i].y = 136;
				itemArray[i].speedY = -itemArray[i].speedY;
				//printf("bounce y min %d %d\n", itemArray[i].x, itemArray[i].y);
			}
			else if (itemArray[i].y > 464) {
				itemArray[i].y = 464;
				itemArray[i].speedY = -itemArray[i].speedY;
				//printf("bounce y max %d %d\n", itemArray[i].x, itemArray[i].y);
			}

			if (itemArray[i].timeLimit == 0)
				itemArray[i].itemState = ITEM_DEAD;

			itemArray[i].timeLimit--;
		}
	}
}

void itemEffect(int itemIndex) {
	if (itemArray[itemIndex].itemType == LIFE) {
		if (playerLife < 5)
			playerLife++;
	}
	else if (itemArray[itemIndex].itemType == BOMB && playerBomb < 9)
		playerBomb++;
	else if (itemArray[itemIndex].itemType == POWER && playerPower < 2)
		playerPower++;

	//printf("playerPower: %d\n", playerPower);

	itemArray[itemIndex].itemState = ITEM_DEAD;
}

void itemCollision(void) {
	int i;

	for(i=0; i<ITEM_MAX; i++) {
		if(itemArray[i].itemState == ITEM_ALIVE) {
			int xdiff, ydiff;
			xdiff = playerX - itemArray[i].x;
			ydiff = playerY - itemArray[i].y;

			if(-PLAYER_COLLISION_BOX < xdiff && xdiff < PLAYER_COLLISION_BOX && -PLAYER_COLLISION_BOX < ydiff && ydiff < PLAYER_COLLISION_BOX)
			{
				itemEffect(i);
			}
		}
	}
}