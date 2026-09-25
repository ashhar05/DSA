
while(curr!= NULL)
{
    Node temp=curr->next;
    curr->next=prev;
    prev=curr;
    curr=temp;
}
return prev;