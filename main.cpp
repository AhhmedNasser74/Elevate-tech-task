#include <iostream>
using namespace std;

void printPrimenumber(int n, int m)
{
    if(n>m)
    {
        swap(n,m);
    }

    for(int i=n+1; i<=m; i++)
    {
        int count=0;
        for(int j=1; j<=i; j++)
        {
            if(i%j==0)
            {
                count++;
            }
        }
        if(count==2)
        {
            cout<<i<<endl;
        }
    }
}
int main()
{
    int n,m;
    cin>>n>>m;

    printPrimenumber(n,m);

    return 0;
}

