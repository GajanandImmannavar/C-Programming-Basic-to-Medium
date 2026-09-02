// Input & Display

// #include <stdio.h>

// int main()
// {   

//     int Array[10];
//     printf("Enter 10 Elements: ");
//     for(int i=0; i<10; i++)
//     {
//         scanf("%d",&Array[i]);
//     }

//     printf("Enterd Elements: ");

//     for(int i=0; i<10; i++)
//     {
//         printf("%d \n", Array[i]);
//     }


//     return 0;
// }


// Reverse


// #include <stdio.h>

// int main()
// {
//     int Array[10];

//     printf("Enter Elements: ");

//     for(int i=0; i<10; i++)
//     {
//         scanf("%d",&Array[i]);
//     }

//     printf("Reverse of Enter Elements: ");

//     for(int i=9; i>=0; i--)
//     {
//         printf("%d\n",Array[i]);
//     }
//     return 0;
// }



// Find Sum of Array


// #include <stdio.h>

// int main()
// {   
//     int Array[5]={1,2,3,4,5};
//     printf("Elemetnts in Array List: \n");
//     for(int i=0; i<5; i++)
//     {
//         printf("%d\n",Array[i]);
//     }

//     int count = 0;

//     for(int i=0; i<5; i++)
//     {
//         count+=Array[i];
//     }

//     printf("Total: %d\n",count);

//     return 0;
// }


// Find Average


// #include <stdio.h>

// int main()
// {   

//     int Array[5]={1,2,3,4,5};
//     printf("Elements in array:\n");

//     for(int i=0; i<5;i++)
//     {
//         printf("\n%d ",Array[i]);
//     }

//     int Total = 0;

//     printf("\n\nTotal Of Elements: \n");

//     for(int i=0; i<5;i++)
//     {
//         Total+=Array[i];
//     }

//     printf("\nTotal is %d \n",Total);


//     printf("\nNo of Elements ");

//     int count = 0;
//     for(int i=0; i<5; i++)
//     {
//       count+=1;
//     }

//     printf("%d \n",count);

//     float Average = (float)Total/count;

//     printf("\nAverage of Elements is: %.2f \n",Average);
//     return 0;
// }


// Mistake that i over Come

// float Average = Total/count;

// For your current values, this happens to produce:

// 15 / 5 = 3

// But Total and count are both int, so integer division happens first.

// For example, if:

// Total = 17
// count = 5

// then:

// Total / count

// gives:

// 3

// instead of:

// 3.4

// Use:

// float Average = (float)Total / count;


// Count Even Numbers


// #include <stdio.h>

// int main()
// {   
//     int count = 0;
//     int Array[10] = {1,2,3,4,5,6,7,8,9,10};


//     printf("Elements are: ");

//     for(int i=0; i<10; i++)
//     {   

//         printf("%d ",Array[i]);
//         if(Array[i] % 2 == 0)
//         {
//             count+=1;
//         }
//         else
//         {
//             count+=0;
//         }
//     }

//     printf("\nTotal Even Numbers : %d\n",count);

//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     int count = 0;
//     int Array[10] = {1,2,3,4,5,6,7,8,9,10};

//     printf("Elements are: ");

//     for(int i = 0; i < 10; i++)
//     {
//         printf("%d ", Array[i]);

//         if(Array[i] % 2 == 0)
//         {
//             count++;
//         }
//     }

//     printf("\nTotal Even Numbers: %d\n", count);

//     return 0;
// }

// Array[i] % 2
//        ↓
//     remainder
//        ↓
//    == 0 ?
//     /   \
//   YES    NO
//    ↓      ↓
// count++  nothing


// Count Odd


// #include <stdio.h>

// int main()
// {   
//     int count = 0;

//     int Array[10] = {1,2,3,4,5,6,7,8,9,0};

//     printf("Elements are: ");

//     for(int i=0; i<10; i++)
//     {
//         printf("%d ",Array[i]);

//         if(Array[i]%2 != 0 )
//         {
//             count++;
//         }
//     }

//     printf("\nTotal Odd Numbers: %d\n",count);

//     return 0;
// }


// Array[i] % 2
//        ↓
//     remainder
//        ↓
//    != 0 ?
//     /   \
//   YES    NO
//    ↓      ↓
// count++  nothing


//  Print Even

// #include <stdio.h>

// int main()
// {   

//     int Array[10] = {1,2,3,4,5,6,7,8,9,10};

//     printf("Original Array Elememts ");

//     for(int i=0; i<10; i++)
//     {
//         printf("%d ",Array[i]);
//     }

//     printf("\nEven Elements: ");
    
//     for(int i=0; i<10; i++)
//     {
//         if(Array[i]%2==0)
//         {
//             printf("%d ",Array[i]);
//         }
//     }
//     printf("\n");

//     return 0;
// }



// Print Odd

// #include <stdio.h>

// int main()
// {
//     int Array[10]={1,2,3,4,5,6,7,8,9,10};

//     printf("Original Elements ");

//     for(int i=0; i<10; i++)
//     {
//         printf("%d ",Array[i]);
//     }
//     printf("\nOdd Numbers ");

//     for(int i=0; i<10; i++)
//     {
//         if(Array[i] % 2 != 0)
//         {
//             printf("%d ",Array[i]);
//         }
//     }
//     printf("\n");
//     return 0;
// }





// Maximum Element of Array

#include <stdio.h>

int Maximum(int Array[10])
{
   
    int Max =Array[0];

    for(int i=0; i<10; i++)
    {
        if(Array[i]>Max)
        {
            Max = Array[i];
            
        }
    }
    return Max;
}

    int main()

{

    int Arr[10]= {1,2,3,4,5,6,7,8,-9,0};

    int result = Maximum(Arr);

    printf("Maximum Element of Array is %d", result);

    printf("\n");

   return 0;

}
