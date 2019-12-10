
#define EOF -1

void main()
{

int c,wc=0,nwhite=0,nother=0;
clrscr();
printf("\nEnter some String \n\n");
while((c=getchar())!=EOF)
{
++wc;
  if(c==' ' || c=='/n' || c=='/t')
  {
   ++nwhite;
  }
  else
  {
   ++nother;
  }
}
printf("\n%d characters\n",wc);
printf("\n%d white spaces and  %d others",nwhite,nother);
getch();
}
