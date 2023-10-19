#include <iostream>
using namespace std;

int main()
{
    int num1, num2;
    char op;
    cout << "Please enter the operation you would like to compute (e.g. 15 * 20): ";
    cin >> num1 >> op >> num2;
    
    if (op == '+') {
        cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
    }
    else if (op == '-') {
     if (num1<num2)
     cout<<" -is unrecognized operator";
     else 
        cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
    }
    else if (op == '*') {
        cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
    }
    else if (op == '/') {
        if (num2 == 0) {
            cout << num1 << "/" << num2 << " can't be computed: denominator is 0" << endl;
        }
        else {
            cout << num1 << "/" << num2 << " = " << num1 / num2 << endl;
        }
    }
    else {
        cout << op << " is unrecognized operator" << endl;
    }
    
    return 0;
}
