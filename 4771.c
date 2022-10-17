#include <stdio.h>
int main() {
    char dish[51], t;
    int i, sum=0;
    scanf("%s", dish);
    for(i=0;dish[i]!='\0';i++) {
        if(i==0||t!=dish[i]) {
            sum+=10;
            t=dish[i];
        }
        else {
            sum+=5;
        }
    }
    printf("%d", sum);
}