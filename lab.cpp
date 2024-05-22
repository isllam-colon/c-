#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
#include <math.h>
#include <algorithm>
#include <queue>
#include <deque>
#include <map>
#include <set>
#include <vector>
#include <stack>
#include <cstring>
using namespace std;
struct node {
    int data;
    node* next;
};

void addNode(node* &head, int n) {
    node* newNode = new node;
    newNode->data = n;
    newNode->next = NULL;

    if (head == NULL) {
        // If the list is empty, the new node becomes the head
        head = newNode;
    } else {
        node* cur = head;
        while (cur) {
            if (cur->next == NULL) {
                cur->next = newNode;
                return;
            }
            cur = cur->next;
        }
    }
}

// Function to display the data in the linked list
void displayList(node* head) {
    node* cur = head;
    while (cur != nullptr) {
        cout << cur->data << " ";
        cur = cur->next;
    }
    cout << endl;
}

int main() {
    node* head = nullptr; // Initialize an empty linked list

    // Add the first node
    addNode(head, 1);

    // Add the second node
    addNode(head, 88);

    // Add the third node
    addNode(head, 3);

    // Display the data in the linked list
    displayList(head);

    return 0;
}
