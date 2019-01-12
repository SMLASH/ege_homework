//https://inf-ege.sdamgia.ru/problem?id=6792

#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);
    int results[n];
    int most_often = 0;
    int counter_of_most_often[0];
    int max_value_of_cases = 0;
    for(int i = 0; i < n; i++){
        int kids;
        int sweets;
        scanf("%d %d", &kids, &sweets);
        if(kids % sweets == 0){
            results[i] = 0;
        }
        else{
            results[i] = sweets % kids;
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n / 2; j++){
            if(results[i] == results[j] && results[i] != 0){
                counter_of_most_often[i]++;
            }
        }
        if(counter_of_most_often[i] > max_value_of_cases)
            most_often = results[i];
    }
    printf("%d", most_often);

}
