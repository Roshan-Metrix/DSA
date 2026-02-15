#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* next;
    Node(int val){
        this -> data = val;
        this -> next = nullptr;
    }
};

class Stack{
    private:
        Node* top;
    public:
        Stack(){
            top = nullptr;
        }
        bool isEmpty(){
            return (top == nullptr);
        }
        void push(int val){
            Node* newNode = new Node(val);
            if(isEmpty()){
                top = newNode;
                return;
            }
            newNode -> next = top;
            top = newNode;
        }
        void pop(){
            Node* temp = top;
            top = top -> next;
            delete temp;
        }
        int getTop(){
            return top -> data;
        }
        int size(){
            int count = 0;
            Node* temp = top;
            while(temp){
                count++;
                temp = temp -> next;
            }
            return count;
        }
        void display(){
            if(isEmpty()){
                cout << "Stack is Empty!" << "\n";
                return;
            }
            Node* temp = top;
            while(temp){
                cout << temp -> data << "\n";
                temp = temp -> next;
            }
        }
};

int main(){
    Stack s;
    cout << " --- Stack data ---" << endl;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.display();
    cout << "Total Stack Size : " << s.size() << endl;
    cout << "Top element : " << s.getTop() << endl;
    
    s.pop();
    cout << "--- After pop ---" << endl;
    s.display();
    cout << "Total Stack Size : " << s.size() << endl;
    cout << "Top element : " << s.getTop() << endl;
    cout << "isEmpty : "<< s.isEmpty() << endl;
    return 0;
}