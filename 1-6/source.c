/* 
Exercise 1-6. Verify that the expression get char() 
 EDF is 0 or 1
v3 float
*/
#include <stdio.h>

int main()
{
    int c;
    
    while((c = getchar()) != EOF)
    {
        printf("%d\n",c);
    }

    printf("\n%d - at EOF\n", c);
    getchar();
    return 0; 
}