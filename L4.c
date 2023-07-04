#include <stdio.h>

int int_max(int i1, int i2);

int main()
{
    int a;
    
    a = int_max(1,2);

    printf("%d\n", a);
    printf("%p\n", &a);

    {
        int a;
        a = int_max(4,5);
    
        printf("%d\n", a);
        printf("%p\n", &a);
    
        int b = 123;
    }

    printf("%d\n", a);
    printf("%p\n", &a);

    return 0;
}

int int_max(int i1, int i2)
{
    if (i1 > i2)
        return i1;
    else
        return i2;    
}