// Hollow ButterFly Patterns

//      *      *
//      **    **
//      * *  * *
//      *  **  *
//      *  **  *
//      * *  * *
//      **    **
//      *      *

#include<bits/stdc++.h>
using namespace std;

int main(){
    int size;
    cout<<"Enter ButterFly Size: ";
    cin>>size;

    for (int i = 1; i <= size; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if (j>1 && j<i)
            {
                cout<<" ";
            } else
            {
                cout<<"*";
            }
        }

        for (int j = 1; j <= 2*(size-i); j++)
        {
            cout<<" ";
        }

        for (int j = 1; j <= i; j++)
        {
            if (j>1 && j<i)
            {
                cout<<" ";
            } else
            {
                cout<<"*";
            }
        }
        cout<<endl;
    }

    for (int i = size; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            if (j>1 && j<i)
            {
                cout<<" ";
            } else
            {
                cout<<"*";
            }
        }

        for (int j = 1; j <= 2*(size-i); j++)
        {
            cout<<" ";
        }

        for (int j = 1; j <= i; j++)
        {
            if (j>1 && j<i)
            {
                cout<<" ";
            } else
            {
                cout<<"*";
            }
        }
        cout<<endl;
    }

    return 0;
}
