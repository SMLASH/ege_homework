#include <stdio.h>
#define N 30

int main(void) {
    int a[N];
    int i, x, y;
    float s;
    for (i = 0; i < N; i++) {
        scanf("%d", &a[i]);
    }
    int sum;
    int value;
    for(int i = 0; i < N; i++){
        if(a[i] % 2 == 1){
            sum = sum + a[i];
            value++;
        }
        
    }
    printf("%d", sum/value);
}
