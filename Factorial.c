#include <stdio.h>
int fact(int);
int main()
{
    int a, result;
    printf("Enter the number\n");
    scanf("%d", &a);
    result = fact(a);
    printf("\nThe factorial is: %d \n", result);
    return 1;
}
int fact(int a)
{
    int i = a, n = 1;
    if (a == 0 || a == 1)
    {
        return 1;
    }
    while (i != 0)
    {
        n = n * i;
        i--;
    }
    return n;
}
