#include<stdio.h>
 
 void input(int *a, int *b);
 int add(int a,int b);
 void output(int *a,int *b,int *c);

void main()
  {
   int a,b,c;
   input(&a,&b);
   c = add(a,b);
   output(a,b,c);
  }

int add(int x,int y)
  {int z;
  z=x+y;
  return z;
  }
void input(int &a,int &b)
{printf("Enter two numbers\n");
 scanf("%d %d",a,b);
 }  
  
void output(int &x,int &y,int &z)
{printf("%d + %d= %d");
}  
