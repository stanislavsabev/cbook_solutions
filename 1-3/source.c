/* 
Exercise 1-3. Print Fahrenheit-Celsius table
v1
*/
#include <stdio.h>

int main(){

    float fahr, celsius;
    float lower = 0.0f;
    float upper = 300.0f;
    float step = 20.0f;

    printf("fahr celsius\n");

    fahr = lower;
    while(fahr <= upper){
        celsius = (5.0f/9.0f) * (fahr - 32.0f);
        printf("%3.0f %6.1f\n", fahr, celsius);
        fahr += step;
    }
    char c = getchar();

    return 0;
}