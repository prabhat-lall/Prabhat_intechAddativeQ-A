#include<bits/stdc++.h>
using namespace std;
struct Node {
    int data;
    struct Node* next;
};
  

void printKthFromLast(Node* head, int k)
{
    int n = 0, i;
    Node* temp = head;
    while (temp != NULL) {
        temp = temp->next;
        n++;
    }
    if (n < k)
        return;
  
    temp = head;
    for (i = 1; i < n - k + 1; i++)
        temp = temp->next;
  
    cout << temp->data;
}

void printKthToLast(Node* head, int k) {
    Node* slow = head;
    Node* fast = head;

    // Move the fast pointer k positions ahead of the slow pointer
    for (int i = 0; i < k; i++) {
        if (fast == nullptr) {
            return;
        }
        fast = fast->next;
    }

    // Move both pointers simultaneously until the fast pointer reaches the end
    while (fast != nullptr) {
        slow = slow->next;
        fast = fast->next;
    }

    cout<<slow->data;
}
  
void push(Node** headRef, int newData)
{
    Node* newNode = new Node();
  
    newNode->data = newData;
    newNode->next = (*headRef);
    (*headRef) = newNode;
}
  
int main()
{
    struct Node* head = NULL;
    push(&head, 20);
    push(&head, 4);
    push(&head, 15);
    push(&head, 35);
      
    printKthFromLast(head, 1);
    printKthToLast(head,1);
    return 0;
}
