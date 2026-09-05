// #include <stdio.h>

// #include <string.h>

// int main()
// {   
//     char Name[]= "Gajanand L Immannavar";

//     int Length = strlen(Name);

//     printf("String is %s\n",Name);

    // printf("\n");

    // printf("String Length is %d\n",Length);

    // printf("\n");

//     return 0;
// }


// #include <stdio.h>

// #include <string.h>

// char StringLength(char Name[]);

// int main()
// {   
//     char Name[10];
//     printf("Enter Your Name to Count Charcter: ");

//     scanf("%s",Name);

//     int result = StringLength(Name);
    
//     printf("Length of You Name is: %d\n",result);
//     return 0;
// }

// char StringLength(char Name[])
// {
//     int Length =  strlen(Name);

//     return Length;
// }

// #include <stdio.h>
// #include <string.h>

// int CountChar(char Discription[]);

// int main()

// {

//     int Size;

//     printf("Enter Memory Size to store your input: ");
//     scanf("%d",&Size);

//     char Discription[Size];

//     printf("Enter What you Want to Count to Charcter: ");

//     scanf("%s",Discription);


//     int Length = CountChar(Discription);

//     printf("No of Charcters: %d\n",Length);


//     return 0;

// }

// int CountChar(char Discription[])
// {
//     int length = strlen(Discription);

//     return length;
// }



// Using strlen() function
// #include <stdio.h>
// #include <string.h>

// int main()
// {
//     char Name[]="Gajanand L Immannvar";
//     printf("oroginal String is: %s\n",Name);

//     printf("After Revers:");

//     for(int i=strlen(Name); i>=0; i--)
//     {
//         printf("%c",Name[i]);
//     }
//     printf("\n");
//     return 0;
// }


// Using strcpy()


// #include <stdio.h>
// #include <string.h>

// int main(){
//     char Name1[]="Gajanand";
//     char Name2[20];

//     strcpy(Name2, Name1);

//     printf("%s",Name1);

//     printf("\n");

//     printf("%s",Name2);

//     printf("\n");

//     return 0;
// }


// #include <stdio.h>

// #include <string.h>

// int main()
// {
//     char My[20]="Gajanand L I";
//     char Your[20];

//     strcpy(Your,My);

//     printf("%s\n",My);
//     printf("%s\n",Your);

//     return 0;
// }



// Using strcat()

// #include <stdio.h>
// #include <string.h>

// int main()
// {

//     char Name[50]="Gajanand";
//     char Middle[]=" L";
//     char Last[]=" Immannavar";
    

//     strcat(Name,Middle);
//     strcat(Name,Last);
   

//     printf("%s",Name);
//     printf("\n");
//     return 0;
// }


// #include <stdio.h>
// #include <string.h>

// int main()
// {   char About[50];
//     char FirstName[]="Gajanand";
//     char MiddleName[]=" Lingaraj";
//     char LastName[]=" Immannavar";
//     char EmpNum[]=" Eleven";

//     strcat(About,FirstName);
//     strcat(About,MiddleName);
//     strcat(About,LastName);
//     strcat(About,EmpNum);

//     printf("%s\n",About);
//     return 0;
// }


// Another way to Use strcat

// #include <string.h>
// #include <stdio.h>

// int main()
// {
//     char Name[50]="Gajanand";
//     strcat(Name," L Immannavar");

//     printf("%s",Name);
//     printf("\n");
//    return 0;
// }


// Using Strcom() function


// #include <stdio.h>

// #include <string.h>

// int WordCheck(char Word1[], char Word2[]);

// int main()
// {  char Word1[10];
//    char Word2[10];

//    printf("Enter Two Words to check wether they are equal are not: ");

//    scanf("%s",Word1);
//    scanf("%s",Word2);

//    int Result = WordCheck(Word1, Word2);

//    if(Result == 0)
//    {
//     printf("Both are equal\n");
//    }
//    else
//    {
//     printf("Both Are Different\n");
//    }
//    return 0;
// }


// int WordCheck(char Word1[], char Word2[])
// {
//     if(strcmp(Word1, Word2)==0)
//     {
//         return 0;
//     }
//     else 
//     {
//         return 1;
//     }
// }

// #include <stdio.h>
// #include <string.h>

// int PasswordCheck(char Password[],char Pass[]);

// int main()
// {  
//     char Password[20];

//     printf("\nEnter Password to Login: ");

//     scanf("%s",Password);

//     char Pass[]="Gajanand@123";

//     int result = PasswordCheck(Password, Pass);

//     if(result==0)
//     {
//         printf("Login Successfull!\n\n");
//     }
//     else
//     {
//         printf("Please enter Valid Password\n\n");
//     }

//     return 0;
// }

// int PasswordCheck(char Password[], char Pass[])
// {
//     if (strcmp(Password, Pass)==0)
//     {
//         return 0;
//     }
//     else
//     {
//         return 1;
//     }
// }


#include <stdio.h>  

#include <string.h> 

int PasswordValadation(char Password[], char Password1[]);

int main()
{
    char Password[20];
    char Password1[20];

    printf("Enter Password to store: ");

    scanf("%s",Password);

    printf("Enter Password to Login: ");

    scanf("%s",Password1);

    int result = PasswordValadation(Password, Password1);

    if(result==0)
    {
        printf("Login Successfuly!!\n");
    }
    else
    {
        printf("Please Enter valid password\n");
    }

    return 0;
}

int PasswordValadation(char Password[], char Password1[])
{
    if(strcmp(Password,Password1)==0)  
    {
        return 0;
    }
    else
    {
        return 1;
    }
}