#include <stdio.h>

int main() {
    printf("Let's learn about pointers\n");

    int a = 76;
    int *ptra = &a;
    int *ptr2=NULL;
//%p shows the adress
    printf("The address of pointer to a is %p\n", &ptra);
    printf("The address of a is %p\n", &a);
    printf("The value of a is %p\n", ptra);
    printf("The value of a is %d\n", *ptra);
       printf("The value of a is %d\n", a);

    printf("The address garbage  is %p\n", ptr2);

    return 0;
}
