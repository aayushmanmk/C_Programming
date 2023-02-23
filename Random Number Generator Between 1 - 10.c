#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int i;
    srand(time(NULL)); // seed the random number generator with the current time
    for (i = 0; i < 10; i++) {
        int rand_num = rand() % 10 + 1; // generate a random number between 1 and 10
        printf("%d\n", rand_num);
    }
    return 0;
}