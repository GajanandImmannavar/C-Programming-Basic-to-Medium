// #include <stdio.h>

// int main(){
    
//     char Name[20];

//     printf("Enter Name to Get again: ");

//     scanf("%s",Name);

//     printf("Name is %s\n",Name);

//     return 0;
// }


// Taking Input Using fgets()


// #include <stdio.h>

// int main()
// {

//     char Description[50];

//     printf("Enter Any thing to Get and read: ");
//     fgets(Description, sizeof(Description), stdin);

//     printf("%s",Description);

//     return 0;
// }



// Reading a String After Integer Input


#include <stdio.h>

int main()
{
    int Age;
    char Name[60];

    printf("Enter Age: ");
    scanf("%d",&Age);
      
    printf("Age is: %d\n",Age);
    getchar();
    printf("Enter Name: ");
    fgets(Name, sizeof(Name),stdin);

    printf("Name is: %s\n",Name);
    return 0;
}