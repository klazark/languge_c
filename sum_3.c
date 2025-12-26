#include<stdio.h>

int main()
{
//sum ot n chisla
    int n;
    printf("n =");
    scanf("%d", &n);

    int a;
    int sum = 0;

// tuk prawim cikala
    for(int i = 1; i<=n; i++)
    {
        printf("a =");
        scanf("%d", &a);
        if(a%3 == 0)
        {
            printf("ima chislo koeto se deli na 3");
            sum += a;
        }
    }

    if(sum == 0) {
        printf("nqama takova chislo \n");
    }


    printf("%d\n", sum);
    printf("%d", &sum);

    return 0;
}
