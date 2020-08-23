#include<bits/stdc++.h>
using namespace std;
#define pi acos(-1)
int main()
{
    int test;
    cin>>test;
    for(int i=1;i<=test;i++)
    {

        double R,r;
        int n;
        cin>>R>>n;
        double x=pi/n;
        r=(R*sin(x))/(1+sin(x));
        cout<<"Case "<<i<<": ";
        cout<<fixed<<setprecision(6)<<r<<endl;

     }
}

       //printf("Case %d: %d\n",i,y);
/*akhane trigonomatric use korte hobe

sin angle between two centers of the circles

sin <thita=lombo/otibuz


*/
