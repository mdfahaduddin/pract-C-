#include<stdio.h>

int main()
{
    float num1,num2,sum1=0,sum2=0,i=1,j=50;

    printf("Enter 2 number : ");
    scanf("%f%f",&num1,&num2);

if(num1>20){
     while(i<=100){
            sum1=sum1+i;
            i++;
        }
        printf("\nSum of 1-100 = %f\n",sum1);
}
else{
    printf("\nNot possible\n");
}
 if(num2<20){
     while(j<=100){
            sum2=sum2+j;
            j++;
        }
        printf("\nSum of 50-100 = %f\n",sum2);
}
else{
    printf("\nNot possible\n");
}

    return 0;
}
