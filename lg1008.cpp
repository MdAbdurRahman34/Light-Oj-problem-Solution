#include<bits/stdc++.h>
using namespace std;
int main()
{
long long t,i=1;
cin>>t;
while(t--)
{
  long long x;
    cin>>x;
    long long ceilnum=ceil(sqrt(x));
   long long x1=ceilnum*ceilnum-x;
   long long col=0,row=0;
    if(x1<ceilnum)
    {
        col=ceilnum;
        row=x1+1;

    }
    else{
        row=ceilnum;
        col=x-((ceilnum-1)*(ceilnum-1));

    }
    if(ceilnum%2==0)
    {
        swap(row,col);
    }
  cout<<"Case "<<i++<<" : "<<row<<"  "<<col<<endl;



}


}
