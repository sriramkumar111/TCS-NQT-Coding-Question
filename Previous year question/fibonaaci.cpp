#include<iostream>
using namespace std;

void fib(int n)
{
    if(n<=0) return ;
    long long first=0,second=1;
    cout<<first;
    if(n>1) cout<<" "<<second<<" ";
    for(int i=2;i<n;i++)
    {
        long long next =first+second;
        cout<<next<<" ";
        first=second;
        second=next;
        
    }
    cout<<endl;
}
int main()
{

    int n;
    cin>>n;
    
    fib(n);
    return 0;
}
