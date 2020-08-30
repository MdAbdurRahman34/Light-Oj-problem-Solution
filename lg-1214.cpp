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
      long long int b,j,l,k,n=0;
      string s;
      cin>>s>>b;
      if(s[0]=='-')
        j=1;
      else
        j=0;
        if(b<0)
            b=b*(-1);
      l=s.length();
      for(k=j;k<l;k++)
      {
          n=(s[k]-'0')+n*10;
          n=n%b;

      }
      case;
      if(n)
      {
          cout<<"not divisible"<<endl;
      }
      else
        cout<<"divisible"<<endl;


   }
    return 0;
}


