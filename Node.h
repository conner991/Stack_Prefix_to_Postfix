/*------------------------------------------------------------------------------------
FILE NAME:		   Node.h

DESCRIPTION:	   Specification file for the Node class

USAGE:  	        		   

COMPILER:		   GNU g++ compiler on Linux

NOTES:             

MODIFICATION HISTORY:

Author				             Date			    Version
---------------               ----------		 -------------
Conner Fissell		          02-13-2020		 1.0 - Set up class and Makefile. 
------------------------------------------------------------------------------------*/
#ifndef __NODE_H__
#define __NODE_H__

#include <iostream>

using namespace std;


template <class DT>
class Node
{
    private: 
        DT item;                // Node value/data item
        Node<DT> *next;         // Pointer to the next node
    
    public:
        Node();                                                         // Default Constructor
        Node(const DT &aValue);
        Node(const DT &aValue, Node<DT> *nextNodePtr);
        void setValue(const DT &aValue);
        void setNextValue(Node<DT> *nextNodePtr);
        DT getValue() const;
        Node<DT> *getNextValue() const;

};


const char PROGRAMMER_NAME[] = "Conner Fissell";

#endif