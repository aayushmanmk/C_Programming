#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define COUNT 1000000.00
int main() {
    srand(time(NULL)); // seed the random number generator with the current time
    int i;
    int one_count;
    int zero_count;
    float zero_perc;
    float one_perc;
    for (i = 0; i < COUNT; i++) {
        int rand_num = rand() % 2; // generate a random integer between 0 and 1
//        printf("%d\n", rand_num);
        if(rand_num==1){
                one_count++;
                }
        else if(rand_num==0){
                zero_count++;
                }
     }
    zero_perc=(zero_count / COUNT) * 100;
    one_perc=(one_count / COUNT) * 100;
    printf("Percentage of ones = %.2f %   Percentage of zeroes = %.2f %\n",one_perc,zero_perc);
    return 0;
}