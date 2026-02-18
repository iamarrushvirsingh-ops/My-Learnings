#include <stdio.h>

int main() {
    // this is a code to find area and circumference of circle 
    float radius;
    printf("Enter the radius of the given circle in meters \n");
    scanf("%f" , &radius); 
    float pi=3.14;
    int c=pi*radius*2;
    printf("The circumfernce of the circle is :");
    printf("%d m \n",  c);
    int a = radius*radius*pi;
    printf("The area of your circle is : %d m \n " , a);
    
    return 0;
}
