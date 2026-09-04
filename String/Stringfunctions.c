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

#include <stdio.h>
#include <string.h>

int CountChar(char Discription[]);

int main()

{

    int Size;

    printf("Enter Memory Size to store your input: ");
    scanf("%d",&Size);

    char Discription[Size];

    printf("Enter What you Want to Count to Charcter: ");

    scanf("%s",Discription);


    int Length = CountChar(Discription);

    printf("No of Charcters: %d\n",Length);


    return 0;

}

int CountChar(char Discription[])
{
    int length = strlen(Discription);

    return length;
}