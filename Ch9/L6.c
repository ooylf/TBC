#include <stdio.h>

void my_func(int);

int main()
{
    my_func(1);

    return 0;
}

void my_func(int n)
{
    printf("Level %d, address of variable n = %p\n", n, &n);

    if (n <= 4)
    // 재귀 호출에서는 stop condition이 반드시 필요하다
        my_func(n + 1);
    
    printf("Level %d, address of variable n = %p\n", n, &n);
}