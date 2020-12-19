struct Cell {
    int value;
    Cell *next;
};

struct SimpleList {
    Cell *head;
};

// function declarations
SimpleList *SimpleList_new();
int SimpleList_length(SimpleList *l);
void SimpleList_delete(SimpleList *l);
