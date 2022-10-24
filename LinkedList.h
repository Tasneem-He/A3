#include <iostream>
#include <vector>
using namespace std;

struct Node {
    int value;
    int numb_occurances;
    Node* next;
};
class LinkedList {
private:
    Node* head;
    Node* tail;
    Node* current;
public:
    LinkedList()
    {
        head = NULL;
        tail = NULL;
        current = NULL;
    }
    void add(int value) {
        Node* newnode = new Node();
        newnode->value = value;
        newnode->next = NULL;
        if (head == NULL)
        {
            head = newnode;
            tail = newnode;
            current = newnode;
        }
        else
        {
            tail->next = newnode;
            tail = tail->next;
        }



    }
    void deleteNode(int value) {
        Node* newNode = head;
        if (newNode != NULL && newNode->value == value) {
            head = newNode->next;
            delete newNode;
            return;
        }
        else
        {
            Node* current = head;
            while (newNode != NULL && newNode->value != value)
            {
                current = newNode;
                newNode = newNode->next;
            }
            if (!newNode)
            {
                cout << "Value not found" << endl;
                return;
            }

            current->next = newNode->next;
            delete newNode;
        }
    }

    void print() {
        Node* newNode = head;
        while (newNode != NULL)
        {
            cout << newNode->value << " " << endl;
            newNode = newNode->next;
        }
        cout << endl;
    }
    Node function( vector<int> v) {
        
        this->add(v.at(0));
        
        for (int j = 1; j < v.size(); j++) {
            this->add(v.at(j));
            for (int k = 0; k != v.size(); k++) {
                if (v.at(j) == v.at(k)) {
                    (this->current->numb_occurances)++;
                }
                else
                    continue;
            }
            cout << "the number of occurances for " << current->value << " is " << this->current->numb_occurances << endl;
            current = current->next;
        }
        cout << "the number of occurances for " << current->value << " is " << ++current->numb_occurances << endl;

        return *head;
    }

    int sum() {
        Node* newNode = head;
        int sum = 0;
        while (newNode != NULL)
        {
            sum += newNode->value;
            newNode = newNode->next;
        }
        cout << endl;
        return sum;
    }

};
#pragma once
