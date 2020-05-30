#include<stdio.h>
int i=0;
int checkforprime(int p);
int main()
{
	int n,num;
	printf("enter any number: ");
	scanf("%d",&n);
	i=n/2;
	num=checkforprime(n);
	if(num==1)
	   printf("%d is not a prime number",n);
	else
	   printf("%d is a prime number",n);
	
	return 0;   
	
}


  checkforprime(int p)
  {
  	if(i==1)
  	  return 0;
  	  
  	else
	  {
	  	if(p% i==0)
	  	return 1;
	  	
	  	else
	  	return checkforprime( i=-1);
	  }  
  }
