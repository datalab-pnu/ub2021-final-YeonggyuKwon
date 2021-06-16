#ifndef EMPLOYEE_H_INCLUDED
#define EMPLOYEE_H_INCLUDED
typedef struct employee{
    char name[20];
    int score;
    struct employee *next;
}empNode;

typedef struct list{
    empNode* head;
    empNode* tail;
}empList;


#endif // EMPLOYEE_H_INCLUDED
