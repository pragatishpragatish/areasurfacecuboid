#include <stdio.h>

int main()
{
    float length, breadth, height, volume, sa;
    
    printf("Enter The Length, Breadth and Height:");
    scanf("%f%f%f", &length, &breadth, &height);
    volume = length*breadth*height;
    sa = 2*(length*breadth+breadth*height+length*height);
    printf("The Volume is:%f", volume);
    printf("\nThe Total Surface Area is: %f", sa);
    
    return 0;
}
