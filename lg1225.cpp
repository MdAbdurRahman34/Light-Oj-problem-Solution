#include<bits/stdc++.h>
using namespace std;
#define pi acos(-1)
#define printfl   printf("%f\n",f)
#define printd   printf("%lf\n",d)
#define printi   printf("%d\n",p)
#define printl   printf("%ld\n",l)
#define printll   printf("%lld\n",ll)
#define case cout<<"Case "<<i<<": "
#define forcase   for(int i=1;i<=test;i++)
#define max3(a,b,c) max((a,b),c)
#define min3(a,b,c) min((a,b),c)
#define newl printf("\n")
#define printd1d2 printf("%lf %lf\n",d1, d2)
int main()
{

    int test;
   cin>>test;

    forcase
    {
     long long int n,s1=0,s2=0;
     cin>>n;
     s1=n;
     while(n>0)
     {
         int r=n%10;
          s2=r+s2*10;
         n=n/10;


     }
     case;
  if(s1==s2)
  {
      cout<<"Yes"<<endl;
  }
  else
    cout<<"No"<<endl;

   }
    return 0;
}

