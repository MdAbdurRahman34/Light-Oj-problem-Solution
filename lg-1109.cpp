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
int divisors1(int i)
{
    int ctn=1,c=0;
    for(int j=2;j<=i;j++)
    {
        while(i%j==0)
        {
            i=i/j;
            c++;

        }
      if(c)
      {
           ctn=ctn*(c+1);
      }

        c=0;

    }
    return ctn;

}
int divisor1[1010];
int order1[1010],index1=1;
int main()
{
    for(int i=1;i<=1005;i++)
    {
       divisor1[i]=divisors1(i);
    }
       for(int i=1;i<=50;i++)
   {
       for(int j=1000;j>=1;j--)
       {
           if(divisor1[j]==i)
           {
               order1[index1++]=j;
           }
       }


   }
    int test;
   cin>>test;

    forcase
    {
       int n;cin>>n;
       case;
       cout<<order1[n]<<endl;
   }
    return 0;
}

