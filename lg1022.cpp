#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin>>test;
    for(int i=1;i<=test;i++)
    {
      double r,l,wh,sp,rec,pi;
       pi=2*acos(0.0);
      scanf("%lf", &r);
       rec=(r+r)*(r+r);
       sp=pi*r*r;
       wh=rec-sp;


      printf("Case %d: %.2lf\n",i,wh);


    }
}


