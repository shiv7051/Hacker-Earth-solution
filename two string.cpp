#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s1,s2;
        cin>>s1>>s2;
        sort(s1.begin(),s1.end()); //sorting string s1
        sort(s2.begin(),s2.end());  //sorting string s2
        if(s1==s2)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}