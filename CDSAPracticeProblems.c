// 🟢 Level 1 — Absolute Basics


// Print numbers from 1 to N


// #include <stdio.h>
// int main()
// {   for(int i=0;i<=10;i++)
//     {
//         printf("%d\n",i);
//     }
//     return 0;
// }

// Print numbers from N to 1


// #include <stdio.h>
// int main()
// {
//     for(int i=10;i>=0;i--)
//     {
//         printf("%d\n",i);
//     }
//     return 0;
// }

// Print even numbers from 1 to N

// #include <stdio.h>

// int main()


// {   
//     for(int i=0;i<=10;i++)
//     {
//         if(i%2==0)
//         {
//             printf("%d\n",i);
//         }
//     }
//     return 0;
// }


// Print odd numbers from 1 to N

// #include <stdio.h>
// int main()
// {   
//     for(int i=0; i<=10; i++)
//     {
//         if(i%2 != 0)
//         {
//             printf("%d\n",i);
//         }
//     }
//     return 0;
// }


// Find sum of numbers from 1 to N

// #include <stdio.h>
// int main()
// {   
//     int sum = 0;
//     for(int i=0;i<=10;i++)
//     {
//         sum+=i;
//         printf("%d\n",sum);
//     }
//     return 0;
// }


// Find sum of even numbers


// #include <stdio.h>
// int main()
// {
//     int sum = 0;
//     for(int i=0;i<=10;i++)
//     {
//         if(i%2==0)
//         {
//             sum+=i;
//             printf("%d\n",sum);
//         }
//     }
//     printf("Sum:%d\n",sum);
//     return 0;
// }


// Find sum of odd numbers

// #include <stdio.h>
// int main(){
// int sum =0;
// for(int i=0;i<=10;i++)
// {
//    if(i%2!=0)
//    {
//     sum+=i;
//     printf("%d\n",sum);
//    }
// }
//   return 0;
// }

// Print multiplication table

// #include <stdio.h>
// int main()
// {   
//     int Num = 2;
//     for(int i =2; i<=10;i++)
//     {
//         printf("%d * %d = %d\n",Num, i, Num*i);
//     }
// return 0;
// }

// Count numbers divisible by 3

// #include <stdio.h>
// int main()
// {
//     int count = 0;
//     for(int i=0;i<=10;i++)
//     {
//         if(i%3==0)
//         {
//           count++;
//           printf("%d\n",i);
//         }
//     }
// printf("Total Number which can divisible by 3 between 1 to 10:%d\n",count);
// return 0;
// }


// Calculate a^b without pow()

// #include <stdio.h>
// int main()
// {   
//     int a=5;
//     int b=10;
//     int result=1;
//     for(int i=0;i<=b;i++)
//     {
//         result*=a;
//         printf("%d^%d=%d\n",a,i,result);
//     }
//      printf("Final Result is: %d^%d = %d\n",a,b,result);
//     return 0;
// }




// 🟢 Level 2 — Number Problems


// Check whether a number is positive, negative, or zero

// #include <stdio.h>
// int main()
// {   
//     int Num ;
//     printf("Enter Number to Check Positive or Negative or Zero: ");

//     scanf("%d",&Num);
//     {
//         if(Num==0)
//         {
//             printf("Zero:%d\n",Num);
//         }
//         else if (Num<0)
//         {
//             printf("Negative:%d\n",Num);
//         }
//         else if (Num>0)
//         {
//             printf("Positive:%d\n",Num);
//         }
    
//     }
//     return 0;
// }



// Check whether a number is even or odd


// #include <stdio.h>
// int main()
// {   
//     int Number;
//     printf("Enter Number to Check Even or odd: ");
//     scanf("%d",&Number);

//     if(Number %2==0)
//     {
//         printf("Number %d is Even\n",Number);
//     }
//     else{
//         printf("Number %d is Odd\n",Number);
//     }
//     return 0;
// }


// Find the largest of two numbers

// #include <stdio.h>

