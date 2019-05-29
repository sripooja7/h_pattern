/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<stdio.h>
#include<math.h>
int main()
{
	int i,j,k,n,c=1;
	printf("enter row size:");
	scanf("%d",&n);
	for(i=1;i<=2*n-1;i++)
	{
		for(j=1;j<=c;j++)
		{
			printf("*");
		}

		for(k=1;k<=2*abs((n-i))-1;k++)
		{
			printf(" ");
		}
		
		for(j=1;j<=c;j++)
		{
			if(j!=n)
			printf("*");
		}

		if(i<n)
		{
			c+=1;
		}
		else
		{
			c-=1;
		}
		
		printf("\n");
	}
	return 0;
}