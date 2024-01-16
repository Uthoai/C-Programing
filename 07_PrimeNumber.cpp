// Prime Number

#include<bits/stdc++.h>
using namespace std;

class Prime
{
private:
    int number;
public:
    Prime(int n){
        number = n;
    }

    void prime(){
        if (number <= 1)
        {
            cout<<number<<" is not prime";
            return;
        }
        
        for (int i = 2; i <= sqrt(number); i++)
        {
            if (number % i == 0)
            {
                cout<<number<<" is not Prime Number.";
                return;
            }
        }
        cout<<number<<" is Prime Number.";
    }
};

int main(){
    int n;
    cout<<"Enter Number to check is Prime or not: ";
    cin>>n;
    Prime obj(n);
    obj.prime();
    return 0;
}
