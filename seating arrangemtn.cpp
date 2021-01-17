#include<bits/stdc++.h>
using namespace std;
int main()
{
   long long t,s,p;   //t=no. of test cases  
   cin>>t;         //s=seat no., p=corresponding seat no.
   while(t--)   
  {
     cin>>s;
     p=s%12;     //when to use modulo see below
     if(p==1)
     {
         cout<<s+11<<" WS"<<endl;
     }
     else if(p==2)
     {
         cout<<s+9<<" MS"<<endl;
     }
      else if(p==3)
     {
         cout<<s+7<<" AS"<<endl;
     }
     else if(p==4)
     {
         cout<<s+5<<" AS"<<endl;
     }
     else if(p==5)
     {
         cout<<s+3<<" MS"<<endl;
     }
     else if(p==6)
     {
         cout<<s+1<<" WS"<<endl;
     }
     else if(p==7)
     {
         cout<<s-1<<" WS"<<endl;
     }
     else if(p==8)
     {
         cout<<s-3<<" MS"<<endl;
     }
     else if(p==9)
     {
         cout<<s-5<<" AS"<<endl;
     }
     else if(p==10)
     {
         cout<<s-7<<" AS"<<endl;
     }
     else if(p==11)
     {
         cout<<s-9<<" MS"<<endl;
     }
     else{
         cout<<s-11<<" WS"<<endl;
     }
  }                          //code explaination below
}