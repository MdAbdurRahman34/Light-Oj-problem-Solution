#include<bits/stdc++.h>
using namespace std;
#define case cout<<"Case "<<i<<": "
int main()
{
    int test;
    cin>>test;
    for(int i=1;i<=test;i++)
    {
        int n;
      cin>>n;
      int c=0;
     while(n>0)
     {
         int r=n%2;
         if(r==1)
            c++;
         n=n/2;

     }
     case;
     if(c%2==0)
     {
         cout<<"even"<<endl;
     }
     else
        cout<<"odd"<<endl;

    }

    return 0;
}

