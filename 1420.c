#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
    int a, i, j, temp;
    scanf("%d", &a);
    char name[a][10], ntemp[10];
    int score[a];
    for(i=0;i<a;i++) {
        scanf("%s %d", &name[i], &score[i]);
    }
    for(i=0;i<a;i++) {
        for(j=0;j>a;j++) {
            if(score[i]<score[j]) {
                temp=score[i];
                strcpy(ntemp, name[i]);
                score[i]=score[j];
                strcpy(name[i],name[j]);
                score[j]=temp;
                strcpy(name[j],ntemp);
            }
        }
    }
    printf("%s", name[2]);
    system("pause");
}