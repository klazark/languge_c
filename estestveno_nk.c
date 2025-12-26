#include<stdio.h>
int main() {

    int k = 0;
    int n = 0;
    int num = 0;
    int count_out = 0;


    printf("k = ");
    scanf("%d", &k);

    printf("n = ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++); {
        printf("\n n = %d", n);
        printf("\n give number = ");
        scanf("%d", &num);

        int k_num = 0;
        while(n > 0) {
            printf("\n n = %d", n);
            n=n/10;
            k_num++;
        }

        printf("\n k_num = %d", k_num);

        if(k_num == 2)  {
            count_out++;
            // count_out+=1;
            // count_out = count_out + 1;
        }

    }

}
