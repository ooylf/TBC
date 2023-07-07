#include <stdio.h>

int main()
{
    int a, b;

    a = 123;

    int *a_ptr;

    a_ptr = &a;

    printf("%d %d %p\n", a, *a_ptr, a_ptr);
    
    *a_ptr = 456;

    printf("%d %d %p\n", a, *a_ptr, a_ptr);

    //b = a_ptr; // 주소값 자체를 다루고 있음, 권장하지 않음
    b = *a_ptr;

    printf("%d\n", b); // 456 출력

    *a_ptr = 789;

    printf("%d\n", b);  // 포인터로 접근한 것이 아니라 당시 저장되어 있던 값만 대입한 것이기 때문에 456
    printf("%d %d %p %p\n", a, *a_ptr, a_ptr, &b);

    b = 12;

    printf("%d\n", b);
    printf("%d %d %p\n", a, *a_ptr, a_ptr);

    a = 1004;
    printf("%d %d %p %p\n", a, *a_ptr, a_ptr, &b);

    return 0;
}