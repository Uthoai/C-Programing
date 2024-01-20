#include <bits/stdc++.h>
using namespace std;

class frequency{
    private:
    string number;
    int digit;
    public:
    frequency(string n){
        number = n;
    }

    void EachDigitCount(){

        int Eachdigit[10]={0};   
        for(int i=0; i<number.length(); i++){
            char ch = number[i];
            digit = ch-48;
            if(digit>=0 && digit<=9){
                Eachdigit[digit] = Eachdigit[digit]+1;
            }
        }
        for(int i=0;i<=9;i++){
            if(Eachdigit[i]!=0){
                cout<<i<<"=" <<Eachdigit[i]<<endl;
            }
        }
    }
};

int main() {
    string number;
    cout<<"Enter number count Each Digit: ";
    cin>>number;
    frequency obj(number);
    obj.EachDigitCount();
    return 0;
}
