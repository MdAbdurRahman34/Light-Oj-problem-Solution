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
int main()
{
    int test;
    cin>>test;
    for(int i=1;i<=test;i++)
    {
        int x1,y1,x2,y2,x3,y3,x4,y4,xm1,ym1;
        cin>>x1>>y1>>x2>>y2>>x3>>y3;
        xm1=(x1+x3);
        ym1=(y1+y3);
        x4=xm1-x2;
        y4=ym1-y2;
        int area=x1*y2+x2*y3+x3*y4+x4*y1-y1*x2-y2*x3-y3*x4-y4*x1;
        if(area<0)
            area=abs(area);
        area=area/2;
        case;
        cout<<x4<<" "<<y4<<" "<<area<<endl;


    }
    return 0;
}

