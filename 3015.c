#include <stdio.h>
typedef struct person {
    char name[11];
    int score;
    int next;
} people;
int b[101][2];
int main() {
    int b[101][2];
    int n, m, i, cnt=0, t;
    scanf("%d %d", &n, &m);
    people a[n];
    for(i=0;i<n;i++) a[i].next=-1;
    for(i=0;i<101;i++) b[i][0]=b[i][1]=-1;
    for(i=0;i<n;i++) {
        scanf("%s%d", a[i].name, &a[i].score);
        if(b[a[i].score][0]==-1) {
            b[a[i].score][1]=b[a[i].score][0]=i;
        }
        else {
            b[a[i].score][1]=a[b[a[i].score][1]].next=i;
        }
    }
    for(i=100;i>=0&&cnt<m;i--) {
        if(b[i][0]!=-1) {
            printf("%s\n", a[b[i][0]].name);
            cnt++;
            t=b[i][0];
            while(a[t].next!=-1&&cnt<m) {
                printf("%s\n", a[a[t].next].name);
                t=a[t].next;
                cnt++;
            }
        }
    }
}