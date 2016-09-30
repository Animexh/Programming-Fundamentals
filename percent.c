/*Name: Animesh Acharya
Class: Lab
Programme: WAP to display percentage and marks of student
date:9/30/2016
*/

#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
    char name[20];
    float Math,English,Nepali,Social,Science,Computer,Optional,Percentage,Total;
    printf("Enter name");
    scanf("%s",&name);
    printf("Enter marks for Math");
    scanf("%f",&English);
    printf("Enter marks for Nepali");
    scanf("%f",&Nepali);
    printf("Enter marks for Social");
    scanf("%f",&Social);
    printf("Enter marks for Science");
    scanf("%f",&Science);
    printf("Enter marks for Computer");
    scanf("%f",&Computer);
    printf("Enter marks for Optional");
    scanf("%f",&Optional);

    Percentage = ((Math+English+Nepali+Social+Science+Computer+Optional)/7);
    printf("Percent is %f",Percentage);
    Total=Math+English+Nepali+Social+Science+Computer+Optional;
    printf("Total is %f",Total);
    getch();
}
