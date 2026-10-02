#include <bits/stdc++.h>
using namespace std;

int main()
{
    char x[100];

    cout << "Enter char : ";
    cin >> x;

    cout << "sentence is : " << x << endl;



// printing whole sentence
    char y[100];

    cout << "Enter sentence : ";

    cin.ignore();       // removes leftover '\n'
    cin.getline(y, 100, '%'); //stops printing words after %

    cout << "sentence is : " << y << endl;
    return 0;

    //taking string as input
   
}