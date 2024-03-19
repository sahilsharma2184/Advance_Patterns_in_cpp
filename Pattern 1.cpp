/**/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    cout<<"Enter number of rows"<<endl;
    int n;
    cin>>n;
    char ch;
    cout<<endl;
    for(int i=1;i<=n;i++)
    { 
        for(int j=1;j<=n;j++)
        {
            ch='A'+i+j-2;
            cout<<ch<<" ";
        }
        cout<<endl;
    }
    return 0;
}


