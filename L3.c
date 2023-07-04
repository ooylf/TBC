#include <stdio.h>

int int_min(int, int);

int main()
{
    int i1, i2;

    while(1)
    {
        printf("Input two integers: ");

        if (scanf("%d %d", &i1, &i2)  != 2)
        break;

        int lesser = int_min(i1, i2);

        printf("The lesser of %d and %d is %d\n", i1, i2, lesser);
    }

    printf("End.\n");

    return 0;
}

int int_min(int i, int j)
// int형 반환자료형은 생략 가능 == 반환자료형이 명시되지 않은 함수는 int형으로 판단
{
    int min;
/* 
    if (i < j)
        min = j;
    else
        min = i;

    return min;
 */

    // return (i < j) ? i : j;

    /* return (float)min;
    반환형이 int형이라 float형이 다시 int형으로 변환되기 때문에 경고 */

    if (i < j)
        return j;
    else
        return i;

    printf("ERROR"); // return 뒤에 있는 것은 실행되지 않는다
    exit(1);

    return;
    

}
