#include <stdio.h>
#include <string.h>
int main() {
    int i, n, cnt=0;
    char t[55];
    scanf("%d\n", &n);
    for(i=0;i<n;i++) {
        fgets(t, 55, stdin);
        if(strlen(t)<=4||strstr(t, "tap")!=NULL||strstr(t, "xocure")!=NULL) {
            cnt++;
            printf("%s", t);
        }
    }
    if(3>=cnt) printf("safe");
    else if(6>=cnt) printf("warning");
    else printf("danger");
}