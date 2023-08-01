#include <stdio.h>
char s[2][3];
int is(char *t, char tt) {
    if(t[0]==tt||t[1]==tt) return 1;
    else return 0;
}
int main() {
    for(int i=0;i<2;i++) scanf("%s", &s[i]);
    if(is(s[0], 'A')&&is(s[1], 'A')||is(s[0], 'O')&&is(s[1], 'A')||is(s[0], 'A')&&is(s[1], 'O')) printf("A ");
    if(is(s[0], 'A')&&is(s[1], 'B')||is(s[0], 'B')&&is(s[1], 'A')) printf("AB ");
    if(is(s[0], 'B')&&is(s[1], 'B')||is(s[0], 'B')&&is(s[1], 'O')||is(s[0], 'O')&&is(s[1], 'B')) printf("B ");
    if(is(s[0], 'O')&&is(s[1], 'O')) printf("O ");
}