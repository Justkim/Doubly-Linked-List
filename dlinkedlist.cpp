#include "dlinkedlist.h"
#include <iostream>
using namespace std;

template <class T>
DlinkedList<T>::DlinkedList()
{

    size=0;
   head=(node<T>*)malloc(sizeof(node<T>));
   end=(node<T>*)malloc(sizeof(node<T>));
   head->next=NULL;
   head->pre=NULL;
   end->next=NULL;
   end->pre=NULL;




}
template <class T>
void DlinkedList<T>::makeNothing()
{
    head=NULL;
    end=NULL;
}


template <class T>
DlinkedList<T>::~DlinkedList()
{
   delete head;
   delete end;

}

template <class T>
T DlinkedList<T>::front()
{


    if(empty())
    {
        cout<<"your linkedLIst is empty."<<endl;
        return false;
    }
    return head->data;
}
template <class T>
T DlinkedList<T>::back()
{
    if(empty())
    {
        cout<<"your linkedLIst is empty."<<endl;
        return 0;
    }
    return end->data;
}

template <class T>
void DlinkedList<T>::push_front (T elem)
{

    if(size==0)
     {

        node <T> *p=(node<T>*)malloc(sizeof(node<T>));
        p->data=elem;
        p->next=NULL;
        p->pre=NULL;
        head=p;
        end=head;


     }
    else
    {
    node <T> *p=(node<T>*)malloc(sizeof(node<T>));
    p->data=elem;
    p->next=head;
    p->pre=NULL;
    head->pre=p;
    head=p;}
    size++;

}
template <class T>
void DlinkedList<T>::push_back (T elem)
{


    if(size==0)
    {

        node <T> *p=(node<T>*)malloc(sizeof(node<T>));
        p->data=elem;
        head=p;
        end=head;


    }
    else if(size==1){

    node <T> * p=(node<T>*)malloc(sizeof(node<T>));
    head->next=p;
    p->data=elem;
    p->next=NULL;
    p->pre=end;
    end=p;
    }
    else
    {
        node <T> * p=(node<T>*)malloc(sizeof(node<T>));

        p->data=elem;
        p->next=NULL;
        p->pre=end;
        end->next=p;
        end=p;

    }



    size++;

}
template <class T>
bool DlinkedList<T>::empty()
{
    if(head==NULL)
    {

        return true;
    }
    return false;
}
template <class T>
int DlinkedList<T>::getSize()
{
    return size;
}
template <class T>
void DlinkedList<T>::pop_front()
{
    if(size==0)
    {
        cout<<"LIST IS EMPTY:/"<<endl;
        head=NULL;
        end=NULL;
        return;
    }
    else if(size==1)
    {


        head=NULL;
        end=NULL;
        size--;

    }
    else
    {
       node <T> *p=(node<T>*)malloc(sizeof(node<T>));
       p=head->next;
       p->pre=NULL;
       head=p;
       size--;
    }

}

template <class T>
void DlinkedList<T>::pop_back()
{
    if(size==0)
    {
        cout<<"LIST IS EMPTY:/"<<endl;
        head=NULL;
        end=NULL;
        return;
    }
    else if(size==1){
        head=NULL;
        end=NULL;
        size--;

    }
    else if(size==2)
    {

         end=head;
          end->next=NULL;
         size--;


//        head=NULL;
//        end=NULL;
//        size--;

    }
    else
    {


   //node <T>*p=(node<T>*)malloc(sizeof(node<T>));

     end=end->pre;
     end->next=NULL;
     size--;
    }




}
template <class T>
void DlinkedList<T>::print()
{
    node<T> *p=(node<T>*)malloc(sizeof(node<T>));;
    p=head;
    cout<<"List members are: ";
    while(!(p==NULL))
    {
        cout<<p->data<<"\t";
        p=p->next;
    }

    cout<<endl;
}



template class DlinkedList<int>;




