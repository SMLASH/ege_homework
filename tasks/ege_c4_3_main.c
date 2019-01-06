#include <stdio.h>

int c4_3() {
    int a = 0;
    int b = 0;
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        int x;
        scanf("%d", &x);
        if (x % 2 == 0 && x > a) {
            a = x;
        } else if (x % 2 && x > b) {
            b = x;
        }
    }
    int contrl;
    contrl = a + b;
    printf("Вычисленное контрольное значение: %d", contrl);
    int R;
    scanf("%d", &R);
    if (R == contrl) {
        printf("Контроль пройден");
    } else {
        printf("Контроль не пройден");
    }

}
//https://inf-ege.sdamgia.ru/problem?id=7772
