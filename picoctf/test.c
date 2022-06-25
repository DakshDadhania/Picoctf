#include<stdio.h>
int main()
{
    int firstvalue=5, secondvalue=15;
    int *p1,*p2;
    p1=&firstvalue;
    p2=&secondvalue;
    *p1=10;
    p2=p1;
    p1=p2;
    *p1=20;
    printf("firstvalue is %d\n",firstvalue);
    printf("secondvalue is %d",secondvalue);
    return 0;
}