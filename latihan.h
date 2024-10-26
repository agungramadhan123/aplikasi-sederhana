#ifndef latihan_h_INCLUDED
#define latihan_h_INCLUDED
#include <iostream>
using namespace std;
typedef int infotype;
typedef struct elmlist *adr;
struct elmlist
{
    infotype info;
    adr next;
    adr prev;
};

struct list
{
    adr first,last;
};

void createList(list &l);
adr createElement(int nilai);
void insertfirst(list &l, adr p);
void insertlast(list &l, adr p);
void insertafter(list &l, adr p,adr prec);
void deletefirst(list &l,adr p);
void deletelast(list &l,adr p);
void deleteafter(list &l, adr p,adr prec);
void printlist(list &l);



// buat list
void createList(list &l)
{
    l.first = NULL;  
    l.last=NULL; 
}

adr createElement(int value) {
    adr nilaibaru = new elmlist;  
    nilaibaru->info = value;    
    nilaibaru->next = NULL; 
    nilaibaru->prev=NULL;     
    return nilaibaru;
}

void insertfirst(list &l, adr p)
{
    if(l.first== NULL && l.last == NULL){
        l.first=p;
        l.last=p;
    }else {
        p->next=l.first;
        l.first->prev=p;
        l.first=p;
    }
}

void insertlast(list &l, adr p)
{
    if(l.first == NULL){
        l.first = p;
        l.last=p;
    }else{
        l.last->next=p;
        p->prev=l.last;
        l.last=p;
    }
}
void insertafter(list &l,adr p ,adr prec)
{
    p->next=prec->next;
    p->prev=prec;
    prec->next->prev=p;
    prec->next=p;
}


void deletefirst(list &l, adr p) {
    if (l.first != l.last){
        p=l.first;
        l.first=p->next;
        p->next=NULL;
        l.first->prev=NULL;

    }else {
        l.first=p;
        l.last=p;
    }
}

void deletelast(list &l, adr p)
{
    p=l.last;
    l.last=l.last->prev;
    p->prev=NULL;
    l.last->next=NULL;
}

void deleteafter(list &l,adr p,adr prec)
{
    p=prec->next;
    prec->next=p->next;
    p->next->prev=prec;
    p->next=NULL;
    p->prev=NULL;

}
void printlist(list &l)
{
    adr temp =l.first;
    while (temp!= NULL)
    {
        cout<<temp->info;
        if(temp->next!=NULL){
            cout<<" -> ";
        }
        temp = temp->next;
    }
    cout<<endl;
    
}
#endif