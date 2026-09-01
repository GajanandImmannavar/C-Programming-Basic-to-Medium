// The rule you should remember

// Don't memorize:

// "Every function needs a declaration."

// Instead remember:

// Before the function is called, the compiler must know about the function.




// 1. No Parameter + No Return Value
// function defination before main no need declearation 



// # include <stdio.h>

// void greet()
// {
//     printf("Hi Guys!!\n");
// }

// int main()
// {
//     greet();
//     return 0;
// }


// #include <stdio.h>

// void Animals()
// {   
//     printf("\nFirst Function\n");
//     printf("Dogs Doesn't bite those barks, Dogs bites those doesn't bark\n\n");
// }

// void Birds()
// {
//  printf("\nSecond Function\n");
//  printf("Birds servive those fly, those doesn't fly they can't servive\n");
// }

// int main()

// {
//     Animals();
//     Birds();
//     return 0;
// }


// defination after main and need declearation 

// #include <stdio.h>

// void greet();
// void wish();

// int main()
// {   
//     greet();
//     wish();

//     return 0;
// }

// void greet()
// {
//     printf("Hi how are you!!!!\n");
// }

// void wish()
// {
//     printf("Happy birthday Dude!!\n");
// }


// #include <stdio.h>
// void biography();
// void family();
// int main()
// {
//     biography();
//     family();
//     return 0;
// }
// void biography()
//     {   
//         printf("Bio Graphy\n");
//         printf("I am Gajanand from Bagalkot,mudhol working as IT Lead in Bengaluru\n");
//     }

// void family()
// {
//     printf("Family\n");
//     printf("My father name is Lingaraj and wife Sunda, Father do Agreecluture and House wife,\nI have a younger brither and Yelder sister\n");
// }





// 2. Parameter + No Return Value

// #include <stdio.h>

// void Greet(char name[])
// {
//     printf("%s happy birthday\n",name);
// }

// int main()
// {   
//     Greet("Gajanand");
//     return 0;
// }

// #include <stdio.h>

// void message(char name[])
// {
//   printf("Hi %s i wanted to meet you, can we meet at regular spot?\n",name);
// }
// int main()
// {
//     char name[50];
//     printf("Enter Name and send message: ");
//     scanf("%s",name);
//     message(name);
    
//     return 0;
// }


// -----------------------------------------------Flow of code-----------------------------------------------------------

        //             PROGRAM
        //                │
        //                ▼
        //       void message(char name[])
        //       ───────────────────────
        //       Function definition
        //       "I can receive a string"
        //                │
        //                │
        //                ▼
        //           int main()
        //                │
        //                ▼
        //       char name[50];
        //                │
        //                ▼
        //       Create storage
        //                │
        //                ▼
        //       scanf("%s", name);
        //                │
        //                ▼
        //       User enters Gajanand
        //                │
        //                ▼
        //       name = "Gajanand"
        //                │
        //                ▼
        //       message(name);
        //                │
        //                ▼
        //   ┌─────────────────────────┐
        //   │ message(char name[])    │
        //   │                         │
        //   │ name = "Gajanand"       │
        //   │                         │
        //   │ printf("%s", name);     │
        //   └────────────┬────────────┘
        //                │
        //                ▼
        //          Hi Gajanand...
        //                │
        //                ▼
        //           return 0



// #include <stdio.h>

// void invite(char name[], char address[])
// {
//     printf("To\n\n %s\n %s\n\n Mr %s Hi i hope you are doing well we are getting merried in Jan on monday at 20th please come with family and bless us, your blessing is everything for us!!\n",name, address, name);
// }

// int main()
// {
//     char name[50];
//     char address[50];

//     printf("Enter Name to address: ");
//     scanf("%s",name);

//     printf("Enter Address to send invite: ");
//     scanf("%s",address);

//     invite(name,address);

//     return 0;
// }


//  function and Decleartion


// #include <stdio.h>

// void Propose(char Name1[],char Name2[]);

// int main()
// {   
//     char Name1[50];
//     char Name2[50];

    

//     printf("Enter To Name:  ");
//     scanf("%s",Name1);
//     printf("Enter from Name: ");
//     scanf("%s",Name2);

//     Propose(Name1,Name2);

//     return 0;
// }
// void Propose(char Name1[], char Name2[])
//     {
//         printf("To\n\n%s Hi I don't know how would you take this, i hope you don't missunderstand i have been observing you for year,\nslowly you became my crush without my knowldge,i am into you i will be waiting for your reply!!\n\n your well wisher\n %s\n",Name1,Name2);
//     }




