#include <stdio.h>  
int main()  
{  
    int i,n,sum=0;  
    printf("Enter any number: ");  
    scanf("%d",&n);  
    for(i=1;i<=n;i+=2)  
    {  
        sum+=i*i*i;  
    }  
    printf("sum of cube of odd numbers 1*1*1+3*3*3+...+%d*%d*%d=%d",n,n,n,sum);  
    return 0;  
}