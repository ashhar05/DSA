#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node *next= NULL;
};
int main()
{
    node *head=new node();
    head->data=10;
    node *temp=head;
    temp->next =new node();
    temp=temp->next;
    temp->data=12;
    temp->next =new node();
    temp=temp->next;
    temp->data=76;
    temp->next =new node();
    temp=temp->next;
    temp->data=97;
    temp->next =new node();
     temp=temp->next;
    temp->data=101;
    node *demo=head;
    int sum=0;
    while(demo!=NULL)
    {
        cout<<demo->data<<"-->";
        sum+=demo->data;
        demo=demo->next;
    }
    cout<<endl<<"sum of data elements="<<sum;
}