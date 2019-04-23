#include<stdio.h>
#include<process.h>
#include<conio.h>
#include<malloc.h>

int top=0;

struct tree
{int data;
struct tree *left,*right;
}*temp=NULL,*newn=NULL,*root=NULL,*pre,*a[500];

void post(struct tree * temp)
{
if(temp==NULL)
return ;
else
{
post(temp->left);
post(temp->right);
printf("%d",temp->data);
}
}

void post2(struct tree *temp)
{
Q:

      while(temp!=NULL)
     { a[top++]=temp;
      temp=temp->left;

     }
      pre=a[top-2];
	    C:
      if(a[top-1]->right!=NULL)
      {temp=a[top-1]->right;
       goto Q;
      }
      else
      { printf("%d",a[top-1]->data);
	top=top-1;
	goto C;
      }

}

void post1(struct tree *temp)
{   p:
while(temp!=NULL)
     { a[top++]=temp;
     if(temp->right!=NULL)
    { a[top++]=temp->right;
     a[top-1]->data*=-1;}
      temp=temp->left;
     }
       z:
     if(a[top-1]->data<0)
     {a[top-1]->data*=-1;

       temp=a[top-1];
       top--;
       goto p;
      }
      else
      {printf("%d,",a[top-1]->data);
       top=top-1;
       if(top==0)
       return ;
       goto z;
      }

}

void insertion(struct tree *temp)
{
if(newn->data<temp->data)
{ if(temp->left!=NULL)
   insertion(temp->left);
   else
   temp->left=newn;
}
else
{ if(temp->right!=NULL)
   insertion(temp->right);
   else
   temp->right=newn;
}

}

void main()
{
int c;
A:
printf("press 1 for insertion\n");
printf("press 2 for deletion\n");
printf("press 3 for display\n");
printf("press 4 form exit\n");
scanf("%d",&c);
switch (c)
{ case 1:
newn=(struct tree*)malloc(sizeof(struct tree));
printf("enter the element you want to insert");
scanf("%d",&newn->data);
newn->left=NULL;
newn->right=NULL;
if(root==NULL)
{root=newn;
}
else{ insertion (root);}  goto A;

case 2:  goto A;

case 3: post1(root); goto A;
case 4: exit(0);
}
}