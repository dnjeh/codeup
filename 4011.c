#include <stdio.h>
int main() {
    int front, back, year, month, day;
    scanf("%d-%d", &front, &back);
    year=front/10000;
    month=(front/100)%100;
    day=front%100;
    printf("%s%02d/%02d/%02d %c", (back/1000000)<3?"19":"20", year, month, day, (back/1000000)%2==1?'M':'F');
}