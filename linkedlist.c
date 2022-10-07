#include<stdio.h>

struct node
{
    int data;
    struct node *link;
};
void main()
{
 struct node *head,*newnode,*ptr;
 head=NULL;
// ptr=NULL;
// newnode=NULL;
 int n,count;
 printf("How many nodes you want create : ");
 scanf("%d",&n);
// head=(struct node*) malloc(sizeof(struct node));
// printf("Enter the data to head node :");
// scanf("%d",&head->data);
 //while(choice)
 for(int i=0;i<n;i++)
 {
     newnode=(struct node*) malloc(sizeof(struct node));
     printf("Enter the data :");
     scanf("%d",&newnode->data);
     newnode->link=NULL;
     if(head==NULL)
     {
         head=newnode;
         ptr=head;
     }
     else
     {
        ptr->link=newnode;
        ptr=newnode;
     }
  //   printf("Do u want to continue(0,1)?");
     //scanf("%d",&choice);
 }

   printf("The head data is : %d\n",head->data);
   printf("The last data is : %d\n",ptr->data);
   printf("\n");
        ptr=head;
     while(ptr!=NULL)
     {
         printf("%d ",ptr->data);
         ptr=ptr->link;
         count++;
     }
    //getch();

 }

 int insert_front()
 {

 }
































