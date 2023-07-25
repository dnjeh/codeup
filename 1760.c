#include <stdio.h>
char a[11];
int find(char t) {
    for(int i=0;i<10;i++) {
        if(a[i]==t) return i;
    }
}
int main() {
    char t[20];
    scanf("%s\n", a);
    fgets(t, 20, stdin);
    for(int i=0;t[i]!='\n'&&t[i];i++) {
        if(t[i]==' ') printf(" ");
        else printf("%d", find(t[i]));
    }
}