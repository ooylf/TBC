#include <stdio.h>

long loop_factorial(int n);
long recursive_factorial(int n);

int main()
{
    int num = 7;

    printf("%d\n", loop_factorial(num));
    printf("%d\n", recursive_factorial(num));

    return 0;
}

long loop_factorial(int n)
{
    long loop_result;
    
    for (loop_result = 1; n > 0; n--)
        loop_result = loop_result * n;

    return loop_result;
}

long recursive_factorial(int n)
{

    if (n > 1)    
        n = n * recursive_factorial(n - 1);
    else
        n = n * 1;

    return n;
}