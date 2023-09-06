#include <iostream> 

using namespace std; 

class Node {
public:
    int Value; 
    Node* Next;
};

void printList(Node*n) {
    while (n!=NULL) {
        cout << n->Value << endl;
        n = n->Next;
    }
}

int main()
{
    Node* head = new Node(); 
    Node* second = new Node(); 
    Node* third = new Node(); 
    Node* fourth = new Node(); 
    Node* fifth = new Node(); 
    Node* six = new Node(); 

    head->Value = 5;
    head->Next = second; 
    second->Value = 6; 
    second->Next = third;
    third->Value = 7; 
    third->Next = fourth;
    fourth->Value = 8;
    fourth->Next = fifth;
    fifth->Value = 9; 
    fifth->Next = six;
    six->Value = 10; 
    six->Next = NULL;

    printList(head);

    return 0; 
}