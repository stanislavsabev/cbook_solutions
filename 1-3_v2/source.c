/* 
Exercise 1-3. Print Fahrenheit-Celsius table
v2
*/
#include <stdio.h>

#define LOWER  0     /* lower limit of table */ 
#define UPPER  300   /* upper limit */
#define STEP   20    /* step size */

int main(){

    int fahr;

    printf("fahr celsius\n");
    
    for(fahr = LOWER; fahr <= UPPER; fahr += STEP)
        printf("%3d %6.1f\n", fahr, (5.0f/9.0f) * (fahr - 32.0f));
    
    char c = getchar();
    return 0;
}