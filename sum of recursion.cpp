#include<stdio.h>
#include<conio.h>
int sum_digits(int);
int sum=0;
main()
{
	  int n,a;
	  printf("Enter a number  =");
	  scanf("%d",&n);
	  a=sum_digits(n);
	  printf("sum of digit of %d = %d",n,a);
	  getch();
}
int sum_digits(int n)
{
	if(n==0)
	   return(sum);
	else
	{
		sum=sum+n%10;
		 sum_digits(n/10);
		return(sum);
	}
}
