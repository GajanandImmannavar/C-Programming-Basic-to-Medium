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

#include <stdio.h>
int getMarks()
{
    return 100;
}
int main()
{   
    int Marks = getMarks();
    printf("%d\n",Marks);
    return 0;
}