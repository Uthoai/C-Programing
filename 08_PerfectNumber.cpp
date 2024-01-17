#include<bits/stdc++.h>
using namespace std;

class PerfectNumber
{
private:
    int num,sum = 0;
public:
    PerfectNumber(int n){
        num = n;
    };

    void CheckPerfect(){
        
        for (int i = 1; i <= sqrt(num); i++)
        {
            if (num % i == 0)
            {
                sum += i;

                if (num / i != i)
                {
                    sum += num / i;
                }
            }
        }
        sum -= num;

        if (num == sum)
        {
            cout<<num<<" is perfect number.";
        } else {
            cout<<num<<" is not perfect number.";
        }
    }
};

int main(){
    int digit;
    cout<<"Please Enter Digit for Check Perfect Number: ";
    cin>>digit;
    PerfectNumber obj(digit);
    obj.CheckPerfect();
    return 0;
}