#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    int m1[a][b], m2[b][c];
    for(int i=0; i<a; i++)
    {
        for(int j=0; j<b; j++){
            cin >> m1[i][j];
        }
    }
    for(int i=0; i<b; i++)
    {
        for(int j=0; j<c; j++){
            cin >> m2[i][j];
        }
    }
    for(int i=0; i<a; i++)
    {
        for(int j=0; j<b; j++)
        {
            int sum=0;
            for(int k=0; k<c; k++)
            {
                sum+=m1[i][k]*m2[k][j];
            }
            cout<<sum<<" ";
        }
        cout<<endl;

    }

    return 0;
}