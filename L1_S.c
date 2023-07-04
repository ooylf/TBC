#include <stdio.h>
#include <string.h> // strlen()
#include <stdbool.h> // bool

#define WIDTH   40
#define NAME    "Jimmee"
#define ADDRESS "Nowhere, Korea"


void print_chars(char c, int numChar, bool endl);
void print_info(char c[]);

int main()
{
    print_chars('*', WIDTH, true);

    /* nBlanks = (WIDTH - strlen(NAME)) / 2;
    print_chars(' ', nBlanks);
    printf("%s\n", NAME); 
    같은 기능을 하는 코드가 중복되어 함수로 대체*/

    print_info(NAME);
    print_info(ADDRESS);

    print_chars('*', WIDTH, false);

    return 0;
}

void print_chars(char c, int numChar, bool print_newline)
// 기능만 수행하는 것이기 때문에 반환값은 void
{
    for (int i = 0; i < numChar; i++)
        printf("%c", c);    // putchar(c)를 사용해도 됨
    
    if (print_newline == true)
        printf("\n");
    // main 함수에서 줄바꿈하는 대신 함수에서 줄바꿈 기능을 수행하도록 변경
}

void print_info(char str[])
{
    int nBlanks = 0;

    nBlanks = (WIDTH - strlen(str)) / 2;

    print_chars(' ', nBlanks, false);
    printf("%s\n", str);
}
