#include <iostream>
#include <assert.h>
#include "SimpleList.h"

// goal of the test: implement SimpleList_push_back and SimpleList_print

int main() {
    SimpleList *lst = SimpleList_new();

    SimpleList_push_back(lst, 123);
    SimpleList_push_back(lst, 456);
    assert(SimpleList_length(lst) == 2);

    std::cout << "Calling SimpleList_print...\n";
    SimpleList_print(lst);
    std::cout << "Done!\n\n";

    SimpleList_delete(lst);
    std::cout << "test02 completed. Check that it printed the following\n";
    std::cout << "    123\n";
    std::cout << "    456\n";
}
