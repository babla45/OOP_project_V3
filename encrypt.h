#include"node.h"
void enc(string &s, int n, node **head)
{
    node *h;
    int l=s.size();
    for(int a=0; a<l; a++)
    {
        h=*head;
        int k=s[a];
        while(h->data!=k)
            h=h->next;

        k=(a+1)*n;
        while(k--)
            h=h->next;

        s[a]=(char)(h->data);
    }
}


void dec(string &s, int n, node **head)
{
    node *h;
    int l2=s.size();
    for(int a=0; a<l2; a++)
    {
        h=*head;
        int k=(int)s[a];

        while(h->data!=k)
            h=h->next;

        k=(a+1)*n;
        while(k--)
            h=h->prev;
        s[a]=(char)(h->data);
    }


}