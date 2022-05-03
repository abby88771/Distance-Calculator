#include<stdio.h>
#include "io.h"
void two(Number *num){
    num->two = 5;
    printf("Compile :%d\n",num->two);
}