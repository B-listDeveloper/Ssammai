#ifndef UTIL
#define UTIL

#define CONST_PIDOUBLE 6.2831853072
#define CONST_PI 3.1415629535
#define CONST_PIHALF 1.570796326

int clamp(int x, int a, int b);
void swap(int *x, int *y);
void order(int *x, int *y);

inline int absi(int x);

float myfloor(float x);
float mod(float x, float f);

float Q_rsqrt(float number);
float mysqrt(float x);

float mysin(float x);
float mycos(float x);

#endif