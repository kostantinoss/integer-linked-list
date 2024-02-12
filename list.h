
typedef struct Node Node;
typedef struct List List;

List *createList();

void append(List *list, int num);

void printList(List *list);

int get(List *list, int index);