#pragma once

<<<<<<< HEAD:source/Linear/Stack.hpp
<<<<<<< HEAD
<<<<<<< HEAD
/** Node Class
 * These are the building blocks of the linked list.
 */
class Node {
 private:
  int data;
  Node* next;
  Node* prev;

 public:
  Node(int d) : data(d) { next = nullptr; }
  ~Node() {}

  friend class Stack;
};

=======
>>>>>>> upstream/master
=======
#include "LinkedList.hpp"
=======
#include "../LinkedList/LinkedList.hpp"
>>>>>>> upstream/master:source/Stack/Stack.hpp

>>>>>>> upstream/master
/** Stack
 * A container class that stores data using a LIFO
 * (last in, first out) scheme.
 */
class Stack {
 private:
  LinkedList* list;

 public:
  Stack();
  ~Stack();

  friend class Node;


  /** size()
   * Returns the size of the stack.
   */
  unsigned int size();

  /** push(int data)
   * Pushes a node containing the given data to the top of the stack.
   */
  void push(int data);

  /** pop()
   * Removes and returns the data at the top of the stack.
   */
  int pop();

  /** top()
   * Returns the data at the top of the stack without changing the stack.
   */
  int top();

  /** empty()
   * Returns whether or not the stack is empty.
   */
  bool empty();

  /** clear()
   * Clears the entire stack.
   */
  void clear();
};