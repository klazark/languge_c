#include<stdio.h>
int main()
{
//sum ot n chisla
    int n;
    printf("n=");
    scanf("%d", &n);
    int a;
    int sum;


    for(int i = 1; i<=n; i++)
    {
        printf("a=");
        scanf("%d", &a);
        sum+=a;
    }


    printf("%d", sum);

    return 0;
}
