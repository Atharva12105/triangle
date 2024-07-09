#include<iostream>
using namespace std;
int main()
{
    int r;
    int c;
    int i;
    int j;
    cout<<"Enter number of rows:"<<endl;
    cin>>r;
    for(i=1;i<=r;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<"\n";
    }

}