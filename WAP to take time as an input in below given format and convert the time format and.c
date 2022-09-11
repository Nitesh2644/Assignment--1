/*WAP to take time as an input in below given format and convert the time format and
display the result as given below.*/


#include<stdio.h>
int main()
{
    int H,M;
    printf("Enter the time: ");
    scanf("%d%d",&H,&M);
    printf("%d hours and %d minute",H,M);
    return 0;
}