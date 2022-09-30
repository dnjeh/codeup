#include <stdio.h>
#include <string.h>
char origin[101];
char str[101];
char substr[101];
char *mysubstr(char *str, int start, int count)

{
    int i;
    strcpy(origin, str);
    for(i=start;i<start+count;i++) {
        substr[i-start]=origin[i];
    }
    substr[i-start]='\0';
    return substr;
    // 함수 처리부

}
int main() {
    int a, b;
    fgets(str, 100, stdin);
    scanf("%d %d", &a, &b);
    printf("%s", mysubstr(str, a, b));
}