#include<bits/stdc++.h>
using namespace std;
int main()
{
long long n,min=10000000000,i,sum=0,index=-1,j;
cin>>n;
long long a[n];
for(i=0;i<n;i++)
{
    cin>>a[i];
    sum+=a[i];   // sum now stores the sum of array
}
for(j=0;j<n;j++)
{
    if((sum-a[j])%7==0 && a[j]<min) 
    {
        min=a[j];
        index=j;
    }
}
cout<<index;
}