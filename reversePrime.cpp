#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
     int n, rem, i, rev = 0, flag = 0;

     cout<<"Input an integer: ";
     cin>> n;

     while (n != 0) {
     rem = n % 10;
     rev = rev * 10 + rem;
     n /= 10;
  }

      if (rev == 0 || rev == 1)
      flag = 1;

    for (i = 2; i <= rev / 2; ++i) {
    if (rev % i == 0) {
      flag = 1;
      break;
    }
  }

   if (flag == 0){

     cout<<"Prime";
   }
   else{
       cout<<"Not Prime";
   }

getch();
}
