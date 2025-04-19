#include<stdio.h>

int main(){
    int a,i,v;
    printf("Enter the first number : ");
    scanf("%d",&i);
    printf("Enter the second number : ");
    scanf("%d",&a);
    printf("Enter the third number : ");
    scanf("%d",&v);

   if (i>a||v)
   {
    printf("\n%d is greater than %d and %d\n", i,a,v);
   }
   if (a>i||v)
   {
    printf("\n%d is greater than %d and %d\n", i,a,v);
   }
   if (v>a||i)
   {
    printf("\n%d is greater than %d and %d\n", i,a,v);
   }
   
    return 0;
}