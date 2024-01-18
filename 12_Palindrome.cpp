// Palindrome

#include<bits/stdc++.h>
using namespace std;

class Palindrome
{
private:
    int number,reverse,original;
public:
    Palindrome(int n){
        number = n;
        original = n;
    }

    void checkPalindrome(){
        reverse = 0;
        while (number != 0)
        {
            int r = number % 10;
            reverse = (reverse*10)+ r;
            number = number / 10;
        }
        if (reverse == original)
        {
            cout<<original<<" is Palindrome.";
        } else
        {
            cout<<original<<" is not Palindrome.";
        }
    }
};

int main(){
    int num;
    cout<<"Enter number to check is Palindrome or not: ";
    cin>>num;
    Palindrome obj(num);
    obj.checkPalindrome();
    return 0;
}