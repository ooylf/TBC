#include <stdio.h>

int main()
{
    int* safer_ptr = NULL;

    int a = 123;

    int b;
    scanf("%d", &b);

    if (b % 2 == 0)
        safer_ptr = &a;

    if (safer_ptr != NULL)
        printf("%p\n", safer_ptr);

    if (safer_ptr != NULL)
        printf("%d\n", *safer_ptr);
    
    return 0;
}