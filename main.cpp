#include<bits/stdc++.h>


using namespace std;

int main()
{
    int x,y,x1,y1;
    cin>>x>>y>>x1>>y1;
    int r[x][y];
    int c[x1][y1];
    int result[x][y];
    for(int i = 0;i<x;i++)
    {
        for(int j = 0;j<y;j++)
        {
            cin>>r[i][j];

        }
    }
     for(int i = 0;i<x;i++)
    {
        for(int j = 0;j<y;j++)
        {
            cout<<r[i][j]<<" ";
        }
        cout<<endl;
    }
    for(int i = 0;i<x1;i++)
    {
        for(int j = 0;j<y1;j++)
        {
            cin>>c[i][j];

        }
    }
     for(int i = 0;i<x1;i++)
    {
        for(int j = 0;j<y1;j++)
        {
            cout<<c[i][j]<<" ";
        }
        cout<<endl;
    }
     for(int i = 0;i<x;i++)
    {
        for(int j = 0;j<y1;j++)
        {
            result[i][j] = 0;
            for(int k = 0;k<y;k++)
            {

                result[i][j] += r[i][k]*c[k][j];
            }
        }

    }
     for(int i = 0;i<x;i++)
    {
        for(int j = 0;j<y1;j++)
        {
            cout<<result[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
