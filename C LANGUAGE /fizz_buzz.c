#include<stdio.h>
void odd ();
int main(){
    odd();
    return 0;
}
void odd(){
    int a;
    for ( a = 0; a < 100; a++)
    {
        if (a%2==0)
        {
            printf("%d  Fizz\n",a);
        }
        else
        {
            printf("%d  Buzz\n",a);
        }
        
        
    }
    
}
