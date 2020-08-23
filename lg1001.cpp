#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x,x1;
        cin>>x;
        if(x<=20)
        {
            if(x>10)
        {
            x1=x-10;
            cout<<x1<<" "<<10<<endl;
        }
        else
        {
            cout<<0<<" "<<x<<endl;

        }
        }
    }




}
