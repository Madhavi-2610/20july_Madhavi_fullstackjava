#include<stdio.h>
void main()
{
	int y,d,day,year;
	printf("enter No. of days and years:");
	scanf("%d\n%d",&day,&year);
	y=day/365;
	d=year*365;
	
	printf("year is:%d\n Days is%d",y,d);
}
