﻿#include <stdio.h>
int main() {
    int i, a;
    scanf("%d", &a);
    for(i=1;i<=a;i++) {
        if(i%3==0)
            continue;
        printf("%d ", i);
    }
}
