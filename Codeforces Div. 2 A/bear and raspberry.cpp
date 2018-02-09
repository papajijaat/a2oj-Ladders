#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    int n,c,x[101];
    vector<int>m;
    cin>>n>>c;
    for(int i=0;i<n;i++)
    {
        cin>>x[i];
    }
    //if(c==0) {cout<< 0; return 0;}
    int t(0);
    //x[n+1]=200;
    for(int i=0;i<n-1;i++)
    {
        t=max(t,x[i]-x[i+1]-c);
        //m.push_back(x[i]-c-x[i+1]);
        //cout<<m[i]<<" ";
    }
    //sort(m.begin(),m.end());
    //cout<<m[m.size()-1];
    cout<<t;
}
