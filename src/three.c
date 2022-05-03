#include<stdio.h>
#include "io.h"
void three(Number *num){
    num->three = 6;
    printf("Compile :%d\n",num->three);
}