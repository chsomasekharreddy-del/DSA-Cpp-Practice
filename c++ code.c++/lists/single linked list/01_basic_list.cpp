#include <bits/stdc++.h>
using namespace std;
class Node // class is more benefit than struct
{
public:
    int data;
    Node *next;

public: // if i know next node it will consider this constuctor
    Node(int data1, Node *next1)
    {
        data = data1;
        next = next1;
    }

public: // if dont know next node it will conside
    Node(int data1)
    {
        data = data1;
        next = nullptr;
    }
};

int main()
{
    vector<int> arr = {2, 3, 4, 5};
    Node *y = new Node(arr[0], nullptr);
    cout << y->data << endl;

    return 0;
}