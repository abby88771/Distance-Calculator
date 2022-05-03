#include<stdio.h>
#include "io.h"
#include "gravity.h"
void one(Number *);
void two(Number *);
void three(Number *);

int main()
{
    //Test1
    Number num ;
    Number *pnum = &num;
    one(pnum);
    two(pnum);
    three(pnum);
    printf("main: %d %d %d\n", pnum->one, pnum->two, pnum->three);
    //Test2
    Gravity input;
    input.v=0;
    input.a=0;
    input.t=0;
    printf("Please input Velocity(m/s):v\n");
    scanf("%lg",&input.v);
    printf("Please input Angle(degree):a\n");
    scanf("%lg",&input.a);
    printf("Please input Time(sec):t\n");
    scanf("%lg",&input.t);
    total(input.v,input.a,input.t,x_distance,y_distance,t_time);
    return 0;
}