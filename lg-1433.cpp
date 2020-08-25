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
       int ox,oy,ax,ay,bx,by;
       double oa,ob,ab,r,ang;
       cin>>ox>>oy>>ax>>ay>>bx>>by;
       oa=sqrt(pow((ox-ax),2)+pow((oy-ay),2));
       ob=sqrt(pow((ox-bx),2)+pow((oy-by),2));
       ab=sqrt(pow((ax-bx),2)+pow((ay-by),2));
       r=oa;//oa==ob==r
       ang=acos((oa*oa+ob*ob-ab*ab)/(2*oa*ob));
       double d=r*ang;
       case;
       printd;

    }
    return 0;
}
