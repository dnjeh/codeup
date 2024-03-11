#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
    srand(time(NULL));
    int i;
    for(i=0;i<3;i++) {
        printf("%c%d\n", rand()%26+65, rand()%10);
    }
    _sleep(3000);
    main();
}