// #include <stdio.h>

// int main()
// {
//  int Age = 22;
// //  Age = 23;
//  printf("Age is: %d\n",Age);
//  printf("Adddress of Age is: %p\n",&Age);

//  return 0;
// }



// #include <stdio.h>

// int main()
// {
//     char Name[20];

//     printf("Enter Name to Get Name And There Address of Memory: ");

//     scanf("%s",Name);

//     printf("Name is: %s\n",Name);
    
//     printf("Address of Name is:%p\n",(void*)&Name);
//     return 0;
// }

// Explicit pointer declaration

// #include <stdio.h>

// int main()
// {

//     int USN = 101, *P = &USN;
//     char Name[]="Gajanand";
//     // int *p = &USN;

//     printf("Usn is: %d\n",USN);
//     printf("Addres of Name is %p\n",(void*)&USN);

//     return 0;
// }



// #include <stdio.h>

// int main()
// {
//     int Num = 22;
//     int *P = &Num;

//     printf("Number is: %d",Num);

//     printf("\n");

//     printf("Address of Num is %p",(void*)&Num);

//     printf("\n");
//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     char Name[]="Gajanand", *P = Name;

//     printf("Name is: %s",Name);
//     printf("\n");
//     printf("Address of Name is:%p", (void*)Name);
//     printf("\n");
//     return 0;
// }

// Swaping two Numbers 

// #include <stdio.h>

// int main()
// {
//     int a = 10;
//     int b = 20;

//     int *p=&a;
//     int *q=&b;
    
//     printf("Before Swipe: ");

//     printf("\n");

//     printf("A is: %d",a);

//     printf("\n");

//     printf("B is: %d",b);

//     printf("\n");

//     printf("After Swipe: ");

//     printf("\n");

//     int temp = *p;
//     *p = *q;
//     b = temp;

//     printf("A is :%d",a);

//     printf("\n");

//     printf("B is: %d",b);

//     printf("\n");

//     return 0;
// }


// #include <stdio.h>

// int main()
// {
//     int num,*p;

//     num = 10;
//     p = &num;
//     *p = num;

//     printf("Value of Num is: %d\n",num);
//     printf("\n");
//     printf("Address of Num is %p\n",p);
//     printf("\n");
//     printf("the Address stored in p is %p\n",(void  *) p);
//     printf("\n");
//     printf("Vale using p is:%d\n",*p);

//     return 0;
// }





// #include <stdio.h>

// int main(){
//     int usn,*p;
//      usn = 401;
//      p = &usn;
//     *p = usn;
     
    

//     printf("Value of Num is: %d\n",usn);
//     printf("\n");
//     printf("Address of Num is %p\n",p);
//     printf("\n");
//     printf("the Address stored in p is %p\n",(void  *) p);
//     printf("\n");
//     printf("Vale using p is:%d\n",*p);


//     return 0;
    
// }

// #include <stdio.h>

// int main(){
//     int No = 10;
//     int *p;
//      p =&No;
//     *p = No;

//     printf("Value of No is %d\n",No);
//     printf("\n");
//     printf("Address of No is: %p\n",(void *)&No);
//     printf("\n");
//     printf("Value in addres:%d\n",*p);

//     return 0;
// }

// ptr++ — Move Forward



#include <stdio.h>

int main()
{   
    int arr[] = {1,2,3,4,5,6};

    int *p = arr;

    printf("\n");

    printf("original array is: ");
    for(int i=0; i<6;i++)
    {
        printf(" %d",arr[i]);
    }
    printf("\n");
    printf("\n");

    printf("using pointer *p Array is:%d\n",*p);
    printf("\n");

    p++;

    printf("using *p++ element  is: %d\n",*p);
    printf("\n");

    p--;

    printf("using *p-- element is: %d \n",*p);
    printf("\n");

    p+=1;

    printf("using *p+1 Elements is %d\n",*p);

    printf("\n");

    p+=2; // my mistake was i wrotet P+2 insted p=p+2 that was not correct

    printf("Using *p+2 Element is %d\n",*p);
    printf("\n");

    p-=1; // same mistake

    printf("Using *p-1 Element is: %d\n",*p);

    return 0; 
}

// Lession

// Pointer arithmetic creates a new address, but you are not assigning it back to p.

// You need:

// p = p + 1;
// p = p + 2;
// p = p - 1;

// or simply:

// p++;
// p += 2;
// p--;




// Important difference

// Expression	Meaning
// p + 1	Gives a new address, but does not change p
// p = p + 1	Moves p one element forward
// *p + 1	Takes the value pointed to by p and adds 1
// (*p)++	Increases the actual array element by 1
// p++	Moves the pointer to the next element

// For example, if p points to 1:

// printf("%d", *p + 1);

// prints:

// 2

// But:

// p++;
// printf("%d", *p);

// also prints 2, because the pointer moved to the next array element.


