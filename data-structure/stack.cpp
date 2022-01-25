#include <cstdio>
#include <cstdlib>
#include <iostream>

using namespace std;

const int MAX_STACK_SIZE = 50;
class Stack
{
    int top;
    int stack[MAX_STACK_SIZE];

    public: 
        Stack(){top=-1;}
        bool isEmpty(){return top==-1;}
        bool isFull(){return top==MAX_STACK_SIZE-1;}
        void push(int element){
            if(isFull()){
                cout<<"Stack is Full Now!"<<"\n";
                return;
            }
            
            stack[++top]=element;
        }
        int pop(){
           if(isEmpty()){cout<<"nothing to return!\n";
                        exit(1);
           }
           
            return stack[top--];
        }
        void display(){
            cout<<"[ ";
            for(int i=0;i<=top;i++){
                cout<<stack[i]<<" ";
            }
            cout<<"]";

            cout<<"\n";
        }
};



int main()
{
    Stack s=Stack();

    s.push(4);
    s.push(5);
    s.push(6);
    s.display();
    
     s.pop();
     s.pop();
     s.display();
     s.pop();
     
     int a = s.pop();
     cout<<a;

    s.display();
    return 0;
}

