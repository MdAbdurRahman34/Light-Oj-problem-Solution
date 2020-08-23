#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    //scanf("%d",&test);
    cin>>test;

    for(int i=1;i<=test;i++)
    {
        int n;
       // scanf("%d",&n);
       cin>>n;
        int sum=0;
        for(int j=0;j<n;j++)
        {
            int x;
            cin>>x;
            if(x>0)
            sum=sum+x;
        }
        if(sum>=0)
        {

    //printf("Case %d: %d\n",i,sum);
     cout<<"Case "<<i<<": "<<sum<<"\n";
        }
    }
}

