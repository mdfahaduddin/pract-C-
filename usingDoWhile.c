#include<stdio.h>

int main()
{
    float num1,num2,sum1=0,sum2=0,i=1,j=50;

    printf("Enter 2 number : ");
    scanf("%f%f",&num1,&num2);

if(num1>20){
        do{
             sum1=sum1+i;
            i++;
        }
     while(i<=100);
     printf("\nSum of 1-100 = %f\n",sum1);
}
else{
    printf("\nNot possible\n");
}
 if(num2<20){
        do{
             sum2=sum2+j;
            j++;
        }
     while(j<=100);
        printf("\nSum of 50-100 = %f\n",sum2);
}
else{
    printf("\nNot possible\n");
}

    return 0;
}
