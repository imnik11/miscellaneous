
#include <stdio.h>
#include <stdlib.h>
struct node {
  int p,c;
  int next;
};
struct node *create(int e,int n)
{
    struct node *temp ;
    temp = (struct node*)malloc(sizeof(struct node));
    temp->p = e;
    temp->c = n;
    temp->next = NULL;
    
    return temp;
}
struct node* add(struct node *p1,struct node* p2)
{
    struct node *h,*t;
    t = NULL;
    while( p1 && p2)
    {
        if( p1->p == p2->p)
        {
            if( t = NULL)
            {
                t = create(p1->p,p1->c+p2->c);
                h = t;
                t = t->next;
            }
            else
            {
                t = create(p1->p,p1->c+p2->c);
                t = t->next;
                p1 = p1->next;
                p2 = p2->next;
            }
        }
        else if( p1->p > p2->p)
        {
             if( t = NULL)
            {
                t = create(p1->p,p1->c);
                h = t;
                p1 = p1->next;
                t = t->next;
            }
             else
            {
                t = create(p1->p,p1->c);
                t = t->next;
                p1= p1->next;
            }
        }
         else if( p1->p < p2->p)
        {
             if( t = NULL)
            {
                t = create(p2->p,p2->c);
                h = t;
                p2 = p2->next;
                t = t->next;
            }
             else
            {
                t = create(p2->p,p2->c);
                t = t->next;
                p2 = p2->next;
            }
        }
    }
}
void display(struct node *p)
{
    while(p)
    {
        printf("%d^%d->",p->c,p->p);
    }
    
}
int main(void) {
	// your code goes here
	struct node *h1,*h2,*h3;
	h1 = create(1,5);
	h1->next = create(1,4);
// 	h1->next->next = create(2,2);
	
	h2 = create(2,5);
	h2 ->next = create(2,4);
	
	h3 = add(h1,h2);
	display(h3);
	return 0;
}


