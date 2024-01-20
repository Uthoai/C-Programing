#include<bits/stdc++.h>
using namespace std;

class Reverse
{
private:
    string number;
    int reverse;
public:
    Reverse(string n){
        number = n;
    }

    void GetReverseValue(){
        cout<<"Reverse Value: ";
        for (int i = number.length()-1; i>= 0; i--)
        {
            char ch = number[i];
            reverse = ch - 48;
            if (reverse>=0 && reverse<=9)
            {
                cout<<reverse;
            }
        }
    }
};

int main(){
    string number;
    cout<<"Enter Longest Number for Reverse: ";
    cin>>number;
    Reverse obj(number);
    obj.GetReverseValue();
    return 0;
}