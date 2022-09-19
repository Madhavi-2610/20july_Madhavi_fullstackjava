#include<stdio.h>
int main()
{
	int a,b,add,sub,mul,div,mod;
	printf("enter value of any two No.:");
	scanf("%d%d",&a,&b);
	add=a+b;
	printf("addition of two number:%d\n",add);
	sub=a-b;
	printf("subtraction of two number:%d\n",sub);
	mul=a*b;
	printf("Multiplication of two number:%d\n",mul);
	div=a/b;
	printf("division of two number:%d\n",div);
	mod=a%b;
	printf("modulus of two number:%d",mod);
	return 0;
	
}
