#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin>>test;
    for(int i=1;i<=test;i++)
    {
  int x,y;
      cin>>x>>y;
      if(y>=x&&x>0)
     {
          y=4*y+19;
       printf("Case %d: %d\n",i,y);
     }
       else if(x==0)
     {

       printf("Case %d: %d\n",i,0);
     }
      else if(x==0&&y==0)
     {

       printf("Case %d: %d\n",i,0);
     }
       else if(x>y)
     {
         int t=x-y;
        y=t*4+19+x*4;
       printf("Case %d: %d\n",i,y);
     }
}
}

