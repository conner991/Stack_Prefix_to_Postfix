/*------------------------------------------------------------------------------------
FILE NAME:		   Stack.cpp

DESCRIPTION:	   Specification file for the Stack class

USAGE:			   

COMPILER:		   GNU g++ compiler on Linux

NOTES:              

MODIFICATION HISTORY:

Author				              Date			   Version
---------------                 ----------		-------------
Conner Fissell		            02-14-2020		1.0 - Started building basic outline 
------------------------------------------------------------------------------------*/
#include "Node.h"

template <class DT>
class Stack
{
    private:
        DT item;                                            // Data item in node
        Node<DT> *top;                                      // Pointer to the stack top
        Node<DT> *headPtr;                                  // Pointer to the first node
    public:
        Stack();                                            // Creates an empty stack
        
        Stack(const Stack<DT> &stack2);                     // Initializes the stack to be equivalent 
                                                            // to the other stack object parameter 
        
        Stack<DT>& operator = (const Stack<DT> &stack2);    // Sets the stack to be eq to the other stack object 
                                                            // parameter and returns a ref to the modified stack
        
        ~Stack();                                           // Deallocates the memory used to store the stack
        
        push(const DT &newDataItem);
            // Requirements: Stack is not full
            // Results: Inserts newDataItem onto the top of stack
        DT peek();
            // Requirements: Stack is not empty
            // Results: Returns a copy of the value of the most recently added (top) data item from the stack
        void pop();
            // Requirements: Stack is not empty
            // Results: Removes the most recently added (top) data item from the stack
        void clear();
            // Requirements: None 
            // Results: Removes all the data items in the stack
        bool isEmpty() const;
            // Requirements: None
            // Results: Returns true if the stack is empty, otherwise returns false
        bool isFull() const;
            // Requirements: None
            // Results: Returns true if the stack is full, Otherwise returns false
        




};
