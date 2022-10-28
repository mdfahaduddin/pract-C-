#include <stdio.h>
int main() {

    int n, i, range;

    printf("Enter range: ");
    scanf("%d", &range);

        while(range <=0){
        printf("Not possible !\n");
        printf("Again, Enter range: ");
        scanf("%d", &range);
    }

    float num[range], sum = 0, Average ;

    printf("Enter the numbers of elements: ");
    scanf("%d", &n);

     while (n > range || n < 1) {
        printf("Number should in range of  1 to %d\n",range);
        printf("Again, Enter the numbers of elements : ");
        scanf("%d", &n);
    }

    for (i = 0; i < n; i++) {
        printf("Enter position %d number: ", i + 1);
        scanf("%f", &num[i]);
        sum = sum + num[i];
    }

    Average  = sum / n;
    printf("\nAverage of %d numbers = %.2f\n",n, Average );


    return 0;
}
