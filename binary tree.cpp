#include <iostream>
#include<stdlib.h>
using namespace std;
struct node *root=NULL;

struct Queue
{
     int size;
     int front;
     int rear;
     node **Q;
};
struct node
{
	struct node *lchild;
	int data;
	struct node *rchild;
};
void treecreate()
{
	struct Node *p,*t;
	int x;
	struct Queue q;
	treecreate();
	cout<<"Enter the root value";
	cin>>x;
	root=new node();
	root->data=x;
	root->lchild-root->rchild=NULL;
	enqueue(&q,root);
	
	while(!isEmpty(q))
	{
		p=dequeue(&p);
		cout<<"Enter left child";
		cin>>x;
		if(x!=-1)
		{
			t=new node();
			t->data=x;
			t->lchild=t->rchild=NULL;
			p->lchild=t;
			enqueue(&q,t;)
		}
		cout<<"Enter right child";
		cin>>x;
		if(x!=-1)
		{
			t=new node();
			t->data=x;
			t->lchild=t->rchild=NULL;
			p->rchild=t;
			enqueue(&q,t;)
		}
	}
	
	
}
void create(struct Queue *q,int size)
{
	q->size=size;
	q->front=q->rear=0;
     q->Q=new node();
}
void enqueue(struct Queue *q,int size)
{
   if((q->rear+1)%q->size==q->front)
         cout<<"Queue is full";
    else 
    {
    	q->rear=(q->rear+1)%q->size;
    	q->Q[q->rear]=x;
	}
}
node * dequeue(struct Queue *q)
{
	node x=NULL;
	struct node *t;
	
	if(front==NULL)
	          cout<<"QUEUE IS EMPTY";
	else
	{
		x=front->data;
		t=front;
		front=front->next;
		free(t);
	}
	return x;
}
int isEmpty(struct queue q)
{
	return q.front==q.rear;
}
void preorder(struct node *p)
{
	if(p)
	{
		cout<<p->data;
		preorder(p->lchild);
		preorder(p->rchild);
	}
}
int main()
{
	treecreate();
	preorder(root);
}




















