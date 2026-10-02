#include <bits/stdc++.h>
using namespace std;

int main()
{
    // printing each word

    char z[12];

    cout<<"Enter Char : ";
    cin.getline(z,12);

    for (char ch : z)
    {
        cout << ch <<" ";
    }
    cout << endl;

    return 0;
}