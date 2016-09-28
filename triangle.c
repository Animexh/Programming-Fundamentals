/*
Student name: Animesh
program: WAP to read 3 side of triangle to calculate area. A=[s(s-a)(s-b)(s-c)]^0.5
s=(a+b+c)/2
date: 9/28/2016
*/
#include<stdio.h>
#include<conio.h>
#include<math.h>

void main()
{
    float a,b,c,s,A;


    printf("Enter 1st side:\n");
    scanf("%f",&a);
    printf("Enter 2nd side:\n");
    scanf("%f",&b);
    printf("Enter 3rd side:\n");
    scanf("%f",&c);
    s=(a+b+c)/2;
    printf("the side is %f",s);
    A=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("the Area is %f",A);

    getch();

}
