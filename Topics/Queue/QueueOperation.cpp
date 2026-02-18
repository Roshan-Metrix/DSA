#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* next;
    Node(int value){
        this -> data = value;
        this -> next = nullptr;
    }
};

class Queue{
    private:
        Node* front;
        Node* rear;
    public:
        Queue(){
            front = nullptr;
            rear = nullptr;
        }
        void enqueue(int value){
            Node* newNode = new Node(value);
            if(isEmpty()){
                front = newNode;
            }
            newNode -> next = front;
            front = newNode;
        }
        void dequeue(){

        }
        bool isEmpty(){
            return (front == NULL);
        }
        void displayQueue(){
            Node
        }
};

int main(){
    Queue q;
    cout << q.isEmpty();
    return 0;
}