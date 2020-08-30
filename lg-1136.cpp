#include<iostream>
using namespace std;
#define case cout<<"Case "<<i<<": "
int main()
{
    int test;
    long long c=0,c1=0,c2=0,ta=0,tb=0;
    cin>>test;
    for(int i=1;i<=test;i++)
    {
        long long a,b;
        cin>>a>>b;
        a=a-1;
            ta=a/3;
            c1=2*ta;
            if(a%3==2)
                c1=2*ta +1;
            tb=b/3;
            c2=2*tb;
            if(b%3==2)
                c2=2*tb +1;
                c=c2-c1;

            case;
            cout<<c<<endl;
            c=0;

    }

    return 0;
}


