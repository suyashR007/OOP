#include<stdio.h>
#include<stdlib.h>
struct node* create();

struct node* add(struct node *);

struct node* beg(struct node *);

struct node* addbef(struct node *);

struct node* addafter(struct node *);

struct node* addpos(struct node *);
 
struct node* reverse(struct node*);

struct node* deleTe(struct node*);

void display(struct node *);

void count(struct node*);

void search(struct node*);
 
 

struct node{
	int data;
	struct node *next;
};
int main()
{
	struct node *List;
	while(1)
	{
		int c;
		
		printf("\n\n1 - Create New \n");
		printf("2 - Display  \n");
		printf("3 - Search \n");
		printf("4 - Count  \n");
		printf("5 - Add at beginning  \n");
		printf("6 - Add at End \n");
		printf("7 - Add After a node \n");
		printf("8 - Add Before a node \n");
		printf("9 - Add at a pos \n");	
		printf("10 - Delete \n");
		printf("11 - Reverse \n");				
		printf("12 - Exit \n");		
		scanf("%d",&c);
		switch(c)
		{
			    case 1:
					List = create();
			        break;	
				case 2:
					display(List);
					break;
				case 3:
				    search(List);
					break;
				case 4:
				    count(List);
					break;
				case 5:
				    List = beg(List);
					break;	
				case 6:
				    List = add(List);
					break;
				case 7:
				    List = addafter(List);
					break;
				case 8:
				    List = addbef(List);
					break;
				case 9:
				    List = addpos(List);
					break;
				case 10:
				    List = deleTe(List);
					break;	
				case 11:
				    List = reverse(List);
					break;		
				case 12:
				    exit(0);
				    break;
						
					
				
		}
		
		
	}
}
struct node* create()
{
	struct node *temp=NULL ;
	int n;
	printf("Enter the no of nodes\n");
	scanf("%d",&n);
    temp = beg(temp);
    n--;
    while(n--)
    {
    	temp  = add(temp);
	}
	
	return temp;
	
}
struct node* add(struct node *List)
{
	struct node *q = List;
	int n,d;
	
	while(q->next!=NULL)
	{
		q=q->next;
	}

		printf("Enter data \n");
		scanf("%d",&d);
		struct node *temp = (struct node*)malloc(sizeof(struct node));
		temp->data =  d;
		temp->next=NULL;
		q->next = temp;
		
	
	return List;
}

struct node* addafter(struct node *List)
{
	struct node *q = List,*temp;
	int n,d;
	printf("Enter the node \n");
	scanf("%d",&n);
	printf("Enter the node after which you want to append %d\n",n);
	scanf("%d",&d);
	while(q!=NULL)
	{
		if(q->data==d)
		{
		   temp =(struct node*)malloc(sizeof(struct node));
		   temp->data = n;
		   temp->next =  q->next;
		   q->next = temp;
		   return  List;	
		}
		q=q->next;
	}
	printf("Invalid node %d not found",d);
	return List;

	
}
struct node* addbef(struct node *List)
{
	struct node *q = List,*temp;
	int n,d;
	if(List==NULL)
	{
		printf("\n\nFirst Create a list\n\n");
		return NULL;
	}
	printf("Enter the node \n");
	scanf("%d",&n);
	printf("Enter the node before which you want to append %d\n",n);
	scanf("%d",&d);
	
	if(q->data==d)
	{
		 temp =(struct node*)malloc(sizeof(struct node));
		temp->data =  n;
		temp->next = q;
		List =  temp;
		return List;
	}
	while(q!=NULL)
	{
		if(q->next->data==d)
		{
		   temp =(struct node*)malloc(sizeof(struct node));
		   temp->data = n;
		   temp->next =  q->next;
		   q->next = temp;
		   return  List;	
		}
		q=q->next;
	}
	printf("Invalid node %d not found\n\n",d);
	return List;

	
}
struct node* beg(struct node *List)
{
	int d;
	struct node *q = (struct node*)malloc(sizeof(struct node));
	printf("Enter data\n");
	scanf("%d",&d);
	q->data = d;
	q->next=List;
	return q; 
}

struct node* addpos(struct node *List)
{
	struct node *q = List,*temp;
	
	int n,pos;
	printf("Enter the node ");
	scanf("%d",&n);
	temp =(struct node*)malloc(sizeof(struct node));
	temp->data = n;
	printf("Enter the position to add %d",n);
	scanf("%d",&pos);
	
	if(pos==1)
	{
		temp =(struct node*)malloc(sizeof(struct node));
		temp->data = n;
		temp->next = List;
		List = temp;
		return List;   
	}
	int i;
	for(i=1;i<(pos-1)&&(q!=NULL);i++)
	 q=q->next;
             if(q==NULL)
             {
                     printf(“Invalid”);
                      Return List;
               }
	temp->next = q->next;
	q->next = temp;
	 
	return List;

	
}
void display(struct node *List)
{
	struct node *q = List;
	while(q!=NULL)
	{
		printf("%d  ",q->data);
		q=q->next;
	}
}
void  search(struct node *List)
{
	struct node *q = List;
	int c = 0;
	int num;
	printf("Enter the element to be searched\n");
	scanf("%d",&num);
	while(q!=NULL)
	{
		c++;
	   if(q->data==num)
	   {
	   	printf("the search is found at %d \n",c);
	   	return;
	   }
	   q=q->next;
	}
	printf("InValId\n");
}
void count(struct node *List)
{
	struct node *q = List;
	int c = 0;
	while(q!=NULL)
	{
	   c++;
		q=q->next;
	}
	printf("No of elements are %d \n",c);
}
 
struct node* deleTe(struct node* List)
{
	struct node* p = List;
	int num;
	printf("Enter elemnt\n");
	scanf("%d",&num);
	if(List==NULL)
	return;
	if(List->data==num)
	{
	
		List = List->next;
		free(p);
		return List;
	}
	while(p->next!=NULL)
	{
	    if(p->next->data==num)
	    {
	    	struct node *q = p->next;
	    	p->next = q->next;
	    	free(q);
	    	return List;
		}
		p = p->next;
	}
	printf("NO such elemnt Found\n");
	return List;
	
	
	
}
struct node* reverse(struct node *List){
	struct node *n,*p=NULL,*q = List;
	while(q!=NULL)
	{
		n = q->next;
		q->next=p;
		p=q;
		q=n;
	 }
	 display(p);
	return p;  
}

