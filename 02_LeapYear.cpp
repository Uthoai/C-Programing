
// Leap Year Using Logical Operators

#include<bits/stdc++.h>
using namespace std;

int main(){
    int year;
    cout<<"Enter Year for check is Leap year or not: ";
    cin>>year;

    if ((year % 400 == 0)||(year % 4 == 0 && year % 100 != 0)) {
        cout<<year<<" is Leap Year.";
    } 
    else {
        cout<<year<<" is not Leap Year.";
    }

    return 0;
}
