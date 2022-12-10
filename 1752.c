#include <stdio.h>
int main() {
    int i;
    char t[21]={'\0',};
    scanf("%s", &t);
    for(i=19;i>=0;i--) {
        if(t[i]) printf("%c", t[i]);
    }
}