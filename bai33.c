#include <stdio.h>

int main()
{
    int n, i, j, z;
    do
    {
        printf("\n hay nhap n: ");
        scanf("%d", &n);
    } while (n < 0 || n > 10);
    i = 10;
    while (i <= 99)
    {
        j = i % 10;
        z = i/10;
        if (z + j == n)
        {
            printf("\n so puh hop voi dieu kien la: %d va %d", z, j);
        }
        i++;
    }

    return 0;
}