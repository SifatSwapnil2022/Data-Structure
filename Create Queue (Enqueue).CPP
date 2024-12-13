#include<iostream>
#include<conio.h>
#include<stdlib.h>
#define SIZE 100
using namespace std;
int q[SIZE],front=0,rear=0;
int main()
{
int ch;
void enqueue();

void display();

while(1)
{
cout<<"\n 1.Insert element";

cout<<"\n 2.display";
cout<<"\n 3.exit";
cout<<"\n enter your choice:";
cin>>ch;

switch(ch)
{
case 1:

enqueue();
break;

case 2:
display();
break;
case 3:
exit(0);
default:
cout<<"\n invalid choice";
}
}
}
void enqueue()
{
int no;
if (rear==SIZE && front==0)
cout<<"queue is full";
else
{
cout<<"enter the num:";
cin>>no;
q[rear]=no;
}
rear++;
}

void display()
{
int i,temp=front;
if (front==rear)
cout<<"the queue is empty";
else
{
cout<<"\n element in the queue:";
for(i=temp;i<rear;i++)
{
cout<<q[i]<<" ";
}
}
}

