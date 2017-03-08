#ifndef __GAME_H
#define __GAME_H

#define STAGE_MAX_TIME (60 * 30)

typedef enum {MAIN, GAME, CLEAR, GAMEOVER, CREDIT, ENDING} GAME_STATE;

void initGame(void);
void startGame(void);
void gameOver(void);
void goNextStage(void);
void startStage(void);
void showCredit(void);
void showEnding(void);

#endif