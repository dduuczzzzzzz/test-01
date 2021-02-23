#include <iostream>

using namespace std;

char checkbomb(char a[][], int i, int j)
{
    int num=0;
    if(a[i][j]==*) return *;
    if(a[i][j]!= *)
    {
        while(a[i][j+1]==* || a[i][j-1]==* || a[i-1][j]==* || a[i+1][j]==* || a[i+1][j+1]==* || a[i-1][j+1]==* || a[i-1][j-1]==* || a[i+1][j-1]==*)
        {
            num++;
        }
    }
    return num+48;
}

int main()
{
    int m,n;
    cin >> m >> n;
    char a[m][n];
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin >> a[i][j];
        }
    }
    int check=0;

    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            checkbomb(a,i,j);
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}
