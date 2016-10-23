/*
Name:Animesh
Class:Programming
Lab no.6
*/
#include<stdio.h>


int main()
{
	int a,b;
	char c;
	
	
	printf("Enter (+,-,*,/)");
	
	//c = getchar();
	scanf("%c",&c);
	
	printf("enter a number");
	scanf("%d",&a);
	
	printf("enter another number");
	scanf("%d", &b);
	
	
	switch(c)
	{
	
	
	case '+':
	
	printf("%d + %d = %d", a, b, a + b);
	
	break;
	
	case '-':
	
	printf("%d - %d = %d", a, b, a - b);
	
	break;
	
	case '*':
	
	printf("%d * %d = %d", a, b, a * b);
	
	break;
	
	case '/':
	
	printf("%d / %d = %d", a, b, a / b);
	
	break;
	
	default:
	printf("tryagain");
	
		
}
return 0;
}



	
	
