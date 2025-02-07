#include <stdio.h>
int main()
{
    int a,b,c,n;
    a = 0;
    b =1;
    printf("Enter the number of terms you want: ");
    scanf("%d", &n);

    printf("%d\t%d\t", a, b);

    for (int i ; i < n-2; i++)
    {
        c = a + b;
        printf("%d\t", c);
        
        a = b;
        b = c;
    }
    
    return 0;
}