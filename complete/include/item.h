#ifndef __ITEM_H
#define __ITEM_H

#define ITEM_MAX 5
#define ITEM_TIMELIMIT (60 * 10)
#define ITEM_OFFSET 16
#define ITEM_PROB 10

typedef enum {LIFE, POWER, BOMB} ITEM_TYPE;
typedef enum {ITEM_DEAD, ITEM_ALIVE} ITEM_STATE;

typedef struct {
	int x, y, speedX, speedY, timeLimit;
	ITEM_STATE itemState;
	ITEM_TYPE itemType;
} item;

void initItem(void);
void makeItem(int);
void moveItem(void);
void itemEffect(int);
void itemCollision(void);

#endif