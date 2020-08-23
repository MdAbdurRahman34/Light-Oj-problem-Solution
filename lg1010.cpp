#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test,t=1;
    cin>>test;
   for(int i=1;i<=test;i++)
    {
       int m,n,ans,x,mn;
        cin>>m>>n;
        mn=m*n;
        if(m==1&&n==1)
          ans=mn;
       else if(m==2 || n==2)
        {
            if(m==2) x = n;
            else     x = m;
            if(x%4 == 1)      ans = x+1;
            else if(x%4 == 2) ans = x+2;
            else if(x%4 == 3) ans = x+1;
            else if(x%4 == 0) ans = x;
        }
        else if(mn%2 == 0) ans = mn/2;
        else ans = (mn/2)+1;
        cout<<"Case :"<<i<<": "<<ans<<endl;


    }

}
/*





#include <stdio.h>
int main()
{
    int tst, i;
    int m , n, mn, ans, x;
    scanf("%d", &tst);
    for(i=1; i<=tst; i++)
    {
        scanf("%d%d", &m, &n);
        mn = m * n;
        if(m==1 || n==1)    ans = mn;
        else if(m==2 || n==2)
        {
            if(m==2) x = n;
            else     x = m;
            if(x%4 == 1)      ans = x+1;
            else if(x%4 == 2) ans = x+2;
            else if(x%4 == 3) ans = x+1;
            else if(x%4 == 0) ans = x;
        }
        else if(mn%2 == 0) ans = mn/2;
        else ans = (mn/2)+1;
        printf("Case %d: %d\n", i, ans);
    }
    return 0;
}












int m,n,ans;
        cin>> m>>n;
        ans=m*n;
        if(m==1&&n==1)
            cout<<ans;
        else if(m==2||n==2)
        {
            int x;
            if(m==2)
                 x=n;
            else
                x=m;

            if(x%4==1)
            {
                ans=x+1;
            }
            else if(x%4==2)
            {
                ans=x+2;

            }
             else if(x%4==3)
            {
                ans=x+3;

            }
             else if(x%4==0)
            {
                ans=x;

            }

        }
      else if(m%2==0)
        ans=ans/2;
      else
        ans=ans/2+1;


        cout<<"Case "<<t++<<": "<<ans<<endl;








*/
