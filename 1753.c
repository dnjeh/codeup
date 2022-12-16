#include <stdio.h>
#include <string.h>
int main() {
    int i, j, n;
    char t[102]={'\0',};
    scanf("%d", &n);
    for(i=0;i<n;i++) {
        scanf("%s", t);
        for(j=(int)strlen(t)-1;j>=0;j--) {
            if(t[j]) printf("%c", t[j]);
        }
        printf("\n");
    }
} 