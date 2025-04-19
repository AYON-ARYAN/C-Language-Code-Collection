// #include<stdio.h>
// int main(){
//     int radius =5;
//     float pi =3.14;
//     // if you want to get the area of circle press command + / in the int height =3 
//     // int height =3;
//     printf("The area of the volume of cylinder is  %f",radius * pi * radius* height);
//     return 0;
// }



#include <stdio.h>
int main()
{
    float radius;
    float pi = 3.14;
    printf("Enter the value for radius: ");
    scanf("%f", &radius);
    printf("The area of the volume of cylinder is  %f", radius * pi * radius);
    return 0;
}
