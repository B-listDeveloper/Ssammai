#ifndef __ENEMY_H
#define __ENEMY_H

#define ENEMY_MAX_NUMBER 30
#define ENEMY_EXPLOSION 31

typedef enum {ENEMY_DEAD, ENEMY_ALIVE, ENEMY_EXPLODING} ENEMY_STATE;
typedef enum {NORMAL, RUSH, TWIN, SPLIT, MINE} ENEMY_TYPE;

typedef struct {
	int x, y, speedX, speedY;
	int hp;
	int hp2;
	int cooltime;
	int explosion;
	ENEMY_STATE state;
	ENEMY_TYPE type;
}enemy;

void initEnemy(void);
void makeEnemy(void);
void moveEnemy(void);
void fireEnemyBullet(void);

#endif