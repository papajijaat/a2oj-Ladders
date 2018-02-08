#include <bits/stdc++.h>

using namespace std;

int main()
{
    int r,c,rows[11]={0},cols[11]={0};
    cin>>r>>c;
    string a;
    for(int i=0;i<r;i++)
    {
        cin>>a;
        for(int j=0;j<c;j++)
        {
            if (a[j] == 'S')
            {
                rows[i] = 1;
                cols[j] = 1;
            }
        }
    }
    int cakes(0);
    for (int i = 0; i < r; ++i)
    {
        for (int j = 0; j < c; ++j)
        {
            if (rows[i] == 0 || cols[j] == 0)
            {
                cakes += 1;
            }
        }
    }
    cout << cakes << endl;
    return 0;
}
