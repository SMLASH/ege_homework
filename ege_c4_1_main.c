#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int deti;
    scanf("%d", &n);
    int results[n];
    int konf;
    int sneg_znach = 0;
    int zapisi = 0;
    int max;
    for(int i = 0; i < n; i++){
        scanf("%d", &deti);
        scanf("%d", &konf);
        results[i] = deti - konf;
        sneg_znach = sneg_znach + (deti - konf);
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(results[i] == results[j]){
                zapisi++;
            }
        }
        if(zapisi > max){
            max = zapisi;
        }
    }
    if(sneg_znach == 0){
        printf("0");
    }
    else{
        printf("%d", max);
    }
    return 0;
}