// 3. No Parameter + Return Value


//  function without Declearation

// #include <stdio.h>

// int getage()
// {
//     return 22;
// }
// int main()
// {   
//     int age =  getage();
//     printf("%d\n",age);
//     return 0;
// }

// #include <stdio.h>
// int getMarks()
// {
//     return 100;
// }
// int main()
// {   
//     int Marks = getMarks();
//     printf("%d\n",Marks);
//     return 0;
// }


// #include <stdio.h>
// int getUsn()
// {
//     return 401;
// }
// int main()
// {   
//     int Usn  = getUsn();

//     printf("Usn is %d\n",Usn);
//     return 0;
// }

// #include <stdio.h>

// int GetNo()
// {
//     return 10;
// }
// int main()
// {   
    
//     int No = GetNo();

//     printf("%d\n",No);

//     return 0;
// }


// #include <stdio.h>

// int GetResult();

// int main()
// {   
//     int Marks= GetResult();
//     if(Marks == 35)
//     {
//         printf("Pass\n");
//     }
//     else if (Marks > 50 && Marks < 75)
//     {
//        printf("%d Second Class Pass\n",Marks);
//     }
//     else if (Marks > 75 && Marks < 85)
//     {
//        printf("%d First Class Pass\n",Marks);
//     }
//     else if (Marks > 85 ||( Marks == 100))
//     {
//         printf("%d Distinction Pass\n",Marks);
//     }
//     else
//     {
//         printf("Sorry Best of Luck!!\n");
//     }
    
//     return 0;
// }

// int GetResult()
// {
//     return 100;
// }

// functions with Declaration


// #include <stdio.h>
// int Calculation();
// int No();

// int main(){

//     int Number = Calculation();
//     int NO = No();
//     printf("%d\n",Number*NO);
//     return 0;
// }
// int Calculation()
// {
//     return 101;
// }

// int No()
// {
//     return 101;
// }



// 4. Parameter + Return Value


// #include <stdio.h>

// int GETRESULT(int Kannada,int Hindi,int English,int SS, int Maths, int Science)
// {
//     return (((Kannada+Hindi+English+SS+Maths+Science)/625.0)*100);
// }
// int main()
// {   
//     int Kannada;
//     int Hindi;
//     int English;
//     int SS;
//     int Maths;
//     int Science;
 
    

//     printf("Enter Kannada Marks: ");
//     scanf("%d",&Kannada);

//         printf("Enter Hindi Marks: ");
//     scanf("%d",&Hindi);

//         printf("Enter English Marks: ");
//     scanf("%d",&English);

//         printf("Enter SS Marks: ");
//     scanf("%d",&SS);

//         printf("Enter Maths Marks: ");
//     scanf("%d",&Maths);

//         printf("Enter Science Marks: ");
//     scanf("%d",&Science);


//     double result = GETRESULT(Kannada,Hindi,English,SS,Maths,Science);
    // printf("Your result is: %.1f\n",(result/625.0)*100);


//       if (result >= 75)
//         {
//           printf("Grade: A+");
//         }
//       else if (result >= 65)
//         {
//           printf("Grade: A");
//         }
//       else if (result >= 35)
//         {
//           printf("Grade: C+");
//         }
//       else
//         {
//          printf("Grade: F");
//         }
      
//     printf("\nResult is %.2f\n",result);
    
//     return 0;
// }



// #include <stdio.h>
// int Table(int Number);
// int main()
// { 
//   int Num;
//    printf("Enter Number to Get Table: ");

//    scanf("%d",&Num);

//    Num =  Table(Num);

//   for(int i=0;i<=10;i++)
//   {
//      printf("%d * %d = %d\n",Num,i,Num*i); 
//   }
  
//   return 0;
// }

// int Table(int Number)
// {
//   return Number;
// }


// #include <stdio.h>
// int GetSum(int Num1,int Num2);
// int main()
// {
//     int Num1,Num2;
//     printf("Enter Two Numbers to Get Sum: ");
//     scanf("%d %d",&Num1,&Num2);   

//     int Sum = GetSum(Num1,Num2);
//     printf("Sum of %d and %d is %d\n",Num1,Num2,Sum);
//     return 0;
// }

// int GetSum(int Num1,int Num2)
// {
//     return Num1 + Num2;
// }


// #include <stdio.h>
// int Squre(int Num);

