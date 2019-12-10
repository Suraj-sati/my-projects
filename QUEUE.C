#define CAPACITY 5

int queue[CAPACITY];
int i;
int front=0;
int rear=0;
void main()
{
int ch;
void insert(void);
void delete(void );
void trav(void);


while(1)
{
clrscr();

printf("\n****** Queue ******\n\n");
printf("Press : ");
printf("\n1: insert");
printf("\n2: delete");
printf("\n3: traverse");
printf("\n4: exit");

printf("\n\nenter choice :");
scanf("%d",&ch);

switch(ch)
{

case 1:
insert();
break;

case 2:
delete();
break;

case 3:
trav();
break;

case 4:
exits(0);


default:
printf("\n\ninvalid input");
}
}
}


void  insert()
{
if(rear==CAPACITY )
{
printf("\n\n queue is full");
delay(2000);
}

else
{
int element;
printf("\n\nenter the element : ");
scanf("%d",&element);
queue[rear]=element;
rear=rear+1;
printf("\n\n Element succefully  filled");
delay(1000);
}

}


void delete()
{
if(rear==front )
{
printf("\n\n queue is empty");
delay(1000);
}

else
{
printf("element deleted i.e : %d ",queue[front]);

delay(1000);
for(i=0;i<=rear;i++)
{
queue[i]=queue[i+1];
}
rear--;
}
}

void trav()
{
if(front==rear )
{
printf("\n\n queue is empty");
delay(1000);
}

else
{
printf("\n\nElements in queue are :\n ");
for(i=0;i<rear;i++)
{
printf("\n%d",queue[i]);
delay(400);
}
printf("\n\nEnd");
getch();


}
}
int exits()
{
exit(0);
}