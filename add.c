#include <stdio.h>
int main()
{
    int n=10, i;
    unsigned long long factorial = 1;
    printf("Enter an integer: ");
    if (n < 0)
        printf("Error! Factorial of a negative number doesn't exist.");
    else
    {
        for(i=1; i<=n; ++i)
        {
            factorial *= i;            
        }
        printf("Factorial of %d = %llu", n, factorial);
    }
    return 0;
}
