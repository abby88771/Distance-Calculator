#include<stdio.h>
#include "io.h"
void one(Number *num){
    num->one = 4;
    printf("Compile :%d\n",num->one);
}