// int main()
// { 
//   int Num;
//   printf("Enter Number to Get Squre Of that Number: ");
//   scanf("%d",&Num);
//   int Result = Squre(Num);
  
//   printf("Squre root of %d is %d\n",Num,Result);
//   return 0;
// }

// int Squre(int Num)
// {
//   return Num*Num;
// }


// #include <stdio.h>
// int Calculator(int Num1, int Num2);
// int main()
// {
//     int Num1;
//     int Num2;
//     printf("Enter Two Numbers to Get +,-,*,/: ");
//     scanf("%d %d",&Num1,&Num2);
//     int result = Calculator(Num1,Num2);
//     printf("%d + %d = %d, %d-%d= %d, %d*%d=%d, %d/%d= %d\n",Num1,Num2,Num1+Num2,Num1,Num2,Num1-Num2,Num1,Num2,Num1*Num2,Num1,Num2,Num1/Num2);
//     return 0;
// }

// int Calculator(int Num1,int Num2)
// {
//     return Num1,Num2;
// }


// #include <stdio.h>

// int GetLargest(int Num1, int Num2);

// int main()
// {
//     int Num1;
//     int Num2;

//     printf("Enter Two Numbers to Get Largest One: ");
//     scanf("%d %d",&Num1,&Num2);
//     int  result = GetLargest(Num1,Num2);
//     printf("%d\n",result);

    
//     return 0;
// }

// int GetLargest(int Num1, int Num2)
// {
//     if(Num1>Num2)
//     {
//         return Num1;
//     }
//     else if(Num2>Num1)
//     {
//         return Num2;
//     }
//     else
//     {
//         return Num1;
//     }
// }



// #include <stdio.h>

// int EvenOddCheck(int Num);

// int main()
// {   
//     int Num;

//     printf("Enter Number check Even or odd: ");

//     scanf("%d",&Num);

//     int result = EvenOddCheck(Num);

//     if (result == 1)
//     {
//         printf("Even\n");
//     }
//     else
//     {
//         printf("Odd\n");
//     }
//     return 0;
// }

// int EvenOddCheck(int Num)
// {
//     if (Num % 2 == 0)
//     {
//         return 1;
//     }

//     else
//     {
//         return 0;
//     }
// }


#include <stdio.h>

int CheckpositiveNegitiveZero(int Num);   // 1. Function declaration

int main()
{
    int Num;                              // 2. Create variable

    printf("Enter Number: ");             // 3. Ask user for input

    scanf("%d", &Num);                    // 4. User input → Num

    int result = CheckpositiveNegitiveZero(Num);
                                          // 5. Num → argument → function
                                          // 6. Function returns value → result

    if(result > 0)                        // 7. Check returned value
    {
        printf("Positive\n");             // 8. Print Positive
    }
    else if(result < 0)                   // 9. Check if negative
    {
        printf("Negative\n");             // 10. Print Negative
    }
    else                                  // 11. Otherwise
    {
        printf("Zero\n");                 // 12. Print Zero
    }

    return 0;                             // 13. End main()
}


int CheckpositiveNegitiveZero(int Num)    // 14. Function definition
{
    if(Num > 0)                           // 15. Check parameter
    {
        return 1;                         // 16. Send 1 back
    }
    else if(Num < 0)                      // 17. Check parameter
    {
        return -1;                        // 18. Send -1 back
    }
    else
    {
        return 0;                         // 19. Send 0 back
    }
}


    //                 PROGRAM START
    //                      ↓
    //                    main()
    //                      ↓
    //                 int Num;
    //                      ↓
    //                 printf()
    //                      ↓
    //              User enters 25
    //                      ↓
    //              scanf("%d",&Num)
    //                      ↓
    //                 Num = 25
    //                      ↓
    //    CheckpositiveNegitiveZero(Num)
    //                      ↓
    //               argument = 25
    //                      ↓
    //         ┌─────────────────────────┐
    //         │        FUNCTION         │
    //         │                         │
    //         │   parameter Num = 25    │
    //         │          ↓              │
    //         │       Num > 0           │
    //         │          ↓              │
    //         │       return 1          │
    //         └──────────┬──────────────┘
    //                    ↓
    //              back to main()
    //                    ↓
    //               result = 1
    //                    ↓
    //              result > 0 ?
    //                    ↓
    //                   YES
    //                    ↓
    //             printf("Positive")
    //                    ↓
    //                 Positive
    //                    ↓
    //                return 0
    //                    ↓
    //                PROGRAM END