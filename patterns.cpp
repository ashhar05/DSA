#include <bits/stdc++.h>
using namespace std;

void print3(int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<i;j++)
        {
            cout<<" ";
        }
        for(int j=2*n-1-2*i;j>0;j--)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}

void print5(int n)
{
    int i,j,stars;
    for(i=1;i<=(2*n-1);i++)
    {
        stars=i;
        if(i>n)
            stars=2*n-i;
        for(j=1;j<=stars;j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
}

void print6(int n)
{
    int start=1;
    int i,j;
    for(i=1;i<=n;i++)
    {
        if(i%2==0)
            start=0;
        else
            start=1;

        for(j=1;j<=i;j++)
        {
            cout<<start<<" ";
            start=1-start;
        }
        cout<<endl;
    }
}

void print7(int n)
{
    int i,j,k;
    for(i=0;i<n;i++)
    {
        for(j=1;j<=i+1;j++)
        {
            cout<<j;
        }
        for(k=1;k<=2*n-2-2*i;k++)
        {
            cout<<" ";
        }
        for(j=i+1;j>=1;j--)
        {
            cout<<j;
        }
        cout<<endl;
    }
}

void print8(int n)
{
    int k=1;
    int i,j;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout<<k<<" ";
            k++;
        }
        cout<<endl;
    }
}

void print9(int n)
{
    int i,j;
    for(i=1;i<=n;i++)
    {
        int k=65;
        for(j=1;j<=i;j++)
        {
            cout<<(char)k<<" ";
            k++;
        }
        cout<<endl;
    }
}

void print10(int n)
{
    int i,j;
    int k=65;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout<<(char)k<<" ";
        }
        k++;
        cout<<endl;
    }
}

void print11(int n)
{
    int k;
    int i,j;
    for(i=0;i<n;i++)
    {
        k=65;
        for(j=0;j<n-i-1;j++)
        {
            cout<<" ";
        }
        for(j=0;j<2*i+1;j++)
        {
            cout<<(char)k;
            if(j<i)
                k++;
            else
                k--;
        } 
        cout<<endl;
    }
}

void print12(int n)
{
    int k;
    int i,j;
    for(i=0;i<n;i++)
    {
        k=65+n-i;
        for(j=0;j<i;j++)
        {
            cout<<(char)k;
            k++;
        }
        cout<<endl;
    }
}

void print13(int n)
{
    int i,j,k,star=1;
    for(i=1;i<2*n;i++)
    {
        if(i<=n)
        {
            for(j=1;j<=i;j++)
            {
                cout<<"*";
            }
            for(k=1;k<=2*n-2*i;k++)
            {
                cout<<" ";
            }
            for(j=1;j<=i;j++)
            {
                cout<<"*";
            }
            star++;
        }
        else
        {
            star--;
            for(j=1;j<star;j++)
            {
                cout<<"*";
            }
            for(k=1;k<=2*i-2*n;k++)
            {
                cout<<" ";
            }
            for(j=1;j<star;j++)
            {
                cout<<"*";
            }
        }
        cout<<endl;
    }
}

void print14(int n)
{
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==0 || i==n-1 || j==0 || j==n-1)
                cout<<"*";
            else
                cout<<" ";
        }
        cout<<endl;
    }
}

void print15(int n)
{
    int i,j,k,p;
    for(i=1;i<2*n;i++)
    {
        for(j=n;j>=1;j--)
        {
            p=j;
            for(k=1;k<2*j;k++)
            {
                cout<<p<<" ";
            }
            cout<<endl;
        }
    }
}

int main()
{
    int n;
    cin>>n;
    print15(n);
    return 0;
}