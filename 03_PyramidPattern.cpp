// Dynamic 2D Pyramid(Triangle) Pattern Printing Using Nested Loops

//____*         2*1-1 = 1
//___***        2*2-1 = 3
//__*****       2*3-1 = 5
//_*******      2*4-1 = 7
//*********     2*5-1 = 9

#include<bits/stdc++.h>
using namespace std;

int main(){
    int pSize;
    cout<<"Enter Pyramid Size: ";
    cin>>pSize;

    for (int i = 1; i <= pSize; i++)
    {
        for (int x = 1; x <= pSize - i; x++)
        {
            cout<<" ";
        }
        for (int y = 1; y <= 2*i-1; y++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
