#include<stdio.h>
int main()
{

printf("Using Signed int\n");
int n1,n2,result;
printf("Enter Num1:\n ");
scanf("%d",&n1);
printf("Enter Num2:\n ");
scanf("%d",&n2);

result = n1+n2;
printf("Sum  of Two Number :%d\n",result);

result = n1-n2;
printf("Difference in  Two Number :%d\n",result);

result = n1 * n2;
printf("Product of Two Number :%d\n",result);

printf("-----------------------------------------\n");

printf("Using unsigned int\n");
unsigned int num1,num2,res;

printf("Enter Num1: \n");
scanf("%d",&num1);

printf("Enter Num2: \n");
scanf("%d",&num2);

res = num1 + num2;
printf("Sum  of Two Number :%d\n",res);

res = num1 - num2;
printf("Difference in  Two Number :%d\n",res);

res = num1 *num2;
printf("Product of Two Number :%d\n",res);

printf("-----------------------------------------\n");

printf("Using character\n");

char c1,c2,ch;
printf("Enter ch1:\n ");
scanf("%*c%c",&c1);
printf("Enter ch2:\n ");
scanf("%*c%c",&c2);

ch = c1+c2;
printf("Sum  of Two Number :%d\n",ch);

ch = c1-c2;
printf("Difference in  Two Number :%d\n",ch);

ch = c1 * c2;
printf("Product of Two Number :%d\n",ch);

printf("-----------------------------------------\n");
printf("Using  float\n");

float f1,f2,fres;
printf("Enter Num1:\n ");
scanf("%f",&f1);
printf("Enter Num2:\n ");
scanf("%f",&f2);

fres = f1+f2;
printf("Sum  of Two Number :%f\n",fres);

fres = f1-f2;
printf("Difference in  Two Number :%f\n",fres);

fres = f1 * f2;
printf("Product of Two Number :%f\n",fres);

printf("-----------------------------------------\n");
printf("Using  double\n");

double d1,d2,d3;
printf("Enter Num1:\n ");
scanf("%lf",&d1);
printf("Enter Num2:\n ");
scanf("%lf",&d2);

d3 = d1+d2;
printf("Sum  of Two Number :%lf\n",d3);

d3 = d1-d2;
printf("Difference in  Two Number :%lf\n",d3);

d3 = d1 * d2;
printf("Product of Two Number :%lf\n",d3);
printf("-----------------------------------------\n");
return 0;
}
