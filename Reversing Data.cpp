#include<iostream>
#include <conio.h>
#define MAX 300
using namespace std;

typedef struct stack
{
int data[MAX];
int top;
}
stack;

int empty(stack *s)
{
if(s -> top == -1)
return(1);
return(0);
}

int full(stack *s)
{
if(s -> top == MAX - 1)
return(1);
return(0);
}
void push(stack *s, int x)
{
s -> top = s -> top + 1;
s -> data[s -> top] = x;
}

int pop(stack *s)
{
int x;
x = s -> data[s -> top];
s -> top = s -> top - 1;
return(x);
}
int main()
{
stack s;
int num;
s.top = -1;
cout << "Enter a decimal number:";
cin >> num;
while((num != 0))
{
if(!full(&s))
{
push(&s, num % 2);
num = num / 2;
}
else
{
cout << "Stack overflow";
exit(0);
}
}
while(!empty(&s))
{
num = pop(&s);
cout << num;
}
}
