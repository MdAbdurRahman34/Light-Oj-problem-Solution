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
     int n,m,d;
       cin>>n>>m;
       int a[n],j,l,w,y,z,k;
       for(j=0;j<n;j++)
       {
           cin>>a[j];

       }

for( k=0;k<m;k++)
{
    char s[10];
     scanf("%s", s);
   if(s[0]=='S')
   {

       cin>>d;
       for(l=0;l<n;l++)
        a[l]=a[l]+d;

   }
   else if(s[0]=='M')
   {

       cin>>d;
       for( l=0;l<n;l++)
        a[l]=a[l]*d;

   }
   else if(s[0]=='D')
   {

       cin>>d;
       for(l=0;l<n;l++)
        a[l]=a[l]/d;

   }
  else  if(s[0]=='R')
   {
          for(l=0,j=n-1; l<n/2; l++, j--)
                {
                   swap(a[l],a[j]);
                }

   }
  else if(s[0]=='P')
   {
       cin>>y>>z;
      swap(a[y],a[z]);

   }


}
printf("Case %d:\n", i);
        for(l=0; l<n; l++)
            printf("%d ", a[l]);
        printf("%d\n", a[l]);

   }
    return 0;
}

