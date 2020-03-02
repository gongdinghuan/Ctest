#include "stdio.h"
char* c[10];
void month(int n)
{
    if(n == 1)
    {
        c[1] = "January";
    }
    if(n == 2)
    {
        c[1] = "February";
    }
    if(n == 3)
    {
        c[1] = "March";
    }
    if(n == 4)
    {
        c[1] = "April";
    }
    if(n == 5)
    {
        c[1] = "May";
    }
    if(n == 6)
    {
        c[1] = "June";
    }
    if(n == 7)
    {
        c[1] = "July";
    }
    if(n == 8)
    {
        c[1] = "August";
    }
    if(n == 9)
    {
        c[1] = "September";
    }
    if(n == 10)
    {
        c[1] = "October";
    }
    if(n == 11)
    {
        c[1] = "November";
    }
    if(n == 12)
    {
        c[1] = "December";
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    month(n);
    printf("%s", c[1]);
    printf("\n");
    return 0;
}
