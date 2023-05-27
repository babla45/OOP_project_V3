#include<iostream>
using namespace std;




class node
{
public:
    node* prev;
    int data;
    node* next;
};

node *head=NULL;
char c;
int t,n=55;
string s, s2;


void push_b(node **head, int d)
{
    node *temp=new node(),*h;
    temp->data=d;
    temp->next=NULL;
    temp->prev=NULL;

    if(*head==NULL) *head=temp;
    else
    {
        h=*head;
        while(h->next!=NULL) h=h->next;

        h->next=temp;
        temp->prev=h;
    }
}

void assign_value(node **head)
{
    for(int a=32; a<=126; a++)
        push_b(head,a);

    node *h=*head;
    while(h->next!=NULL)
    {
        h=h->next;
    }
    h->next=*head;
    (*head)->prev=(h);
}

void print(node **head)
{
    node *temp=*head;
    int n=1;
    while(temp!=NULL and n<100)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
        n++;
    }
}
