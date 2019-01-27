#include <iostream>

using namespace std;

int num1, num2, result, op, addition, sub, tim , div;

int main()
{
    cout << "Please The First Number : ";
    cin >> num1;
    cout << "Please The second Number : ";
    cin >> num2;
    cout << "Type a Operator (addition, sub, tim or div):";
    cin >> op;

    if(op==addition) num1 + num2 = result;

    else if(op==sub)
    {
        num1 - num2 = result;
    }

    else if(op==tim) 7
    {
        num1 * num2 = result;
    }

    else if(op==div)
    {
        num1 / num2 = result;
    }


    cout << "Your answer is" << result << endl;
    }
