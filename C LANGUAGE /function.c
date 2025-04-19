// #include<stdio.h>
// void display();//function prototype
// int main(){
//     int a;
//     printf("This is initializing display function\n");
//     display();
//     printf("Display function finished its work\n");

//     return 0;
// }
// void display(){
//     printf("this is display\n");
// }
#include <stdio.h>
void morning();
void evening();
void night();

int main()
{
    morning();
    evening();
    night();

    return 0;
}
void morning()
{
    printf("Good morning\n");
}
void evening()
{
    printf("Good evening\n");
}
void night()
{
    printf("Good night\n");
}
