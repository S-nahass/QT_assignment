//
//  LL.cpp
//  LinkedList
//
//  Created by Esraa Hamdi Abbas on 11/1/21.
//

#include "LL.hpp"
LinkedList::LinkedList()
{
    head = NULL;
    size=0;
}

node* LinkedList::merge(node *a , node *b) // merges two sorted linked lists
{
    //base cases if a list is empty then return the other list
    if (a==NULL)
        return b;
    if (b==NULL)
        return a;
    node *c;// will point to the smallest value
    if (a->value < b->value)
    {
        c = a;
        c->next = merge (a->next,b);
    }
    if (b->value < a->value)
    {
        c=b;
        c->next = merge(a,b->next);
    }
    return c;
    
}
node* LinkedList::midPoint(node *head) // finds the midpoint by the runner technique
{
    node* slow = head;
    node* fast = head->next;
    while (fast!=NULL && fast->next!=NULL)
    {
        slow= slow->next;
        fast =fast->next->next;
    }
    return slow;
}
node* LinkedList::mergesort(node *head)
{
    if (head == NULL || head->next ==NULL) // if there is one or no elements in the list, return it.
        return head;
    //find the midpoint using the midPoint function
    node *mid = midPoint(head);
    
    //split the list into 2 lists
    node *a = head;
    node *b = mid->next;
    mid->next = NULL;
    
    //recursivly call the merge sort function to sort both lists
    a = mergesort(a);
    b= mergesort(b);
    
    return merge(a,b);
    
}
void LinkedList::sort()
{
    head = mergesort(head);
}
void LinkedList::add(int value)
{
    
    if(head==NULL)
    {
        node* n = new node;
        n->value = value;
        n->next = NULL;
        head = n;
    }
    else{
        node* cursor = head;
        while(cursor->next!=NULL)
        {
            cursor = cursor->next;
        }
        node* n = new node;
        n->value = value;
        n->next = NULL;
        cursor->next = n;
    }
    size++;
}

int LinkedList::Size()
{
    return size;
}
void LinkedList::ShowList()
{
    node* cursor = head;
    while(cursor!=NULL)
    {
        std::cout<<cursor->value<<std::endl;
        cursor = cursor->next;
    }
}