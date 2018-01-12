#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    struct node *next;
}*start=NULL;

void display()
{
    struct node *n;
    n=start;
    while(n!=NULL){
        printf("%d ",n->data);
        n=n->next;
    }
}


void delete_this(int n)
{
    int i=0;
    struct node *t,*temp,*s;
    t=start;
    s=start;
    while(t->data!=n){
        if(i>0) s=s->next;
        t=t->next;
        i++;
    }
    if(i==0){
        t=t->next;
        start=t;
    }
    else{
        s->next=t->next;
    }
}


void add_first(int n)
{
    struct node *t,*temp;
    t=(struct node*)malloc(sizeof(struct node));
    t->data=n;
    t->next=start;
    start=t;
}

void add_last(int n)
{
    struct node *t,*temp;
    t=(struct node*)malloc(sizeof(struct node));
    t->data=n;
    t->next=NULL;
    temp=start;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=t;
}


void add_mid_before(int n,int m)
{
    int i=0;
    struct node *t,*temp,*s;
    t=start;
    s=start;
    while(t->data!=n){
        if(i>0) s=s->next;
        t=t->next;
        i++;
    }
    temp=(struct node*)malloc(sizeof(struct node));
    temp->data=m;
    temp->next=s->next;
    s->next=temp;
}

void add_mid_after(int n,int m)
{
    struct node *t,*temp;
    t=start;
    while(t->data!=n){
        t=t->next;
    }
    temp=(struct node*)malloc(sizeof(struct node));
    temp->data=m;
    temp->next=t->next;
    t->next=temp;
}


void delete_after(int n)
{
    int i=0;
    struct node *t,*temp;
    t=start;
    temp=start;
    while(t->data!=n){
        t=t->next;
        temp=temp->next;
    }
    temp=temp->next;
    temp=temp->next;
    t->next=temp;
}

void delete_before(int n)
{
    int i=0;
    struct node *temp,*p1 = NULL,*p2 = NULL;
    temp=start;
    while(temp->data != n)
    {
        temp = temp->next;
        if(temp->data != n)
            p2->next = temp;
        if(p1->data != p2->data)
            p1->next = p2;
    }

}

int main()
{
    int i,j;
    for(i=1;i<=5;i++){
        struct node *current,*new_node;
        new_node=(struct node*)malloc(sizeof(struct node));
        scanf("%d",&new_node->data);
        new_node->next=NULL;
        if(start==NULL){
            start=new_node;
            current=new_node;
        }
        else{
            current->next=new_node;
            current=new_node;
        }
    }
    scanf("%d",&j);
    //add_first(j);
    //add_last(j);
    //add_mid_before(4,j);
    //add_mid_after(4,j);
    //delete_this(j);
    //delete_before(j);
    delete_before(j);
    display();
}

