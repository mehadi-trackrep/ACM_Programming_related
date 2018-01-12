#include <bits/stdc++.h>
using namespace std;

struct node{
    int data;
    struct node *next;
};

struct node *start = NULL;

void display()
{
    struct node *temp;
    temp = start;
    printf("..............\n");
    while(temp != NULL){
        printf("%d ",temp->data);
        temp = temp->next;
    }
}

void last_add(int d)
{
    struct node *new_node,*temp;
    temp = start;
    while(temp->next != NULL){
        temp = temp->next;  /// next link address k call kora...
    }
    new_node = (struct node*)malloc(sizeof(struct node));
    new_node->data = d;
    new_node->next = NULL;
    temp->next = new_node;

}

void first_add(int d){
    struct node *new_node;
    new_node = (struct node*)malloc(sizeof(struct node));
    new_node->data = d;//new_node->next = NULL;
    new_node->next = start;
    start = new_node;   /// start er initial position/address change
}

void delate(int d)  /// d k delate korbo
{
    struct node *temp,*current;
    temp = start;
    while(temp->data != d){
        current = temp;
        temp = temp->next;
    }
    current->next = temp->next;
}

void insert_after(int a,int b)    /// a er age b insert korbo...
{
    struct node *temp,*new_node;
    temp = start;   /// start means root address, pointer node
    while(temp->data != a)
    {
        temp = temp->next;
    }
    new_node = (struct node*)malloc(sizeof(struct node));
    new_node->data = b;
    new_node->next = temp->next;
    temp->next = new_node;
}

void insert_before(int a,int b)    /// a er age b insert korbo...
{
    struct node *temp,*current,*new_node;
    temp = start;   /// start means root address, pointer node
    current = temp;
    while(temp->data != a)
    {
        temp = temp->next;
        if(temp->data != a)
            current = current->next;
    }
    new_node = (struct node*)malloc(sizeof(struct node));
    new_node->data = b;
    current->next = new_node;
    new_node->next = temp;
}

int main()
{
    struct node *new_node,*current;
    printf("5 ti number input din:-\n");
    for(int i = 1;i <= 5;i++){

        new_node = (struct node*)malloc(sizeof(struct node));
        scanf("%d",&new_node->data);
        new_node->next = NULL;

        if(start == NULL)
        {
            start = new_node;
            current = new_node;
        }
        else
        {
            current->next = new_node;
            current = new_node;
        }

    }

//    int x;
//
//    cin >> x;
//    last_add(x);
//    cin >> x;
//    first_add(x);
//    display();
//
//    delate(3);
//    display();

    int a,b;
    ///printf("Insert after a number a, the number b:-\n");
    ///cin >> a >> b;
    ///insert_after(a,b);
    printf("Insert before a number a, the number b:-\n");
    cin >> a >> b;
    insert_before(a,b);
    display();

    return 0;
}
