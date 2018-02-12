#include<bits/stdc++.h>

using namespace std;
int main()
{
    int a,b,awin(0),draw(0),bwin(0);
    cin>>a>>b;
    for(int i=1;i<=6;i++)
    {
        if(abs(i-a)<abs(i-b)) awin++;
        else if(abs(i-a)==abs(i-b)) draw++;
        else bwin++;
    }
    cout<<awin<<" "<<draw<<" "<<bwin<<endl;
    return 0;
}
