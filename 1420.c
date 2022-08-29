#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
    int a, i, j, temp;
    scanf("%d", &a);
    char name[a][10];
    int score[a][2];
    for(i=0;i<a;i++) {
        scanf("%s %d", &name[i], &score[i][0]);
        score[i][1]=&name[i];
    }
    for(i=0;i<a;i++) {
        for(j=0;j<a;j++) {
            if(score[i]<score[j]) {
                temp=score[i][0];
                score[i][0]=score[j][0];
                score[j][0]=temp;
                temp=score[i][1];
                score[i][1]=score[j][1];
                score[j][1]=temp;
            }
        }
    }
    printf("%s", name[2][1]);
    system("pause");
}