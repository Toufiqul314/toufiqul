#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n[3],sum;
    for(int i=0;i<3;i++)
        cin>>n[i];
    sort(n,n+3);
    sum=n[1];
    sum=abs(sum-n[0])+abs(sum-n[2]);
    cout<<sum<<endl;
    return 0;
}
