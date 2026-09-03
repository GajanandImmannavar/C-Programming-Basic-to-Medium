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

// #include <stdio.h>

// int Maximum(int Array[10])
// {
   
//     int Max =Array[0];

//     for(int i=0; i<10; i++)
//     {
//         if(Array[i]>Max)
//         {
//             Max = Array[i];
            
//         }
//     }
//     return Max;
// }

//     int main()

// {

//     int Arr[10]= {1,2,3,4,5,6,7,8,-9,0};

//     int result = Maximum(Arr);

//     printf("Maximum Element of Array is %d", result);

//     printf("\n");

//    return 0;

// }


// Minimum Element in the Array

// #include <stdio.h>

//     int Minimum(int Array[10])
//     { 
//         int minimum = Array[0];

//         for(int i=0; i<10; i++)
//         {
//             if (Array[i]< minimum)
//             {
//               minimum = Array[i];
//             }
//         }

//      return minimum;
//     }

//     int main()
//     {
//         int Arra[10]={-1,0,-2,5,6,9,0,-19,0,-100};
        
//         printf("Original Elements Are: ");
//         for(int i=0; i<10; i++)
//         {
//             printf("%d\n",Arra[i]);
//         }

//         int result = Minimum(Arra);

//         printf("Minimum Element of Array is: %d",result);

//         printf("\n");

//         return 0;
//     }



//     Trace of your logic
// minimum = -1

// 0 < -1?      NO
// -2 < -1?     YES → minimum = -2
// 5 < -2?      NO
// 6 < -2?      NO
// 9 < -2?      NO
// 0 < -2?      NO
// -19 < -2?    YES → minimum = -19
// 0 < -19?     NO
// -100 < -19?  YES → minimum = -100

// 🎯 Final answer = -100




    // Sum using Function



    // #include <stdio.h>

    // int sum(int array[10])

    // {   int Sum=0;
    //     for(int i=0; i<10; i++)
    //     {
    //         Sum+=array[i];
    //     }
    //     return Sum;
    // }

    // int main()
    // {
    //     int arr[10]={1,2,3,4,5,6,7,8,9,10};

    //     int result = sum(arr);

    //     printf("Sum is: %d\n",result);

    //     printf("\n");
    //     return 0;
    // }





// Count Even using Function


// #include <stdio.h>

// int CountEven(int Array[10])
// {
//     int Count = 0;

//     for(int i=0; i<10; i++)
//     {
//         if(Array[i]%2==0)
//         {
//             Count+=1;
//         }
//     }
//     return Count;
// }

// int main()
// {   
//     int arr[10]={1,2,3,4,5,6,7,8,9,10};
//     int result = CountEven(arr);

//     printf("Even Number; %d\n",result);
//     return 0;
// }




// Count Odd using Function



// #include <stdio.h>

// int CountOdd(int Array[10])
// {
//     int count=0;

//     for(int i=0; i<10; i++)
//     {  
//         if(Array[i]%2!=0)
//         {
//         count+=1;
//         }
//     }

//     return count;
// }

// int main()
// {

//     int arr[10]={1,21,23,34,12,35,76,89,12,10};

//     int result = CountOdd(arr);

//     printf("Odd Numbers: %d\n",result);
//     return 0;
// }



// Search

// #include <stdio.h>

// int Search(int Array[10], int target);

// int main()
// {
//    int arr[10];

//    printf("ENter 10 Numbers: ");

//    for(int i=0; i<10; i++)
//    {
//    scanf("%d",&arr[i]);
//    }

//    int Target;

//    printf("Enter Any one number betwenn 1 to 10 to Search in Array: ");

//    scanf("%d",&Target);

//    int result = Search(arr,Target);

//    if(result != -1)
//    {
//     printf("Found! %d at %d index\n",Target,result);
//    }
//    else
//    {
//     printf("Not Found\n");
//    }

//    return 0;
// }

// int Search(int Array[10], int target)
// {

//     for(int i=0; i<10; i++)
//     {
//         if (Array[i]==target)
//         {   
            
//             return i+1;
//         }
        
//     }
//     return -1;
// }


// Occurrences

// #include <stdio.h>

// int CheckOccurrences(int array[10],int Number);

// int main()
// {   

//     int array[10];

//     printf("Enter 10 Numbers to Stor in Array: ");
//     for(int i=0; i<10; i++)
//     {
//         scanf("%d",&array[i]);
//     }

//     int number;
    
//     printf("Enter Number to get Occurrences of that Number: ");

//     scanf("%d",&number);

//     int Occurrences = CheckOccurrences(array, number);

//     printf("Occurrence of %d is %d",number,Occurrences);

//     printf("\n");
     
//     return 0;
// }

// int CheckOccurrences(int Array[10],int Number)
// {
//     int Count = 0;
//     for(int i=0; i<10; i++)
//     {   
//         if(Array[i]==Number)
        
//         {
//             Count++;
//         }
//     }

//     return Count;
// }


// Second Largest


// #include <stdio.h>

// int SecondLargest(int Array[10]);

// int main()
// {   
//     int arr[10] = {1,2,3,4,55,6,7,88,9,100};

//     int result=SecondLargest(arr);

//     printf("Second Largest Element is: %d\n",result);

//     return 0;
// }

// int SecondLargest(int Array[10])
// {
//     int large = 0;
//     int secondlarge =0;
    
//     // Largest

//     for(int i=0; i<10; i++)
//     {
//         if(Array[i]>large)
//         {
//           large=Array[i];
//         }
//     }

//     for(int i=0; i<10; i++)
//     {
//         if(Array[i] != large)
//         {
//             if(Array[i]>secondlarge)
//             {
//                 secondlarge = Array[i]; 
//             }
//         }
//     }

//     return secondlarge;

// }


// second largest element (including nagetive Numbers)

// #include <stdio.h>

// int secondlargest(int arr[10]);

// int main()
// {
//     int array[10]={-10,-7,-3,-4,-5,-6,-2,-8,-9,-1};

//     int result = secondlargest(array);

//     printf("Second largest is %d\n",result);

//     return 0;
// }

// int secondlargest(int arr[10])
// {
//     int large = arr[0];
//     int secondlarge = arr[1];

//     if(large<secondlarge)
//     {
//         int temp = large;
//         large = secondlarge;
//         secondlarge = temp;
//     }

//     for(int i=2; i<10; i++)
//     {
//         if(arr[i]>large)
//         {
//             secondlarge = large;
//             large=arr[i];
//         }
//         else if(arr[i]>secondlarge && arr[i]!=large)
//         {
//             secondlarge=arr[i];
//         }
//     }
//     return secondlarge;
// }


