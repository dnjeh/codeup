#include <stdio.h>
int main() {
    char love[5], love_answer[5]="love";
    int i;
    scanf("%s", love);
    for(i=0;i<5;i++) {
        if(love[i]!=love_answer[i]) {
            return 0;
        }
    }
    printf("I love you.");
}