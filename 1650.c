#include <stdio.h>
int main() {
    int i, j, n, m, t1=1, t2=1;
    char a[7][36] = {
        {" ****  ***  ***   ***** *   * ****"}, 
        {"*     *   * *  *  *     *   * *   *"}, 
        {"*     *   * *   * *     *   * *   *"}, 
        {"*     *   * *   * ****  *   * ****"}, 
        {"*     *   * *   * *     *   * *"}, 
        {"*     *   * *  *  *     *   * *"}, 
        {" ****  ***  ***   *****  ***  *"}, 
    };
    scanf("%d %d", &n, &m);
    for(i=0;i<7;i++) {
        for(j=0;j<36&&a[i][j]!='\0';j++) {
            printf("%c", a[i][j]);
            if(t1<n) {
                t1++;
                j--;
            }
            else {
                t1=1;
            }
        }
        printf("\n");
        if(t2<m) {
            t2++;
            i--;
        }
        else {
            t2=1;
        }
    }
}