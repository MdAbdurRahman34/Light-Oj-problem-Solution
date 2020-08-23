#include<iostream>
using namespace std;
int main()
{
    int test;
    cin>>test;
    for(int i=1;i<=test;i++)
    {
        long long n,x=0,y;
        cin>>n;
      long long temp=n;
        while(n%2==0)
        {
            n=n/2;

            x=n;

        }
        cout<<"Case "<<i<<": ";
        if(x>0)
        {
            y=temp/x;

        cout<<x<<" "<<y<<endl;
        }
        else
        {
            cout<<"Impossible"<<endl;
        }





    }


    return 0;
}
