# include<stdio.h>
# include<malloc.h>
struct doubly
{
struct doubly *p;
int number;
struct doubly *next;
}*first ;
void form (int);
void show();
int main ()
{

int option, nodes, n, j ;
first= NULL;

printf ("\n Enter number of nodes:");
scanf ( "%d" , &nodes);
for (j=0;j<nodes;j++)
{
printf ("\n Enter the element : " ) ;
scanf ( "%d",&n);
form(n) ;
}
show ( ) ; 
}
void form(int number){
struct doubly *q,*temp;
temp=(struct doubly*)malloc(sizeof(struct doubly)) ;
temp->number=number;
temp->next=NULL;

if( first == NULL)
{
temp->p=NULL;
first=temp;
}
else
{
q=first ;
while (q->next!=NULL){
q=q->next;
}
q->next=temp;
temp->p=q;
}
}
void show ()
{
struct doubly *q=first;
if (first==NULL)
{
printf( "List is empty " ) ;

}
else{
printf ("\n List is : \n " ) ;
while (q->next!=NULL)
{
printf("%d->",q->number);
q=q->next;
}
printf("%d->NULL",q->number);
struct doubly *w=q;
//
printf("\nReversed list is:\n");
while(w!=NULL){
    printf("%d->",w->number);
    w=w->p;
}
printf("NULL");
}
}
