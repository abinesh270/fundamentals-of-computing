#include <stdio.h>  
#include <stdlib.h>
# include<conio.h>
# include<string.h>

int main()   
{
 char arr[100]; int i,n; 

 printf("\n This is a simple program for array implementation in which it takes name as input and print it on the screen\n");

 printf("\n Enter your name length\n"); 
 scanf("%d",&n); 

 printf("\n Enter your name\n");
 for(int i = 0;i<=n;i++)  
 scanf("%c",&arr[i]);  
 
for(int i = 0;i<=n;i++)  
 printf("%c", arr[i]);  
 return 0;   
}  