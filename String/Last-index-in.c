// '\0' in C

// #include <stdio.h>

// int main()
// {  
//     char Word[6];

//     Word[0]='G';
//     Word[1]='A';
//     Word[2]='J';
//     Word[3]='A';
//     Word[4]='N';
//     Word[5]='A';
//     // Word[5]='\0';
//     // Word[6]='\0';
//     // printf("%c\n",Word[5]);
//     printf("%s\n",Word);

//     return 0;
// }

#include <stdio.h>

int main()
{
    char Name[]="Gajanand";
    int i=0;
    while(Name[i]!='\0')
    {
      printf("%c\n",Name[i]);
      i++;
    }
    return 0;
}


// Logic
// Start at index 0
//       ↓
// Is name[i] not '\0'?
//       ↓
// Yes → Print character → Move to next index
//       ↓
// No → Stop

// Important Rules

// Every valid C string must end with '\0'.
// String size must include space for '\0'.
// %s expects a null-terminated string.
// '\0' is not the same as '0'.
// Do not manually access beyond the array size.
// A character array is not automatically a valid string unless it contains '\0'.


// Example
// char name[20] = "Gajanand";

// Only these positions are used:

// G a j a n a n d \0

// The remaining positions are unused, but the string is valid.


