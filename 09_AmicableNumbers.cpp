// AmicableNumbers
/*Amicable numbers are two different natural numbers related in such 
a way that the sum of the proper divisors of each is equal to the other number.
The smallest pair of amicable numbers is (220, 284).*/ 

#include<bits/stdc++.h>
using namespace std;

class  AmicableNumbers
{
private:
    int num1,num2;
public:
    AmicableNumbers(int m,int n){
        num1 = m;
        num2 = n;
    };

    int FactorSum(int n){
        int sum = 0;
        for (int i = 1; i <= sqrt(n); i++)
        {
            if (n % i == 0)
            {
                if (n / i != i)
                {
                    sum += i + (n / i);
                } else {
                    sum += i;
                }
            }
        }
        return sum -= n;
    }

    void checkIsAmicable(){
        int sum1 = FactorSum(num1);
        int sum2 = FactorSum(num2);

        if (num1 == sum2 && num2 == sum1)
        {
            cout<<num1<<" & "<<num2<<" is amicable number.";
        } 
        else
        {
            cout<<num1<<" & "<<num2<<" is not amicable number.";
        }
    }
};

int main(){
    int num1,num2;

    cout<<"Please Enter Digit for Check Perfect Number: ";
    cin>>num1;
    cin>>num2;

    AmicableNumbers obj(num1,num2);

    obj.checkIsAmicable();

    return 0;
}