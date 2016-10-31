#ifndef DLINKEDLIST_H
#define DLINKEDLIST_H

template <class T>
struct node
{
    int data;
    node <T>  *pre;
    node   *next;
};

template <class T>

class DlinkedList
{
public:
    DlinkedList();
    ~DlinkedList();
    T front();
    T back();
    void push_front (T elem);
    void push_back (T elem);
    bool empty();
    int getSize();
    void pop_front();
    void pop_back();
    void print();
    void makeNothing();

private:
    node  <T>  *array;
    node  <T>  *head;
    node  <T>  *end;
    int size;


};

#endif // DLINKEDLIST_H
