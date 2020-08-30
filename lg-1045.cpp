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
double ar[1000007];
int main()
{
    int test;
    cin>>test;
  for(long j=1;j<=1000000;j++)
    ar[j]=ar[j-1]+log(j);
    forcase
    {
        long n,b;
        cin>>n>>b;
        long l=ar[n]/log(b)+1;
         case;
        printl;


    }
    return 0;
}

