#include <stdio.h>
#include <stdlib.h>

int c4_2()
{
    int n;
    scanf("%d", &n);
    int chisla[n];
    int contrl;
    for(int i  = 0; i < n; i++){
        scanf("%d", &chisla[i]);
    }
    scanf("%d", &contrl);
    int r = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(chisla[i] * chisla[j] > r && chisla[i] * chisla[j] % 26 == 0){
                r = chisla[i] * chisla[j];
            }
        }
    }
    if(r == contrl){
        printf("Вычисленное контрольное значение:%d", r);
    }
    else{
        printf("Контроль не пройден");
    }

    return 0;
}
