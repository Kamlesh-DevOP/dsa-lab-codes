#include <iostream>
#include <string>
#include "6_Stack_Linked_List.h"
using namespace std;

bool check_balance(string str);

int main()
{
    int choice;
    while (1)
    {
        cout << "\n\nMENU :\n 1. Check Balance\n 2. Exit" << endl;
        cout << "Enter choice : ";
        cin >> choice;
        
        if (choice == 2)
        {
            cout << "Exiting Program." << endl;
            break;
        }
        else if (choice == 1)
        {
            string str;
            cout << "Enter string to check balance : ";
            cin >> str;
            
            if (check_balance(str))
            {
                cout << "Balanced String" << endl;
            }
            else
            {
                cout << "Not balanced" << endl;
            }
        }
        else
        {
            cout << "Invalid Choice." << endl;
        }
    }
}

bool check_balance(string str)
{
    Stack s;
    for (char ch : str)
    {
        if (ch == '(')
        {
            s.push(ch);
        }
        else if (ch == ')')
        {
            if (s.gettop() == NULL)
            {
                return false;
            }
            s.pop();
        }
        else
        {
            return false; // Invalid input
        }
    }
    return s.gettop() == NULL;
}
