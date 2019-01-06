//https://inf-ege.sdamgia.ru/problem?id=2921

#define N 30

#include <stdio.h>

#include "ege_c2_1.h"


int c2_1(void) {
    int a[N];
    int i, x, y;
    float s;
    for (i = 0; i < N; i++) {
        scanf("%d", &a[i]);
    }
    y = 0;
    x = 0;
    for(int i = 0; i < N; i++){
        if(a[i] % 2 == 1){
            y = y + a[i];
            x++;
        }
    }
    printf("%f", (float) y / x);
}

