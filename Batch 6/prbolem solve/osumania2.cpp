#include<iostream>
using namespace std;

int main ()
{

    int testcase;
    cin >> testcase;

    while(testcase--) {
    int x,y=4,j;
    cin>>x;
    string a[x][y];
    for(int i=0; i<x; i++)
    {
        for(int j=0; j<y; j++)
        {
            cin>>a[i][j];
        }
    }

    for(int i=x-1; i>=0; i--)
    {
        for(int j=4; j>=0; j--)
        {
               if(a[i][j][0]=='#')
               {
                   cout <<(j+1)<<"  ";
               }


        }

    }

}
}