#include<stdio.h>

int main() {

    int n;
    int m;
    int sum;
    printf("vyvedete estestveno chislo \n");
    scanf("%d", &n);

    printf(" n= %d", n);
    while(n>0) {

        m = n%10;
        if (m%2 == 0)
        {
            sum = sum+ m; //sum += m;
        }
        // else {
        //   sum =0;
        //}
        n = n/10;
    }

    if (sum == 0){

        printf("Nqama chetni cifri");
    }

    printf("\n sum = %d", sum);



}

