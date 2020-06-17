#include <iostream>
#include "linkedList.hpp"

void run() {
    linkedList *list = new linkedList();
    list->add_node(56);
    list->add_node(57);
    list->add_node(58);
    list->add_node(59);

    list->print_list();
    delete list;
    list = NULL;
}

int main() {
    run();
    return 0;
}