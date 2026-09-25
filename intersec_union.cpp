#include<bits/stdc++.h>
using namespace std;
vector<int> intersec(vector<int> a, vector<int> b)
{
    int n1=a.size();
    int n2=b.size();
    int i=0;
    int j=0;
    vector<int> inter;
    while(i<n1 && j<n2)
    {
        if(a[i]==b[j])
        {
            inter.push_back(a[i]);
            i++;
            j++;
        }
        else if(a[i]>b[j])
        {
            j++;
        }
        else
        {
            i++;
        }
    }
    return inter;
}
vector<int> unionset(vector<int> a, vector<int> b)
{
    int n1=a.size();
    int n2=b.size();
    vector<int> unionn;
    int i=0;
    int j=0;
    while(i<n1 && j<n2)
    {
        if(a[i]<=b[j])
        {
            if(unionn.size()==0 || unionn.back()!=a[i])
            {
                 unionn.push_back(a[i]);
            }
            i++;
        }
        else
        {
            if(unionn.size()==0 || unionn.back()!=b[j])
            {
                 unionn.push_back(b[j]);
            }
            j++;
        }
    }
    while(j<n2)
    {
        if(unionn.size()==0 || unionn.back()!=b[j])
        {
            unionn.push_back(b[j]);
        }
        j++;
    }
    while(i<n1)
    {
        if(unionn.size()==0 || unionn.back()!=a[i])
        {
            unionn.push_back(a[i]);
        }
        i++;
    }
    return unionn;
}
int main()
{
    vector<int> a={1, 2, 2, 3, 3, 4, 5, 6};
    vector<int> b={2, 3, 3, 5, 6, 6, 7};
    vector<int> inter;
    inter=intersec(a,b);
    int n=inter.size();
    vector<int> unionn;
    unionn=unionset(a,b);
     cout<<"Intersection of Two sets:";
    for(int i=0; i<n; i++)
    {
        cout<<inter[i]<<" ";
    }
    cout<<endl<<"Union of Two sets:";
    int m=unionn.size();
    for(int i=0; i<m; i++)
    {
        cout<<unionn[i]<<" ";
    }
    return 0;
}