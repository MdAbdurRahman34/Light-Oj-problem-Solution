#include<bits/stdc++.h>
using namespace std;
#define pi acos(-1)
#define printfl   printf("%f\n",f)
#define printd   printf("%lf\n",d)
#define printi   printf("%d\n",p)
#define printl   printf("%ld\n",l)
#define printll   printf("%lld\n",ll)
#define case cout<<"Case "<<i<<": "
#define max3(a,b,c) max((a,b),c)
#define min3(a,b,c) min((a,b),c)
#define newl printf("\n")
#define printd1d2 printf("%lf %lf\n",d1, d2)
int main()
{
    int test;
    cin>>test;
    for(int i=1;i<=test;i++)
    {
        double v1,v2,v3,a1,a2,t1,t2,t,d1,d2;
        cin>>v1>>v2>>v3>>a1>>a2;
        d1=pow(v1,2)/(2*a1);
        d2=pow(v2,2)/(2*a2);
        t1=v1/a1;
        t2=v2/a2;
        if(t1<t2)
            t1=t2;
        d1=d1+d2;
       d2=v3*t1;
        case;
        printd1d2;



    }
    return 0;
}


