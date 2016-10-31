#include <iostream>
#include "dlinkedlist.h"
using namespace std;



/*
 *
 *
 * author:
 * kimiya saadat & niloofar shahbaz
 *
 *
 * */
int main()
{
    int a;
    DlinkedList <int> d1;
    d1.makeNothing();

    char ch;
    cout<<"HELLO! this is a implementation of Doubly-LinkedList:) choose one of the following actions: "<<endl;
    cout<<"1.push_front 2.push_back 3.pop_front 4.pop_back 5.return first element 6.return last element 7.exit"<<endl;
    while(cin>>ch)
    {
    switch(ch)
    {

    case '1':


        cout<<"enter a number"<<endl;
        cin>>a;
        d1.push_front(a);
        break;

    case '2':
        cout<<"enter a number"<<endl;
        cin>>a;
        d1.push_back(a);
        break;

    case '3':
        d1.pop_front();
        break;
    case '4':
        d1.pop_back();
        break;
    case '5':
        if(!(d1.front()==false))
        {

        cout<<"\tfirst elemnt is  "<<d1.front()<<endl;

        }
          break;
    case '6':
        if(!(d1.front()==false))
        {
        cout<<"\tlast element is  "<<d1.back()<<endl;

        }
         break;
    case '7':
        cout<<"bye"<<endl;
        return 0;


    }
    d1.print();

}

    return 0;


}

