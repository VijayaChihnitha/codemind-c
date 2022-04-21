#include<stdio.h>

int main()
{
    int octnum, decnum=0, binnum[40], rem, mul=1, i=0, count=0;
    scanf("%d", &octnum);
    while(octnum!=0)
    {
        rem = octnum%10;
        if(rem>7)
        {
            count++;
            break;
        }
        decnum = decnum + (rem*mul);
        mul = mul*8;
        octnum = octnum/10;
    }
    if(count==0)
    {
        while(decnum!=0)
        {
            binnum[i] = decnum%2;
            i++;
            decnum = decnum/2;
        }
        for(i=(i-1); i>=0; i--)
            printf("%d", binnum[i]);
    }
    
    return 0;
}
