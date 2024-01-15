// Fibonacci Series with Loop
// 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, ...

#include<bits/stdc++.h>
using namespace std;

int fibo(int n){                
    long long int first = 0,second = 1,next;  //"long long" use if you want Fibonacci Series greater then 47 series.

    if (n>=1)
    {
        cout<<first<<" ";
    }
    if (n>=2)
    {
        cout<<second<<" ";
    }

    for (int i = 3; i <= n; i++)
    {
        next = first + second;
        cout<<next<<" ";
        first = second;
        second = next;
    }
}

int main(){
    int n;
    cout<<"Enter number for get Fibonacci Series: ";
    cin>>n;
    fibo(n);
    return 0;
}