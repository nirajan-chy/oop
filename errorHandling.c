#include <stdio.h>
int divide(int a, int b)
{
    if (b == 0)
        return -1;
    return a / b;
}
int main()
{
    int result = divide(10, 0);

    if (result == -1)
        printf("Cannot divide by zero.\n");
    else
        printf("Result = %d\n", result);
    return 0;
}