//
// Created by misakisin on 07.03.24.
//

#include <stdio.h>
#include "funcPack.h"

void area(int a, int b){
    printf("Площа прямокутника: %d\n" , a*b);
}

void factorial(int a){
    int res = 1;
    for(int i = 1; i <= a; i++){
        res *= i;
    }
    printf("Факторіал числа: %d\n", res);
}

void avenger(int num[], int size){
    float res;
    for (int i = 0; i < size; i++){
        res += num[i];
    }
    res /= size;
    printf("Середнє значення масиву: %f\n", res);
}