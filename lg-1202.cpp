#include<bits/stdc++.h>
using namespace std;
#define case cout<<"Case "<<i<<": "
int main()
{
    int test;
    cin>>test;
    for(int i=1;i<=test;i++)
    {
        int r1,c1,r2,c2;


         cin>>r1>>c1>>r2>>c2;
         int r0=abs(r1-r2);
         int c0=abs(c1-c2);
           case;
         if(r0==c0)
         {
             cout<<1<<endl;
         }
         else if(r0%2==c0%2)
         {

              cout<<2<<endl;
         }
         else
             cout<<"impossible"<<endl;



    }

    return 0;
}

