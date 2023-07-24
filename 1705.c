#include <stdio.h>
int main() {
    int f=0;
    char a[4]={1, 1, 1};
    scanf("%s", a);
    if(a[0]&&a[0]-48&&!((a[0]-48)%3)) { printf("K"); f++; }
    if(a[1]&&a[1]-48&&!((a[1]-48)%3)) { printf("K"); f++; }
    if(a[2]&&a[2]-48&&!((a[2]-48)%3)) { printf("K"); f++; }
    if(!f) printf("%s", a);
}
