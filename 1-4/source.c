/* 
Exercise 1-3, 1-4. Print Fahrenheit-Celsius table
v3 float
*/
#include <stdio.h>

int main()
{
    float fahr, celsius;
    float lower, upper, step;

    lower = 0.f;
    upper = 300.f;
    step = 20.f;

        printf("Fahr   Celsius\n");
        printf("-------------\n");

    for(celsius = lower; celsius <= upper; celsius +=step)
    {
        fahr = 32.f + (9.0f*celsius)/5.0f;
        printf("%6.1f %8.1f\n", fahr, celsius);
    }

    getchar();
    
    return 0; 
}