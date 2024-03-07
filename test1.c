#include<stdio.h>
int main()
{

int n1=30,n2=40;
char c1 ='S', c2='P';
float f1 = 3.14,f2 = 7;
double d1 = 16.22,d2 = 38;
printf("Integer : n1=%d n2=%d \n",n1,n2);
printf("Address : n1=%u n2=%u \n",&n1,&n2);

printf("Char : c1=%c c2=%c \n",c1,c2);
printf("Address : c1=%u c2=%u \n",&c1,&c2);

printf("Float : f1=%f f2=%f \n",f1,f2);
printf("Address : f1=%u f2=%u \n",&f1,&f2);

printf("Double : d1=%lf d2=%g \n",d1,d2);
printf("Address : d1=%u d2=%u \n",&d1,&d2);


return 0;

}
