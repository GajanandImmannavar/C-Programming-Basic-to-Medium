// #include <stdio.h>

// int main()
// {
//     int Array[10] = [1,2,3,4,5,6,7,8,9,0];

//     printf("%d\n",Array[1]);

//     for (int i=0;i<10;i++)
//     {
//         printf("\n%d\n",Array[i]);
//     }

//     return 0;
// }


// #include <stdio.h>

// int main()
// {
    
//     int Array[10]={1,2}; // if you don't add remeaning elements remeanings will be 0 by default

//     for(int i=0;i<10;i++)
//     {
//       printf("%d\n",Array[i]);
//     }
//     return 0;
// }

// Taking Array Input


// #include <stdio.h>

// int main()
// {   
//     int Array[10];
//     printf("Enter Elements: ");
//     for(int i =0; i<10; i++)
//     {
//         scanf("%d",&Array[i]);
//     }
//     return 0;
// }



// Taking Input + Printing Array



// #include <stdio.h>

// int main()
// {   
//     int Size;
//     printf("Enter Length of Array: ");
//     scanf("%d",&Size);
//     int Array[Size];
//     printf("Enetr %d Numbers: ",Size);
    
//     for(int i=0;i<Size;i++)
//     {
//         scanf("%d",&Array[i]);
//     }
    
//     printf("Entered Numbers:\n");

//     for (int i=0;i<Size;i++)
//     {
//         printf("%d\n",Array[i]);
//     }
//     return 0;
// }



// Initialize Everything to Zero


// #include <stdio.h>

// int main()
// {  

//     int Array[10]={0};
    

//     for(int i=0;i<10;i++)
//     {
//         printf("%d \n",Array[i]);
//     }
//     return 0;
// }


// Updating an Array Element

// #include <stdio.h>

// int main()
// {   
//     int Array[10] = {1,2,3,4,5,6,7,8,9,0};
//     printf("Original Array: \n");
//     for(int i=0; i<10; i++)
//     {
//         printf("%d ",Array[i]);
//     }

//     Array[9]=10;
    
//     printf("\nUpdated Element: %d ",Array[9]);

//     printf("\nAfter Update: ");

//     for(int i=0; i<10; i++)
//     {
//         printf("%d \n",Array[i]);
//     }
//     return 0;
// }


