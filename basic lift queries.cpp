#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,a=0,b=7,f;  //a=ground floor i.e lift A initial position, 
    cin>>t;                     //b=top floor i.e lift B initial position , 
    while(t--)                  //f=current floor,t=no. of test cases
    {
        cin>>f;
      if(abs(f-a)<abs(f-b))      //comparing differences
      {
          cout<<"A"<<endl;
          a=f;                 //position of lift A is updated 
      }
      else if(abs(f-a)>abs(f-b))
      {
          cout<<"B"<<endl;
          b=f;                   //position of lift B is updated
      }
      else{                      //the differences are equal 
          if(a<b)                //see note below
          {
         cout<<"A"<<endl;
         a=f;                   //position of lift A is updated              
          }
          else{
             cout<<"B"<<endl;
             b=f;                 //position of lift B is updated  
          } 
      }
    }
}