
   // binary search tree[BST]....insertion

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
	struct node *lchild;
	int data;
	struct node *rchild;
	
};
void insert(struct node **,int);
void inorder(struct node * );
void preorder(struct node *);
void postorder(struct node *);
int main()
{
	struct node *p;
	p=NULL;
     int n,i,ele;
     printf("enter the no of you want to insert\n");
     scanf("%d",&n);
     while(i ++ < n)
     {
     	printf("enter node value\n");
     	scanf("%d",&ele);
     	insert(&p,ele);
     	
     }
     printf("your inorder travesrse id\n ");
     inorder(p);
	 printf("\n");
	 
	 printf("your preorder tracesse is\n");
	 preorder(p);
	 printf("\n") ;
	 printf("postorder rotation\n");
	 postorder(p);
	 printf("\n");
	 
}
void insert(struct node **pt,int ele)
{
	if(*pt==NULL)
	{
		*pt=(struct node *)malloc(sizeof(struct node*));
		(*pt)->lchild=NULL;
		(*pt)->data=ele;
		(*pt)->rchild=NULL;
		return;
	}
	else
	{
		
		
			if(ele < (*pt)->data)
			{
				insert(&((*pt)->lchild),ele);
				return;
				
			}
			else
			{
				insert(&(*pt)->rchild,ele);
			}
		
	}
	return;
}
void inorder(struct node *pt)
{
if(pt!=NULL)
	{
	
		inorder(pt->lchild);
		
		printf("-->%d",pt->data);
		
		inorder(pt->rchild);
   }
   else
   {
   	return;
   }
}
void preorder(struct node *pt)
{
	if(pt!=NULL)
	{
		printf("--->%d",pt->data);
		preorder(pt->lchild);
		preorder(pt->rchild);
	}
	else
	{
		return;
	}
}
void postorder(struct node *pt)
{
	if(pt!=NULL)
	{
		postorder(pt->lchild);
		postorder(pt->rchild);
		printf("-->%d",pt->data);
		
	}
	else
	{
		return;
	}
}
