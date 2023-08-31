#include <stdio.h>
#include <string.h>
char str[100][110];
int ind, n, a[100];

int main() {
    char t[110];
    int i, j, tt;
    scanf("%d\n", &n);
    for(i=0;i<n;i++) {
        fgets(t, 105, stdin);
        t[strlen(t)-1]=0;
        for(j=0;j<ind;j++) {
            if(!strcmp(str[j], t)) break;
        }
        if(j==ind) {
            strcpy(str[ind], t);
            ind++;
            a[j]++;
        }
        else {
            a[j]++;
        }
    }
    for(i=0;i<ind;i++) {
        printf("%d %s : %d\n", i+1, str[i], a[i]);
    }
} 