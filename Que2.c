#include<stdio.h>
int fact(int n);
int main()
{
    printf("factorial is %d", fact(3)); 
    return 0;
}

int fact(int n)
{
    
   if (n==0) 
   {
    return 1;
   }
   else
   {
     
    return n * fact(n-1); 
   }
   
}


