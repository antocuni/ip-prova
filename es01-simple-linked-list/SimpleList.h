struct Cell {
    int value;
    Cell *next;
};

struct SimpleList {
    Cell *head;
};

// function declarations

// test01
SimpleList *SimpleList_new();
int SimpleList_length(SimpleList *l);
void SimpleList_delete(SimpleList *l);

// test02
void SimpleList_push_back(SimpleList *l, int value);
void SimpleList_print(SimpleList *l);
