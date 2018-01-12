#include <bits/stdc++.h>
using namespace std;

struct node{
    int data;
    struct node *next;
};
struct node *start = NULL;

void display();

void insert_first();
void insert_last();
void insert_mid();
void insert_one_before();
void insert_one_after();
void insert_mid_before(); ///V.V.I. process: je number k delete korbo take 'temp' banabo
                          /// and, temp er ager/porer number k current banabo...
void insert_mid_after();

void delate_first();
void delate_last();
void delate_mid();
void delate_one_before();
void delate_one_after();
void delate_mid_before();
void delate_mid_after();

void insert_into_a_sorted_link_list();
void swap();
void reverse();

int n;

int main()
{
    struct node *new_node,*current;

    cin >> n;

    for(int i=1; i<=n; i++){

        new_node = (struct node*)malloc(sizeof(struct node));
        scanf("%d",&new_node->data);
        new_node->next = NULL;
        if(i == 1){
            start = new_node;
            current = new_node;
        }
        else
        {
            current->next = new_node;
            current = new_node;
        }

    }

    ///insert_first();
    ///insert_last();
    //if(n%2 != 0)    /// n odd hole mid pabo
       ///insert_mid();
    ///insert_one_before();
    ///insert_one_after();
    ///insert_mid_before();
    ///insert_mid_after();

    ///delate_first();
    ///delate_last();
    ///delate_mid();
    ///delate_mid_before();
    ///delate_mid_after();
    ///delate_one_before();
    ///delate_one_after();

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

void insert_first(){
    int a;
    cin >> a;
    struct node *new_node;
    new_node = (struct node*)malloc(sizeof(struct node));
    new_node->data = a;
    new_node->next = start;
    start = new_node;
}

void insert_last(){
    int a;
    cin >> a;
    struct node *new_node,*temp;

    temp = start;

    while(temp->next != NULL){
        temp = temp->next;
    }

    new_node = (struct node*)malloc(sizeof(struct node));
    new_node->data = a;
    new_node->next = NULL;

    temp->next = new_node;
}

void insert_mid(){
    int a;
    cin >> a;
    int i = 1;
    struct node *temp,*new_node;
    temp = start;
    while(i < n/2){
        temp = temp->next;
        i++;
    }
    new_node = (struct node*)malloc(sizeof(struct node));
    new_node->data = a;
    new_node->next = temp->next;
    temp->next = new_node;
}

void insert_one_before(){
    int a,b;    /// a er age b insert korbo...
    cin >> a >> b;
    struct node *temp,*current,*new_node;
    temp = start;
    current = start;
    while(temp->data != a){
        current = temp;
        temp = temp->next;
    }
    new_node = (struct node*)malloc(sizeof(struct node));
    new_node->data = b;
    new_node->next = temp;
    if(current != start)
        current->next = new_node;
    else
        start = new_node;
}

void insert_one_after(){
    int a,b;    /// a er pore b insert korbo...
    cin >> a >> b;
    struct node *temp,*new_node;
    temp = start;
    while(temp->data != a){
        temp = temp->next;
    }
    new_node = (struct node*)malloc(sizeof(struct node));
    new_node->data = b;
    new_node->next = temp->next;
    temp->next = new_node;
}

void insert_mid_before(){
    int a;
    cin >> a;
    int i = 1;
    struct node *temp,*current,*new_node;
    temp = start;
    while(i!=(n/2)+1){
        current = temp;
        temp = temp->next;
        i++;
    }
    new_node = (struct node*)malloc(sizeof(struct node));
    new_node->data = a;
    current->next = new_node;
    new_node->next = temp;
}

void insert_mid_after(){
    int a;    /// a er pore b insert korbo...
    cin >> a;
    int i = 1;
    struct node *temp,*new_node;
    temp = start;
    while(i!=(n/2)+1){ /// mid number search...,where n is odd
        temp = temp->next;
        i++;
    }
    //printf("=>%d\n\n",temp->data);
    new_node = (struct node*)malloc(sizeof(struct node));
    new_node->data = a;
    new_node->next = temp->next;
    temp->next = new_node;
}

void delate_first()
{
    start = start->next;
}

void delate_last()
{
    struct node *temp,*current;
    temp = start;
    while(temp->next != NULL){
        current = temp;
        temp = temp->next;
    }
    current->next = NULL;
}

void delate_mid()   /// when n odd
{
    int i = 1;
    struct node *temp,*current;
    temp = start;
    while(i != (n/2)+1)
    {
        current = temp; ///current, temp er 1 step pore jacce...
        temp = temp->next;
        i++;
    }
    current->next = temp->next;
}

void delate_mid_before()   /// when n odd
{
    int i = 1;
    struct node *temp,*current;
    temp = start;
    while(i!=(n/2))
    {
        current = temp; ///current, temp er 1 step pore jacce...
        temp = temp->next;
        i++;
    }
    if(n > 3)
        current->next = temp->next;
    else
        start = start->next; /// when n == 3
}

void delate_mid_after() /// when n odd
{
    int i = 1;
    struct node *temp,*current;
    temp = start;
    while(i!=(n/2)+2)   ///ekhettere temp hobe mid er porer ta,current hobe mid ta...
    {
        current = temp; ///current, temp er 1 step pore jacce...
        temp = temp->next;
        i++;
    }
    //printf("=>%d\n",temp->data);
    if(n > 3)
        current->next = temp->next;
    else
        current->next = NULL; /// when n == 3
}

void delate_one_before()
{
    int a;
    cin >> a;
    struct node *temp,*current,*ck;///ekhettere i use kore 'temp', 'current', control korbo...
    temp = start;
    ck = temp;
    int i = 1;
    while(ck->data != a)
    {
        ck = temp->next;
        if(i > 2){
            current = temp;
            temp = temp->next;
        }
        i++;
    }
    if(temp == start)   /// if a is the first number
        start = start->next;
    else
        current->next = temp->next;
}

void delate_one_after()
{
    int a;
    cin >> a;/// a er porer ti delete...
    struct node *temp,*current;
    temp = start;
    while(temp->data != a)
    {
        temp = temp->next;
    }
    current = temp->next;
    if(current->next == NULL)   /// if a is the first number
        temp->next = NULL;
    else
        temp->next = current->next;
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
    if(n == 2)
    {
        a = start;
        b = a->next;
        a->next = NULL;
        b->next = a;
        start = b;
        return ;
    }
    if(n == 1)
        return ;

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
