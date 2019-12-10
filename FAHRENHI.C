#include<stdio.h>

main()
{
float f,c;
int lower,upper,step;

clrscr();

lower=0;
upper=300;
step=20;

f=lower;
printf("fahrenheit  celsius\n");
while(f<=upper)
{
  c=(5.0/9.0)*(f-32.0);
  printf("   %3.0f     %6.1f\n",f,c);
  f=f+step;

}

getch();
return 0;

}



