#include <stdio.h>
int main() {
    int a, t, i, j;
    scanf("%d", &a);
    char names[a][10];
    int scores[a][2];
    for(i=0;i<a;i++) {
        scanf("%s %d", &names[i], &scores[i][0]);
        scores[i][1]=i;
    }
    for(i=0;i<a;i++) {
        for(j=0;j<a;j++) {
            if(scores[i][0]>scores[j][0]) {
                t=scores[i][0];
                scores[i][0]=scores[j][0];
                scores[j][0]=t;
                t=scores[i][1];
                scores[i][1]=scores[j][1];
                scores[j][1]=t;
            }
        }
    }
    printf("%s", names[scores[2][1]]);
}