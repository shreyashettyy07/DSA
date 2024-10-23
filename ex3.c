#include<stdio.h>
#include<stdlib.h>
int size,f,top=-1,num,k,i,stack[6],rev[6];
char choice;
void push();
void pop();
void display();
int pali();
void main()

{
printf("Enter the size \n");
scanf("%d",&size);
printf("Menu  A.Push   B.Pop  C.Display  D.Check for palindrome   E.Exit\n");
while(1)
{
     printf("Enter the choice\n");
     scanf("%c",&choice);
     switch(choice)
     {
     case'A':push();
     	break;
     case'B':pop();
     	break;
     case'C':display();
     	break;
     case'D':f=pali();
     if(f==1)
     	printf("It's Palindrome\n");
     else 
     	printf("It's not a palindrome\n");
     break;
     case'E':exit(0);
     default:printf("Wrong choice..\n");
     }
}
}
void push()
{
	if(top==(size-1))
	{
		printf("Stack is overflow\n");
	}
	else
	{
		printf("Enter the number to be pushed\n");
		scanf("%d",&num);
		top=top+1;
		stack[top]=num;
	}
}
void pop()
{
	if(top==-1)
	{
	printf("Stack is underflow\n");
	}
	else
	{
	num=stack[top];
	printf("Popped element is %d\n",num);
	top--;
	}
	}
void display()
{
	if(top==-1)
	{
	printf("Stack is empty\n");
	}
	else
	{
	printf("Stack contents...\n");
	for(i=top;i>=0;i--)
	{
	printf("%d\n",stack[i]);
	}
	}
	}
int pali()
{
int flag=1;
for(i=top;i>=0;i--)
{
rev[k++]=stack[i];
}
for(i=top;i>=0;i--)
{
if(stack[i]!=rev[--k])
{
flag=0;
}
}

return flag;
}




