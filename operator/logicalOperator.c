#include <stdio.h>
int main()
{
    int a = 10, b = 20;
    printf("%d\n", a < b && b > 5);
    printf("%d\n", a > b || b > 5);
    printf("%d\n", !(a > b));
    return 0;
}