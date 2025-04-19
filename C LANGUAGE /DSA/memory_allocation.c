// four function for memory allocation
///// 1.malloc- goal to use is-> that if there is is a int *ptr it will get its allocted memory from heap.//////////////
//->the return value is void pointer
//->if the space is insufficient then it will return a null pointer
//->all the initialized value is garbage values
// ptr=(ptr-type*)malloc(size_in_bytes)--it is the format So implementation =
// int *ptr;
// ptr=(int*)malloc(3*sizeof (int))
/////2.calloc- goal to use is-> that if there is is a int *ptr it will get its allocted memory from heap///////////////
//->it reserves n blocks of memory with given amount of bytes
//->the returned value is void pointer to allocated space
// ->it is almost same as malloc
//->It initializes all allocated memory value to 1
// int *ptr;
// ptr=(int*)malloc(n,size_in_bytes)
/////3.Realloc-If the dynamically allocated memory is insufficient we can change the size of previous allocated memory using realloc()function.///////////////////////////////////
// ptr=(ptr_type*)realloc(old_ptr_which_needed_more_memory,newsize_in_bytes)
////4.free-it frees the allocated memory(if the dynamically allocated memory is not used then we use free)////////////////////////////////////////////
// free(pointer_used)
// library used is <std.lib>
// #include <stdlib.h> //library for memory allocation
// #include <stdio.h>
// int main()
// {
//     // use of mallloc
//     int *ptr;
//     ptr = (int *)malloc(10 * sizeof(int)); // reserving 40 byte in memory as the size of 1 int is 4 byteso 4*20=40
//     // operations in malloc
//     // input in array
//     for (int i = 0; i < 10; i++)
//     {
//         printf("Enter the value number %d of this array\n", i);
//         scanf("%d", &ptr[i]); // ptr[i]=*ptr+i//value at pointer +i
//     }
//     // output in array
//     for (int j = 0; j < 10; j++)
//     {
//         printf("The value of %d of the array is %d\n", j, ptr[j]);
//     }

//     return 0;
// }
////////////////////malloc
// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {
//     int *ptr;
//     int i;
//     printf("Enter the number of elements you want in the array\n");
//     scanf("%d", &i);
//     ptr = malloc(i * sizeof(int));

//     for (int j = 0; j < i; j++)
//     {
//         printf("Enter element %d : ", j + 1);
//         scanf("%d", &ptr[j]);
//     }
//     for (int k = 0; k < i; k++)
//     {
//         printf(" The element is : %d\n", ptr[k]);
//     }

//     return 0;
// }
/////////////////////////////calloc
// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {
//     int *ptr;
//     int i;
//     printf("Enter the number of elements you want in the array\n");
//     scanf("%d", &i);
//     ptr = calloc(i , sizeof(int));

//     for (int j = 0; j < i; j++)
//     {
//         printf("Enter element %d : ", j + 1);
//         scanf("%d", &ptr[j]);
//     }
//     for (int k = 0; k < i; k++)
//     {
//         printf(" The element is : %d\n", ptr[k]);
//     }

//     return 0;
// }
/////////////////////////////////re alloc
// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {
//     int *ptr;
//     int i, n;
//     printf("Enter the number of elements you want in the array\n");
//     scanf("%d", &i);
//     ptr = calloc(i, sizeof(int));

//     for (int j = 0; j < i; j++)
//     {
//         printf("Enter element %d : ", j + 1);
//         scanf("%d", &ptr[j]);
//     }
//         for (int k = 0; k < i; k++)
//     {
//         printf(" The element is : %d\n", ptr[k]);
//     }


//     printf("Enter the size of new array: \n");
//     scanf("%d", &n);
//     ptr = realloc(ptr, n * i);

// for (int m = 0; m < n; m++)
// {
//     printf("Enter the new value %d of this array: ",m);
//     scanf("%d", &ptr[m]);
// }
// for (int l = 0; l < n; l++)
// {
//     printf("The new values are %d\n", ptr[l]);
// }

//     return 0;
// }
///////////////////////////////////free 
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr;
    int i, n;
    printf("Enter the number of elements you want in the array\n");
    scanf("%d", &i);
    ptr = calloc(i, sizeof(int));

    for (int j = 0; j < i; j++)
    {
        printf("Enter element %d : ", j + 1);
        scanf("%d", &ptr[j]);
    }
        for (int k = 0; k < i; k++)
    {
        printf(" The element is : %d\n", ptr[k]);
    }


    printf("Enter the size of new array: \n");
    scanf("%d", &n);
    ptr = realloc(ptr, n * i);

for (int m = 0; m < n; m++)
{
    printf("Enter the new value %d of this array: ",m);
    scanf("%d", &ptr[m]);
}
for (int l = 0; l < n; l++)
{
    printf("The new values are %d\n", ptr[l]);
}
free(ptr);//now the value of pointer ptr is zero so the memory is freee to use now
    return 0;
}
//////This code is for printing name  by getting storage from dynamic memory allocation////////////////////////////////////////////////////////////////
// #include<stdio.h>
// #include<stdlib.h>
// int main(){
//     char* ptr;
//     ptr=(char*)malloc(40 * sizeof(char));
//     char a[*ptr];
//     printf("Enter your name: \n");
//     scanf("%s",ptr);

//     printf("Your name is %s\n", ptr);
//     return 0;
// }