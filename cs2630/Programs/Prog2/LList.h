//---------------------------------------------------------------------
// Name:    John W Hunter
// Project: Maintain and Manipulate a directory of companies.
// Purpose: Maintain a linked list using nodes.
//---------------------------------------------------------------------

#ifndef LLIST_H
#define LLIST_H
//#define TESTING_LLIST

#include <iostream>
#include "Company.h"
typedef Company InfoType;  // Type of info stored in list

class LList
{

public:

   // -----------------------------------------------------------------
   // Default Constructor. Initializes list pointer to NULL.
   // -----------------------------------------------------------------
   LList() { list = NULL; }

   // -----------------------------------------------------------------
   // Deconstructor. Deletes every element in the list and then list.
   // -----------------------------------------------------------------
   ~LList();

   // -----------------------------------------------------------------
   // IsEmpty method. Checks to see if the list equals NULL.
   // Returns  true if empty, false if not
   // -----------------------------------------------------------------
   bool IsEmpty() const;

   // -----------------------------------------------------------------
   // Insert method. Method to insert an item into the list.
   // * x_ptr  pointer of item to add
   // Returns  true if item is added, false if item is already in list
   // -----------------------------------------------------------------
   bool Insert( InfoType * x_ptr );

   // -----------------------------------------------------------------
   // Delete method. Method to delete an item in the list.
   // x  item to delete
   // Returns  true if item was deleted, false if item not found
   // -----------------------------------------------------------------
   bool Delete( const InfoType & x );

   // -----------------------------------------------------------------
   // Display method. Displays each element in the list, one item per 
   // line. Does not print any header.
   // & out_stream   ostream to write output to
   // -----------------------------------------------------------------
   void Display( ostream & out_stream ) const;

private:

   // -----------------------------------------------------------------
   // Node structure. 
   // -----------------------------------------------------------------
   struct Node
   {
      Node(InfoType * x, Node * p = NULL) { infoPtr = x;  next = p; }
      ~Node() { delete infoPtr; }
      InfoType * infoPtr;
      Node * next;
   };

   Node * list;   // pointer to first element in list.

   // -----------------------------------------------------------------
   // Copy constructor. Unused.
   // -----------------------------------------------------------------
   LList( const LList & copyFrom );

   // -----------------------------------------------------------------
   // operator= method. Unused.
   // -----------------------------------------------------------------
   LList & operator= ( const LList & assignFrom );

}; // Class LList

#endif   // #ifndef LLIST_H