// int main()
// {   int Num1;
//     int Num2;
//     printf("Enter First Number: ");
//     scanf("%d",&Num1);
//     printf("Enter Second Number: ");
//     scanf("%d",&Num2);
//     if(Num1>Num2)
//     {
//         printf("Number %d is largest\n",Num1);
//     }
//     else if (Num2>Num1)
//     {
//         printf("Number %d is Largest\n",Num2);
//     }
//     else{
//         printf("Equal\n");
//     }
    
//     return 0;
// }



// Find the largest of three numbers

// #include <stdio.h>

// int main()
// {   
//     int First_Num;
//     int Second_Num;
//     int Thirs_Num;
//     printf("Enter First Number: ");
//     scanf("%d",&First_Num);
//     printf("Enter Second Number: ");
//     scanf("%d",&Second_Num);
//     printf("Enter Third Number: ");
//     scanf("%d",&Thirs_Num);

//     if(First_Num>Second_Num && First_Num>Thirs_Num)
//     {
//         printf("First Number is Largest\n");
//     }
//     else if (Second_Num>First_Num && Second_Num>Thirs_Num)
//     {
//         printf("Second Number is Largest\n");
//     }
//     else if (Thirs_Num>First_Num && Thirs_Num>Second_Num)
//     {
//         printf("Third Number is Largest\n");
//     }
    
//     return 0;
// }







// Find the smallest of three numbers


// #include <stdio.h>

// int main()
// {   
//     int Num1;
//     int Num2;
//     int Num3;

//     printf("Enter Num1: ");
//     scanf("%d",&Num1);

//     printf("Enter Num2: ");
//     scanf("%d",&Num2);

//     printf("Enter Num3: ");
//     scanf("%d",&Num3);

//    if(Num1<Num2 && Num1<Num3)
//    {
//     printf("Num1 is Smallest\n");
//    }
//    else if (Num2<Num1 && Num2<Num3)
//    {
//     printf("Num2 is Smallest\n");
//    }
//    else if (Num3<Num1 && Num3<Num2)
//    {
//     printf("Num3 is Smallest\n");
//    }
//     return 0;
// }




// Check whether a year is a leap year

// #include <stdio.h>

// int main()
// {   
//     int Year;

//     printf("Enter Year: ");
//     scanf("%d",&Year);
//     if(Year%400==0||(Year%400==0 && Year%100!=0))
//     {
//        printf("Year is Laf Year\n");
//     }
//     else{
//         printf("Not Leaf Year\n");
//     }

//     return 0;
// }


// Check whether a number is divisible by 5 and 11


// #include <stdio.h>

// int main()
// {
//   int Number;
//   printf("Enter Number: ");
//   scanf("%d",&Number);
//   if(Number%5==0 && Number%11==0)
//   {
//     printf("Number Is Divisible by 5 and 11\n");
//   }
//   else{
//     printf("Not\n");
//   }
//   return 0;
// }



// The && means both conditions must be true.

// So:

//               Number
//                  │
//        ┌─────────┴─────────┐
//        ▼                   ▼
//    % 5 == 0            % 11 == 0
//        │                   │
//        └─────────┬─────────┘
//                  │
//                 &&
//                  │
//              TRUE?
//             /      \
//           YES       NO
//            │         │
//         Divisible   Not



// Example 1: 55
// 55 % 5  = 0  → TRUE
// 55 % 11 = 0  → TRUE

// TRUE && TRUE → TRUE

// Output:

// Number Is Divisible by 5 and 11
// Example 2: 10
// 10 % 5  = 0  → TRUE
// 10 % 11 = 10 → FALSE

// TRUE && FALSE → FALSE

// Output:

// Not



// Check whether a number is a multiple of another number



#include <stdio.h>

int main()
{   int p;
    int q;
    printf("Enter First Num: ");
    scanf("%d",&p);

    printf("Enter Second Number: ");
    scanf("%d",&q);
    
    if(p%q==0)
    {
        printf("number is a multiple of another number\n");
    }
    else{
        printf("Not\n");
    }

    return 0;
}

// Input Number
//        ↓
// Input Another Number
//        ↓
// Number % Another Number
//        ↓
//     == 0 ?
//    /     \
//  YES      NO
//   ↓        ↓
// Multiple  Not Multiple


// Count the digits of a number

