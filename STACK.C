int top=-1;
int a;
char x;
int element;
#define CAPACITY 5
int i=0;
int stack[CAPACITY];
int c=-1;
void main()
{
clrscr();


gg:


printf(" Press\n ");
printf("\n1: Push \n2: Pop \n3: Traverse \n4: Exit\n\nplease choose : ");
scanf("%d",&a);
delay(500);

switch(a)
{

case 1:
ss:

printf("\n\nenter the element to push in stack : ");
scanf("%d",&element);

if(top==4)
{
clrscr();
printf("\n\n\n\nprocessing...");
delay(1000);
clrscr();
printf("\n\n\n\nprocessing....");
clrscr();
printf("\n\n\n\nprocessing.....");
delay(1000);
clrscr();
printf("\n\n\n\nprocessing......");
delay(1000);
clrscr();
printf("\n\n\n\nprocessing.......");
delay(1000);

clrscr();

printf("\n\nstack is full\n\n");
delay(2500);
clrscr();
goto gg;
}
else
{

top++;
stack[top]=element;
clrscr();
printf("\n\nprocessing...");
delay(700);
clrscr();
printf("\n\nprocessing....");
delay(700);
clrscr();
printf("\n\nprocessing.....");
delay(700);
clrscr();
printf("\n\nprocessing......");
delay(700);
clrscr();
printf("\n\nprocessing.......");
delay(700);
clrscr();

printf("\n\nelement inserted succesfully i.e %d\n\n\n\n",element);
delay(1500);
goto gg;
}


case 2:
if(top==-1)
{
clrscr();
printf("\n\nStack is empty\n\n\n");
delay(1500);
clrscr();
goto gg;
}
else
{
top--;
printf("\n\nelement deleted succesfully i.e %d \n\n\n\n",element);
delay(2000);
clrscr();
goto gg;
}

case 3:
if(top==-1)
{
clrscr();
printf("\n\nStack is empty\n\n\n");
delay(1500);
clrscr();
goto gg;
}
else
{
clrscr();
printf("\n\n\n-:- elements in stack are -:-  \n\n ");
for(i=0;i<=top;i++)
{
printf("\n%d",stack[i]);
}
}
delay(2500);
printf("\n\npress any key to continue ");
getch();
dd:
delay(500);
clrscr();
printf("\n\nPress enter to continue using app\n \tOR\n press n to close the app ");
x=getch();
delay(500);
if(x==13)
{
delay(500);
clrscr();
goto gg;
}
else if(x=='n'||x=='N')
{
printf("\n\nthank u for using app ");
delay(1500);
exit();
}
else
{
printf("\n\n\ninvalid input.....please press Enter key OR n \n ");
delay(3000);
goto dd;
}


case 4:

printf("\n\n\nClosing files....");
delay(1500);
clrscr();
printf("\n\nclosing app.....");
delay(700);
clrscr();
printf("\n\nclosing app......");
delay(700);
clrscr();
printf("\n\nclosing app.......");
delay(700);
clrscr();
printf("\n\nclosing app........");
delay(700);
clrscr();
exit();

default:
{
clrscr();
printf("\n\ninvalid input\n\nplease try again......");
delay(1500);
clrscr();
goto gg;
}


}
getch();
}

