/*------------------------------------------------------------------------------------
FILE NAME:		   Node.cpp

DESCRIPTION:	   Implementation file for the Node class

USAGE:			   

COMPILER:		   GNU g++ compiler on Linux

NOTES:              

MODIFICATION HISTORY:

Author				              Date			   Version
---------------                 ----------		-------------
Conner Fissell		            02-08-2020		1.0 - Started building basic outline 
Conner Fissell                  02-09-2020      1.1 - Added member functions 
Conner Fissell                  02-10-2020      1.2 - Cont. adding member functions
Conner Fissell                  02-14-2020      1.3 - Updated template/class names
------------------------------------------------------------------------------------*/
#include "Node.h"

/* -----------------------------------------------------------------------------
FUNCTION:          
DESCRIPTION:       Constructor for ListNode class
RETURNS:           
NOTES:             
------------------------------------------------------------------------------- */
template <class DT>
Node<DT>::Node()
{
    next = nullptr;
}

/* -----------------------------------------------------------------------------
FUNCTION:          
DESCRIPTION:       Constructor for ListNode class
RETURNS:           
NOTES:             
------------------------------------------------------------------------------- */
template <class DT>
Node<DT>::Node(const DT &aValue)
{
    item = aValue;
    next = nullptr;
}

/* -----------------------------------------------------------------------------
FUNCTION:          
DESCRIPTION:       Constructor for LinkList class
RETURNS:           
NOTES:             
------------------------------------------------------------------------------- */
template <class DT>
Node<DT>::Node(const DT &aValue, Node<DT> *nextNodePtr)
{
    item = aValue;
    next = nextNodePtr;
}

/* -----------------------------------------------------------------------------
FUNCTION:          
DESCRIPTION:       Constructor for LinkList class
RETURNS:           
NOTES:             
------------------------------------------------------------------------------- */
template <class DT>
void Node<DT>::setValue(const DT &aValue)
{
    item = aValue;
}

/* -----------------------------------------------------------------------------
FUNCTION:          
DESCRIPTION:       Constructor for LinkList class
RETURNS:           
NOTES:             
------------------------------------------------------------------------------- */
template <class DT>
void Node<DT>::setNextValue(Node<DT> *nextNodePtr)
{
    next = nextNodePtr;
}

/* -----------------------------------------------------------------------------
FUNCTION:          
DESCRIPTION:       Constructor for LinkList class
RETURNS:           
NOTES:             
------------------------------------------------------------------------------- */
template <class DT>
DT Node<DT>::getValue() const
{
    return item;
}

/* -----------------------------------------------------------------------------
FUNCTION:          
DESCRIPTION:       Constructor for LinkList class
RETURNS:           
NOTES:             
------------------------------------------------------------------------------- */
template <class DT>
Node<DT> *Node<DT>::getNextValue() const
{
    return next;
}