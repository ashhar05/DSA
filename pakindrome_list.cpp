    bool isPalindrome(ListNode* head) {

ListNode* temp=head;
vector<int> arr;
while(temp->next!= NULL)
{
    arr.push_back(temp->val);
    temp=temp->next;
}
int n=arr.size();
ListNode* prev=NULL;
ListNode* curr=head;

while(curr!= NULL)
{
    temp=curr->next;
    curr->next=prev;
    prev=curr;
    curr=temp;
}
temp=prev;
int i=0;
int t=0;
while(i<n && temp!= NULL)
{
    if(arr[i]!= temp->val)
    {
        t=-1;
        break;
    }
    temp=temp->next;
    i++;
    
}
if(t==0)
return true;
else
return false; 
        
    }