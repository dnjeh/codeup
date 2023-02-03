#include <stdio.h>
#include <string.h>
typedef struct person {
    char me[30];
    char gend;
    int age;
    char fri[10][30];
} people;
people sns[150];
int main() {
    int n, i, j, k, cnt[2]={0, };
    char t, find[30];
    scanf("%d", &n);
    scanf("%c", &t);
    for(i=0;i<n;i++) {
        for(scanf("%c", &t), j=0;t!=',';scanf("%c", &t), j++) sns[i].me[j]=t;
        for(scanf("%c", &t), j=0;t!=',';scanf("%c", &t), j++) sns[i].gend=t;
        scanf("%d,", &sns[i].age);
        for(j=0, k=0;t!='\n';j++) {
            scanf("%c", &t);
            if(t==',') {
                k++;
                j=-1;
            }
            else if(t=='\n') break;
            else sns[i].fri[k][j]=t;
        }
    }
    scanf("%s", find);
    for(i=0;i<n;i++) {
        if(!strcmp(find, sns[i].me)) {
            for(j=0;sns[i].fri[j][0];j++) {
                for(k=0;k<n;k++) {
                    if(!strcmp(sns[k].me, &sns[i].fri[j][0])) {
                        if(sns[k].gend=='F') cnt[1]++;
                        else cnt[0]++;
                    }
                }
            }
            break;
        }
    }
    printf("%d\n%d", cnt[0], cnt[1]);
}