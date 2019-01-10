#include <stdio.h>
#include <stdlib.h>

const int n = 30;
int c2_2() {
    int a[n];
    int i, j, k;
    for (i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    for(i = 0; i < n; i++){
        if(a[i] % 5 == 0 && a[i] < 200){
            k = k + a[i];
        }
    }
    for(i = 0; i < n; i++){
        if(a[i] % 5 == 0 && a[i] < 200){
            a[i] = k;
        }
        printf("%d/n", a[i]);
    }
    return 0;
}
