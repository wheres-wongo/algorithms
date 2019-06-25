#include "LinkedList.hpp"
#include<iostream>

LinkedList::LinkedList() {
  len = 0;
  head = tail = nullptr;
}

LinkedList::~LinkedList() {
  std::cout << "hi" << std::endl;
  clear();
  std::cout << "hi" << std::endl;
}

unsigned int LinkedList::length() {
  Node *p = head;
  while(p != tail){
    p = p -> next;
    std::cout << "hi" << std::endl;
    len++;
  }
  p = p -> next;
  len++;
  return len;
}

void LinkedList::push_front(int d) {
  return;
}

int LinkedList::pop_front() {
  return 0;
}

int LinkedList::index(int data) {
  return 0;
}

void LinkedList::push_back(int d) {
  return;
}

int LinkedList::pop_back() {
  Node *p = tail;

  tail= tail -> prev;
  p -> prev = nullptr;
  p -> next  = nullptr;
  int temp = p -> data;

  delete p;
  
  tail -> next = head;
  head -> prev = tail;
  
  return temp;
}

int LinkedList::at(int idx) {
  return 0;
}

int LinkedList::set(int idx, int d) {
  return 0;
}

void LinkedList::push(int d, int idx) {
  return;
}

int LinkedList::pop(int idx) {
  return 0;
}

void LinkedList::clear() {
  Node* to_remove;
  //++len;
  while (--len) {
    to_remove = head;
    head = head->next;

    delete to_remove;
    len--;
    
    head -> prev = tail;
    tail -> next = head;
  }
  head = nullptr;
  tail = nullptr;
  len = 0;
}

void LinkedList::remove(int d) {
  return;
}

void LinkedList::reverse() {
  return;
}

void LinkedList::print(std::ostream& oss) {
  Node* temp = head;
  while (temp) {
    oss << temp->data << ", ";
    temp = temp->next;
  }
  oss << std::endl;
  return;
}