#include "Stack.hpp"

Stack::Stack(){
    head = nullptr;
    len = 0;
}

Stack::~Stack(){
    clear();
}

unsigned int Stack::size(){
    Node *p = head;
    while(p != nullptr){
        ;
    }
}

void Stack::push(int data){
    return;
}

int Stack::pop(){
    return 0;
}

int Stack::top(){
    return 0;
}

bool Stack::empty(){
    return true;
}

void Stack::clear(){
    Node* to_remove;
    while (head) {
        to_remove = head;
        head = head->next;
        delete to_remove;
    }
    len = 0;
    return;
}