#include<stdio.h>
void input(int a,int b);
void factorial(int a, int b);
void output(int a , int b);
int main(){
    input(a,b);
    factorial(a,b);
    output(a,b);
    return 0;
}
input (a,b){
    printf("Enter the number you want to get factorial of: ");
    scanf("%d",a);
};
factorial(a,b){
    int c=1;
    for (int i = 1; i < a; i++)
    {
        c *=i;
    }
};
output(a,b){
    printf("\nThe factorial of %d is :%d\n",a,c);
};
