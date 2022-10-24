// ConsoleApplication24.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include "LinkedList.h"
using namespace std;



void InsertAfter(int f, int s, vector<int>& v);

int main()
{
    int n;
    int element;
    int firstValue, secondValue;
    vector <int> v;
    vector <int> ::iterator itr;
    cout << "please enter number of integers";
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> element;
        v.push_back(element);
    }
    cout << "Enter the first value ";
    cin >> firstValue;
    cout << "Enter the second value ";
    cin >> secondValue;
    InsertAfter(firstValue, secondValue, v);

    for (itr = v.begin(); itr != v.end(); itr++) {
       cout << *itr << " " << endl;
    }

    LinkedList a;
    LinkedList b;
    cout << endl;
    a.add(1);
    a.add(2);
    cout << "The first linked list elemnts are : ";
    a.print();
    cout << "the sum of the linked list elemnts is " << a.sum() << endl;
    vector <int> v2 = {3, 2, 1};

    b.function(v2);
    cout << "The linked list created using the function is " << endl;
    b.print();
    int value;
    cout << "please enter a value to be deleted";
    cin >> value;
    b.deleteNode(value);
    cout << "The list after the deletion is : ";
    b.print();

}


void InsertAfter(int f, int s, vector<int>& v)
{
    vector<int>::iterator itr;
    for (int i =0; i<v.size(); i++) {
        if (v.at(i) == f)
            v.insert(v.begin() + (i+1), s);
        else
            continue;
    }

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
