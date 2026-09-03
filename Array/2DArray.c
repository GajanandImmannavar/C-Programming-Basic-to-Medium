// // Declaaration And  Initilization

// #include <stdio.h>

// int main()
// {
//     int Array[3][4]={
//         {
//             {1,2,3,4},
//             {5,6,7,8},
//             {9,10,11,12}

//         }
//     };

//     return 0;
// }


// #include <stdio.h>

// int main()
// {
//     int array[2][4]={
//         {1,2,3,4},
//         {4,5,6,7}
//     };

//    printf("2D array is: \n");

//    for(int i=0; i<2; i++)
//    {
//     for(int j=0; j<4; j++)
//     {
//         printf("%d ",array[i][j]);
//     }
//     printf("\n");
//    }

//     return 0;
// }


//  Accessing Element 


// #include <stdio.h>

// int main()
// {
//     int Array[2][2]={
//                 {1,2},
//                 {3,4}
//                     };
//     printf("Perticular Element: %d",Array[1][1]);
//     printf("\n");
//     return 0;
// }


// Taking Input in a 2D Array


// #include <stdio.h>

// int main()
// {
//  int Array[2][3];
//  printf("Enter 6 Elements 3 for 2 rows: ");
//  for(int i=0; i<2; i++)
//  {
//     for(int j=0; j<3; j++)
//     {
//         scanf("%d",&Array[i][j]);
//     }
// }

// printf("2D Array Elements Are: \n");
// for(int i=0; i<2; i++)
// {
//     for(int j=0; j<3; j++)
//     {
//       printf("%d ",Array[i][j]);
//     }

//     printf("\n");
// }

// return 0;
// }


#include <stdio.h>

int main()
{
    int Array[2][3]={
        {1,2,3},
        {1,2,3}
    };

    int Sum = 0;

    for(int i=0; i<2; i++)
    {
        for(int j=0; j<3; j++)
        {
            Sum = Sum+Array[i][j];
        }
    }

    printf("Sum 2D array is: %d\n",Sum);
    return 0;
}