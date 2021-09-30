#include <iostream>
using namespace std;

void addition(int l, int m, int n, int p, int m1[l][m], int m2[n][p])
{
    int ans_mat[l][m] = {0};
    if (l == n && m == p)
    {
        for (int i = 0; i < l; i++)
        {
            for (int j = 0; i < m; j++)
            {
                ans_mat[i][j] = m1[i][j] + m2[i][j];
            }
        }
        for (int i = 0; i < l; i++)
        {
            for (int j = 0; i < m; j++)
            {
                cout << ans_mat[i][j] << " ";
            }
            cout << endl;
        }
    }
    else
    {
        break;
    }
}
void multiplication(int m1[l][m], int m2[n][p])
{
    if (l == p)
    {
        for (int i = 0; i < a; i++)
        {
            for (int j = 0; j < b; j++)
            {
                int sum = 0;
                for (int k = 0; k < c; k++)
                {
                    sum += m1[i][k] * m2[k][j];
                }
                cout << sum << " ";
            }
            cout << endl;
        }
    }
}
int main()
{
    int l,m,n,p;
    int m1[l][m], m2[n][p];
    cin >> l >> m >> n >> p;

    for (int i = 0; i < l; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> m1[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < p; j++)
        {
            cin >> m2[i][j];
        }
    }
    for (int i = 0; i < l; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << m1[i][j] << " ";
        }
        cout << endl;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < p; j++)
        {
            cout << m2[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}