#include <stdio.h>
#include <stdlib.h>
#define N 30
int main(void)
{

    printf("%f\n", (float) 5 / 2);

int a[N];
int min,max,i,sum;
float sred1,sred2;
for (i=0; i < N; i++)
//cin >> a[i];
    max = a[0];
    sum = 0;
    min = a[0];
    for(i = 1; i < N; i++){
        if(a[i] < min){
            min = a[i];
        }
        else if(a[i] > max){
            max = a[i];
        }
        sum += a[i];
    }
    sred1 = (float) (max + min) / 2;
    sred2 = sum / 30;
    printf("%d", sred1 - sred2);

}
