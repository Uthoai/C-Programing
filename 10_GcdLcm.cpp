// GCD LCM
#include<bits/stdc++.h>
using namespace std;

class GcdLcm{
private:
    int m,n;
public:
    GcdLcm(int a,int b){
        m = a;
        n = b;
    }

    int findGCD(int a, int b) {
        if (b == 0)
        return a;
        return findGCD(b, a % b);
    }

    void getGCDLCM(){
        int gcd = findGCD(m,n);
        int lcm = (m*n)/gcd;

        cout<<"GCD: "<<gcd<<endl;
        cout<<"LCM: "<<lcm<<endl;
    }
};

int main(){
    int num1,num2;
    cout<<"Enter Two digit for GCD & LCM: ";
    cin>>num1;
    cin>>num2;
    GcdLcm obj(num1,num2);
    obj.getGCDLCM();
    return 0;
}
