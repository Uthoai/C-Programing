#include<bits/stdc++.h>
using namespace std;

class Reverse
{
private:
    string stg;
public:
    Reverse(string s){
        stg = s;
    }

    int reverseString(){
        for(int i= stg.length()-1 ;i>=0;i--)
        {
            cout<<stg[i]; 
        }
    }
};

int main(){
    string stringLine;
    cout<<"Enter String: ";
    cin>>stringLine;

    Reverse obj(stringLine);
    obj.reverseString();
    return 0;
}


