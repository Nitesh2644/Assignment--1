/*WAP to find the area of the circle. Take radius of circle from user as input and print the
result in below given format.*/


#include<stdio.h>
int main()
{
    int a,area;
    printf("Enter the radius of circle: ");
    scanf("%d",&a);
    area=3.14*a*a;
    
    printf("Area of circle IS %d ",area);
    
    return 0;
}
