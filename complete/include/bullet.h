#ifndef __BULLET_H
#define __BULLET_H

typedef enum {BULLET_ALIVE, BULLET_DEAD} BULLET_STATE;

typedef struct {
	int x, y, speedX, speedY;
	BULLET_STATE state;
}bullet;

#define PLAYER_BULLET_MAX 50
#define ENEMY_BULLET_MAX 100

void initBullet(void);
void moveBullet(void);
void bulletCollision(void);

#endif