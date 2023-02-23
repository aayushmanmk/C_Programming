## Programming using C on a raspberry pi

---
Some examples:

Example 1:

```
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
```

Output:

![image](https://user-images.githubusercontent.com/124895858/220927728-1fb00fea-ae48-4484-92bb-728858be7de0.png)

Example 2:

```
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
```

Output:

![image](https://user-images.githubusercontent.com/124895858/220928117-1cca4fe1-d96d-43d1-ba7e-15101798fd15.png)


To output as many results as you want to of this percentage and output to a .txt file do the following command:
 ```
 while [ 1 ]; do ./rand2; done > 1or0perc.txt
 ```
 
 Inside the file:
 
 ![image](https://user-images.githubusercontent.com/124895858/220928522-01345262-75fd-4afd-933f-1a2f99f9160c.png)

File is called 1or10perc.txt
