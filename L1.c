#include <stdio.h>

char starprint();
char nameprint();
char locprint();

int main() 
{
    starprint();
    nameprint();
    locprint();
    starprint();
    
    return 0;
}

char starprint()
{
    int count = 20;
    for (int i = 0; i < count; i++)
    {
        printf("*");
    }
    printf("\n");
}

char nameprint()
{
    printf("    JIMMEE \n");
}
char locprint()
{
    printf("     Korea\n");
}