#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin>>test;
    for(int i=1;i<=test;i++)
    {

      int x,y,z;
      cin>>x>>y>>z;

      if(y>x&&y>z)
        {
            int t=x;
            x=y;
            y=t;

        }
        if(z>x&&z>y)
        {
            int t=x;
            x=z;
            z=t;

        }

   if(x*x==y*y+z*z)
   {
     printf("Case %d: yes\n",i);
   }
    if(x*x!=y*y+z*z)
   {
       printf("Case %d: no\n",i);
   }
    }
}


