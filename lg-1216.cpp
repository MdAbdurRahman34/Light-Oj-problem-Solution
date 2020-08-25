#include<bits/stdc++.h>
using namespace std;
#define pi acos(-1)
#define printv   printf("%lf\n",v)
#define case cout<<"Case "<<i<<": "
#define max(a,b,c)=max((a,b),c)
#define min(a,b,c)=min((a,b),c)
int main()
{
    int test;
    cin>>test;
    for(int i=1;i<=test;i++)
    {
       int r1,r2,h,p;
        double r3,v;
       cin>>r1>>r2>>h>>p;
         r3=r1-(r1-r2)*(double(h-p)/h);
         v=(r3*r3+r2*r2+r2*r3)*p*pi/3;
       case;
         printv;
    }


    return 0;
}
