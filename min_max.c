//Да се въведат n на брой числа. Да се намери най-голямото и най-малкото от тези числа.
#include<stdio.h>

int main(void) {
    int n;
    int a;
    int min, max;

    printf("n = ");
    scanf("%d", &n);


    for(int i = 0; i<n; i++) {
        printf("a = ");
        scanf("%d", &a);

        if(i==0) {
            min = a;
            max = a;
        }

        if (min > a) {
            min = a;
        }
        if(max < a){
            max = a;
        }
    }

    printf("min = %d \n", min);
    printf("max = %d \n", max);

}

