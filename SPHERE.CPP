#include<stdio.h>
#include<conio.h>
#include<math.h>
void main(){
float Pi,r,surface;
clrscr();
Pi = 3.14;
printf("enter radius for area");
scanf("%f",&r);
surface = 4*Pi*r*r;
printf("answer=%f",surface);
float volume;
printf("enter radius for volume");
scanf("%f",&r);
volume=(4/3)*Pi*r*r*r;
printf("answer=%f",volume);

	getch();
}








































