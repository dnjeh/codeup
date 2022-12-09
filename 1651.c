#include <stdio.h>
int main() {
    int i, j, k, l, w, h, n;
    char t[102]={'\0',};
    scanf("%d %d %d", &w, &h, &n);
    for(i=0;i<n;i++) {
        scanf("%s", t);
        for(j=0;j<h;j++) {
            for(k=0;t[k]!='\0';k++) {
                for(l=0;l<w;l++) {
                    printf("%c", t[k]);
                }
            }
            printf("\n");
        }
    }
}