#include <bits/stdc++.h>
using namespace std;

class Node{

      public:
      int data;
      Node* next;

      Node(int data){
            this->data = data;
            this->next = NULL;
      }
};


void insertAtTail(Node* &tail, int d){

      // new node create
      Node* temp = new Node(d);
      tail -> next = temp;
      tail = temp;

}


void print(Node* &head){

      Node* temp = head;

      while(temp != NULL){
            cout << temp -> data << " ";
            temp = temp -> next;
      }
      cout << endl;
}


int main(){

      //create a new node
      Node* node1 = new Node(10);
      cout << node1->data << endl;
      cout << node1->next << endl;

      // tail pointed to node1
      Node* head = node1;
      Node* tail = node1;
      print(head);

      insertAtTail(tail, 12);

      print(head);

      insertAtTail(tail, 15);
      print(head);

      return 0;
}