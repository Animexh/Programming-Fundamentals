/*
Name:Animesh
Class:Programming
Lab no.6
Write a programme that takes 3 input as integers then print sum, average, the product, smallest and largest
*/
#include<stdio.h>


int main()
{
	int a,b,c,sum,average,product;
	
	
	
	printf("Enter 3 numbers");
	
	printf("enter a number");
	scanf("%d",&a);
	
	printf("enter another number");
	scanf("%d", &b);
	
	printf("enter final number");
	scanf("%d", &c);
	
	sum= a + b + c;
	
	printf("sum=: %d", sum);
	
	average= (a+b+c)/3;
	
	printf("The average: %d", average);
	
	
	product= a*b*c;
	
	printf("The product: %d", product);
	
	(a >=b && a>=c) ? printf("The largest value is:%d",a):
	(b >=a && b>=c) ? printf("largest value is: %d",b): printf("largest value is: %d",c);
	
	(a <=b && a<=c) ? printf("The smallest value is:%d",a):
	(b <=a && b<=c) ? printf("smallest value is: %d",b): printf("smallest value is: %d",c);
	
	
	
	
	
	 
	
	
	
	
	
	return 0;
	
	
	
}


	
