// Declaring a String Initializing a String

// #include <stdio.h>

// int main()
// {  
//     char Name[10] = "Gajanand";

//     printf("Printing Whole String: ");
//     printf("%s\n",Name);

//     printf("Printing Charster: \n");
//     for (int i=0; i<10; i++)
//     {
//         printf("%c\n",Name[i]);
//     }

//     return 0;
// }


// Updating a String Character

// #include <stdio.h>

// int main()
// {  
//     char Name[]="Gajanand";

//     Name[7]= 'a';

//     printf("%s\n",Name);
//     return 0;
// }

// Count the characters manually using a loop.

#include <stdio.h>
// #include <string.h>
int main()
{
    char name[10];
    int count=0;
    printf("Enter Name for counting Charceters: ");
        scanf("%s",name);

    for(int i=0; name[i]!='\0'; i++)
    {
        count++;
    }

    printf("Total characters in String is: %d",count);

    printf("\n");
    return 0;
}