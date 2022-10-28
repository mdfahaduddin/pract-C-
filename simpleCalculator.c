#include<stdio.h>

int main()
{

    float n1,n2,sum=0,sub=0,mul=0,div=0;

    printf("Enter 1st number : ");
    scanf("%f",&n1);
    printf("Enter 2nd number : ");
    scanf("%f",&n2);

    sum=n1+n2;
    sub=n1-n2;
    div=n1/n2;
    mul=n1*n2;


    printf("\nSummation of %f + %f =  %.2f\n",n1,n2,sum);
        printf("\nSubstraction of %f - %f =  %.2f\n",n1,n2,sub);
          printf("\nDivision of %f / %f =  %.2f\n",n1,n2,div);
            printf("\nMultiplication of %f * %f =  %.2f\n",n1,n2,mul);


    return 0;
}
