/*Pattern 2:
D
C D
B C D
A B C D*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    cout<<"Enter number of rows\n";
    int n;
    cin>>n;
    char ch;
    cout<<endl;
    for(int i=1;i<=n;i++)
    {
        ch='A'+n-i;
        for(int j=1;j<=i;j++)
        {
        cout<<ch<<" ";
        ch++;
        }
        cout<<endl;
    }
    return 0;
}
