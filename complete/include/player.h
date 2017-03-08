#ifndef __PLAYER_H
#define __PLAYER_H

#define DEFAULT_PLAYER_X 100
#define DEFAULT_PLAYER_Y 300
#define PLAYER_BULLET_SPEED 10
#define PLAYER_LIFE_MAX 5
#define PLAYER_BOMB_MAX 99
#define MAX_SPEED 20

void initPlayer(void);
void initPlayerPosition(void);
void setPlayerSpeed(int, int);
void movePlayer(void);
void firePlayerBullet(void);
void firePlayerBomb(void);

#endif