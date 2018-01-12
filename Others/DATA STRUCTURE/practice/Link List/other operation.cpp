#include <bits/stdc++.h>
using namespace std;

struct node{
    int data;
    struct node *next;
};

struct node *start = NULL;

void display();

void insert_into_a_sorted_link_list();
void swap();
void reverse();

int n;

int main()
{
    struct node *temp,*new_node,*current;

    cin >> n;

    for(int i=1; i<=n; i++){
        new_node = (struct node*)malloc(sizeof(struct node));
        scanf("%d",&new_node->data);
        new_node->next = NULL;
        if(i == 1){
            start= new_node;
            current = new_node;
        }
        else
        {
            current->next = new_node;
            current = new_node;
        }

    }

    ///insert_into_a_sorted_link_list();
    ///swap();
    reverse();
    display();

    return 0;
}

void display(){

    struct node *temp;

    temp = start;

    while(temp != NULL){
        printf("%d ",temp->data);
        temp = temp->next;
    }

}

void insert_into_a_sorted_link_list()
{
    int a;
    cin >> a;
    struct node *temp,*new_node,*current;
    temp = start;
    current = NULL;
    new_node = (struct node*)malloc(sizeof(struct node));
    new_node->data = a;
    new_node->next = NULL;
    while(temp->data < a && temp->next != NULL) /// when temp->data > a ,then stop...
    {
        current = temp;
        temp = temp->next;
    }
    if(current == NULL){
        new_node->next = start;
        start = new_node;
    }
    else if(temp->next == NULL){
        temp->next = new_node;
    }
    else{
        current->next = new_node;
        new_node->next = temp;
    }
}

void swap(){
    int a,b,t;
    cin >> a >> b;
    struct node *temp,*t1,*t2;
    temp = start;
    while(temp->data != a){
        temp = temp->next;
    }
    t1 = temp;
    temp = start;
    while(temp->data != b){
        temp = temp->next;
    }
    t2 = temp;
    t = t1->data;
    t1->data = t2->data;
    t2->data = t;
}

void reverse()
{
    struct node *a,*b,*c;
    a = start;
    b = a->next;
    c = b->next;
    a->next = NULL;
    while(c->next!=NULL)
    {
        b->next = a;
        a = b;
        b = c;
        c = c->next;
    }
    b->next = a;
    c->next = b;
    start = c;
}

void sort() ///....baki
{
    struct node *temp,*current;
    temp = start;
    current = start;
    for(int i=1; i<=n; i++){
        temp = current->next;
        for(int j=i+1; j<=n; j++){
            if(temp->data < current->data){

            }
        }

    }
}
