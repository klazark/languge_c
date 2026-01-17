//Да се определи дали дадено естествено число се състои от различн цифри(т.е. няма повтарящи се цифри).
//Пример 1: Вход: 12324 Изход: НЕ
//Пример 1: Вход: 1256 Изход: ДА


#include<stdio.h>
int main(void) {
    int n;
    int a;
    int hasDuplicate = 0;// ako ima = 1

    //n = 34563
    printf("n = ");
    scanf("%d", &n);

    while(n > 0) {
        a = n%10;//3
        n = n / 10;//3456

        //printf("current a = %d \n", a);
        //printf("current n = %d n", n);

        int n_temp = n;//3456
        // wlojen cical
        while(n_temp > 0) {
            int a_temp = n_temp%10;//3
            n_temp = n_temp / 10;//3456

            if(a_temp == a) {
                hasDuplicate = 1;
            }

        }
    }

    if (hasDuplicate) {
        printf("NE\n");
    } else {
        printf("DA\n");
    }



    printf("END");


}
