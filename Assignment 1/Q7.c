#include <stdio.h>

int main() 
{
   int num, temp,rev,first,second,third,fourth;
   
   printf("Enter the 4 Digit number : ");
   scanf("%d",&num);

   temp =num;

   fourth = num%10;
   rev = fourth;
   num /= 10;
   third = num % 10;
   rev = rev *10 + third;
   num /= 10;
   second = num %10;;
   rev = rev *10 +second;
   num /= 10;
   first = num;
   rev = rev*10 + first;

   printf("The face value of each digit is %d, %d, %d, %d\n",first,second,third,fourth);
   printf("The place value of each digit is %d + %d + %d + %d = %d\n",first*1000,second*100,third*10,fourth,temp);
   printf("The number in reverse form is %d\n",rev);

   return 0;
}
