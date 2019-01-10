#include <stdio.h>
#define N 30

int c2_3(void) {
    int a[N];
    int i, j, max;
    for (i = 0; i < N; i++){
        scanf("%d", &a[i]);
    }
    for(int i = 0; i < N; i++){
        if(a[i] > max && a[i] < 0){
            max = a[i];
        }
    }
    printf("%d", max);

}
