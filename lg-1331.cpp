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
        double r1,r2,r3,a,b,c,hp,area,tb;
        cin>>r1>>r2>>r3;
        a=r1+r2;
        b=r2+r3;
        c=r3+r1;
        hp=(a+b+c)/2;//s=(a+b+c)(perimeter); hp=s/2
        area=sqrt(hp*(hp-a)*(hp-b)*(hp-c));
       tb=0.5*r1*r1*acos((a*a+c*c-b*b)/(2*a*c))+0.5*r2*r2*acos((a*a+b*b-c*c)/(2*a*b))+0.5*r3*r3*acos((b*b+c*c-a*a)/(2*b*c));
       double d=area-tb;
       case;
       printd;


    }
    return 0;
}
