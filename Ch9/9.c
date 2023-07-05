#include <stdio.h>

void print_binary(unsigned long n);
void print_binary_loop(unsigned long n);

int main()
{
    unsigned long num = 10;

    print_binary_loop(num);
    print_binary(num);

    printf("\n");
}

void print_binary(unsigned long n)
{
    if (n > 0)
    {
        print_binary(n / 2);
    
        printf("%d", n % 2);
    }

}

void print_binary_loop(unsigned long n)
{

    while (n > 0)
    {
        int q = n / 2;
        printf("%d", n % 2);

        n = q;
    }

    printf("\n");
}