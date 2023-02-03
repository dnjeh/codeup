#include <stdio.h>
#include <string.h>
int main() {
    int n, i, j;
    scanf("%d", &n);
    char a[n][30], t, c[30];
    int b[n];
    scanf("%c", &t);
    for(i=0;i<n;i++) {
        j=0;
        for(scanf("%c", &t);t!=',';scanf("%c", &t), j++) a[i][j]=t;
        a[i][j]='\0';
        for(j=0;j<2;j++) scanf("%c", &t);
        scanf("%d", &b[i]);
        while(getchar()!='\n');
    }
    scanf("%s", c);
    for(i=0;i<n;i++) if(!strcmp(&a[i], c)) printf("%d", b[i]);
}