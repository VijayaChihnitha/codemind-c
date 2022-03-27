#include<stdio.h>
int main()
{
    int num,temp;
    scanf("%d",&num);
    int sum=0;
    for(int i=1;i<num;i++)
    {
        if(num%i ==0)
        {
            sum=sum+i;
        }
    }
    if(num<sum)
    printf("True");
    else
    printf("False");
    return 0;
}