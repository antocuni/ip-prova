#include <iostream>
#include <assert.h>
#include "SimpleList.h"

/* The goal of this test is to implement the following:

   1. Define the type SimpleList

   2. Define a function SimpleList_new() which create a new empty list

   3. Define a function SimpleList_length() which return the number of items
      in the list

   4. Define a function SimpleList_delete() which deletes a list
*/



int main() {
    SimpleList *lst = SimpleList_new();
    assert(SimpleList_length(lst) == 0); // check that the length of an empty list is 0
    SimpleList_delete(lst);
    std::cout << "Test01 OK\n";
}
