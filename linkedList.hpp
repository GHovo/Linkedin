class linkedList {
    private:
        struct node {
            int data;
            node* next;
        };

        node *head;
        node *tail;

    public:
        linkedList();
        ~linkedList();
        void add_node(int n);
        void print_list();
};
