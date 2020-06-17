#include <iostream>
#include "linkedList.hpp"

linkedList::linkedList(/* args */){
    this->head = NULL;
    this->tail = NULL;
}

linkedList::~linkedList() {
    node *current_node = this->head;
    while (current_node) {
        this->head = this->head->next;
        delete current_node;
        current_node = this->head;
    }

}

void linkedList::add_node(int data) {
    node *new_node = new node();
    new_node->data = data;
    new_node->next = NULL;

    if (head == NULL) {
        this->head = new_node;
        this->tail = new_node;
    } else {
        tail->next = new_node;
        tail = tail->next;
    }
}

void linkedList::print_list() {
    node *current_node = this->head;
    while (current_node) {
        std::cout << current_node->data << " : ";
        current_node = current_node->next;
    }
    std::cout << "\n";
}
