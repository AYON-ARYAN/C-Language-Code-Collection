#include<stdio.h>
int sum(int a,int b);
int main(){
    int s=4,b=7;
    printf("The value of a and b is %d and %d respectively\n",s,b);
    printf("The of 4+7 is %d\n",s+b);
    printf("The value of a and b after the function call is %d and %d \n",s,b);
    return 0;
}
int sum(int s,int b){
    int c;
    c=s+b;
    b=3434;
    s=23432;
    return c;
}