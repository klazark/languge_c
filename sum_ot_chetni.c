#include<stdio.h>


int main(void) {
    int n;//broi chisla
    int sum;
    int a;

    printf("vyvedi n =");
    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        prinf("a=");
        scanf("%d", &a);
        if(a%2==0) {
            sum = sum + a;
        }
    }

    if(sum == 0){
        prinf("Nqama takiva chisla")
    } else {
        printf("sum=%d", sum);

    }
//a%2== 0
//sum = sum+a;
}


