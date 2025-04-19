#include<stdio.h>
void print_pattern (int n);
int main(){
    int n;
    printf("How many rows do you want to print??\n");
    scanf("%d",&n);
    print_pattern(n);
    
    return 0;
}
void print_pattern (int n){
    if (n==1)
    {
        printf("*\n");
        return;
    }
    
    print_pattern(n-1);
    for ( int i = 0; i < (2*n-1); i++)
    {
        printf("*");
    }
    printf("\n");
    

}