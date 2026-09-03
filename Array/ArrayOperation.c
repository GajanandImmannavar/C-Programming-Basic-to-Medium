// Search for a number and print Found / Not Found.

// #include <stdio.h>

// int search(int arr[10]);

// int main()
// {

//     int array[10]={1,2,3,4,5,67,8,7,9,0};

//     int result = search(array);

//     if(result == 1)
//     {
//         printf("Found!");
//     }
//     else
//     {
//         printf("Not found");
//     }

//     printf("\n");

//     return 0;
// }

// int search(int arr[10])
// {
//     int target = 670;

//     for(int i=0; i<10; i++)
//     {
//         if(arr[i]==target)
//         {
//             return 1;
//         }
//     }
//     return 0;
    
// }


// Search for a number and print its index.


// #include <stdio.h>

// int Index(int Arr[10], int target);

// int main()
// {
//     int array[10]={1,3,5,7,9,2,4,6,8,0};
//     int target = 0;
//     int result = Index(array,target);

//     printf("Target element is %d and it's index is %d", target, result);

//     printf("\n");
//     return 0;
// }

// int Index(int Arr[10],int target)
// {

//     for(int i=0; i<10; i++)
//     {
//         if(Arr[i]==target)
//         {
//             return i+1;
//         }
//     }
// }


// Take 5 numbers from the user and search for a target.


// #include <stdio.h>

// int Search(int arr[5], int target);

// int main()
// {

//     int Array[5];
//     printf("Enterd 5 Elements: ");

//     for(int i=0; i<5; i++)
//     {
//         scanf("%d",&Array[i]);
//     }

//     int target;

//     printf("Enter One Element to Search: ");
//     scanf("%d",&target);

//     int result = Search(Array, target);

//     if(result == target)
//     {
//         printf("Seacrched Element is %d\n",result);
//     }
//     else
//     {
//         printf("Not found");
//     }

//     printf("\n");
    

//     return 0;
// }

// int Search(int arr[5], int target)
// {
//     for(int i=0; i<5; i++)
//     {
//         if(arr[i] == target)
//         {
//             return arr[i];
//         }
//     }
//     return 0;
// }



// Update an element based on an index entered by the user.


#include <stdio.h>

void UpdatebyUser(int Arr[10], int updateelement, int index);

int main()
{
    int Arr[10];

    printf("Enter 10 Element: ");
    for(int i=0; i<10; i++)
    {
        scanf("%d",&Arr[i]);
    }
    printf("entered Element: ");
    for(int i=0; i<10; i++)
    {
        printf("%d ",Arr[i]);
    }
    printf("\n");
    int updateelement;
    printf("Enter Element which is you want to add");
    scanf("%d",&updateelement);


    int index;
    printf("Enter index where you want add: ");
    scanf("%d",&index);

    printf("\n");

    UpdatebyUser(Arr, updateelement, index);

    printf("Updated Array is: ");

    for(int i=0; i<10; i++)
    {
        printf("%d ",Arr[i]);
    }
    printf("\n");

    return 0;
}

void UpdatebyUser(int Arr[10], int updateelement, int index)
{
    for(int i=0; i<10; i++)
    {
        Arr[index] = updateelement; 
    }
    
}