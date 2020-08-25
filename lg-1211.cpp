#include<bits/stdc++.h>
using namespace std;
#define case cout<<"Case "<<i<<": "
//#define max(a,b,c)=max((a,b),c)
//#define min(a,b,c)=min((a,b),c)
int main()
{
    int test;
    cin>>test;
    for(int i=1;i<=test;i++)
    {
        int x,y,z,a=0,b=0,c=0,x1,y1,z1,a1=1000000,b1=1000000,c1=1000000;
        int n;
        cin>>n;
        for(int j=0;j<n;j++)
        {
            cin>>x>>y>>z>>x1>>y1>>z1;
            a=max(a,x);
            b=max(b,y);
            c=max(c,z);
            a1=min(a1,x1);
            b1=min(b1,y1);
           c1=min(c1,z1);
        }
        a=a1-a;
        b=b1-b;
        c=c1-c;
        case;
        if(a>=0&&b>=0&&c>=0)
       cout<<a*b*c<<endl;
       else
        cout<<0<<endl;

    }


    return 0;
}
