#include<stdio.h>

int main ()
{
    int num,org_num, sum=0;
    int digit;
    scanf ("%d",&org_num) ;
    num=org_num;
    while(num!=0)
    {
        digit=num%10;
        sum+=digit;
        num=num/10;
    }
    if(org_num%sum==0)
    printf("True");
    else
    printf("False");
    return 0;
}