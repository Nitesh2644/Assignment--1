/*WAP to take date as an input in below given format and convert the date format and
display the result as given below.*/

#include<stdio.h>
int main()
{
    int d,m,y;
    printf("Enter the date: ");
    scanf("%d%d%d",&d,&m,&y);
    printf("Day-%d ,Month-%d,Year-%d",d,m,y);
    return 0;
}