#include <stdio.h>

int main(void) 
{
int a,b,i,gcd,lcm;
printf("enter the two num\n");
scanf("%d%d",&a,&b);
for(i=1;i<=a&&i<=b;i++)
{
	if((a%i==0) && (b%i==0))
 gcd=i;
	
}

lcm=(a*b)/gcd;
printf("lcm is %d",lcm);
	return 0;
}
