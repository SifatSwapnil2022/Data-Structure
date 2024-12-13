#include <iostream>
using namespace std;

struct Node {
  int item;
  struct Node *next;
};

void enq(struct Node * &front, struct Node * &rear, int data) {
  struct Node *newNode = new Node;
  newNode -> next = NULL;
  newNode -> item = data;

  if (front == NULL && rear == NULL) {
    front = rear = newNode;
    return;
  }

  rear -> next = newNode;
  rear = newNode;
}

void deq(struct Node * &front, struct Node * &back) {
  struct Node * temp;

  if (front && front -> next != NULL) {
    temp = front;
    front = front -> next;
    delete(temp);
  }


  else if (front == back) {
    delete(front);
    back = NULL;
  }


  else {
    cout << "The queue is empty" << endl;
  }
}

void traverse(struct Node * &head) {
  while (head != NULL) {
    cout << head -> item << endl;
    head = head -> next;
  }
}

void traverseSorted(struct Node * &head, struct Node * &rear) {
  struct Node * nodeNext = head -> next;
  struct Node * prevNode = rear;

  while (head != prevNode -> next){
    if (head -> item < 0) {

      nodeNext = nodeNext -> next;

      deq(head, rear);
    }
    else {

      nodeNext = nodeNext -> next;

      enq(head, rear, head -> item);
      deq(head, rear);
    }
  }
}


int main () {

  struct Node *front = NULL;
  struct Node *rear = NULL;


  enq(front, rear, 1);
  enq(front, rear, -2);
  enq(front, rear, 3);
  enq(front, rear, -4);
  enq(front, rear, 5);
  traverseSorted(front, rear);
  traverse(front);
  return 0;
}

