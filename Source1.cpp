#include "Header.h"

STACK::STACK()
{
    top = NULL;
}

bool STACK::Empty()
{
    return top == NULL;
}

void STACK::Push(TInfo elem)
{
    std::cout << " push-" << elem;
    TList p = new NODE;
    p->info = elem;
    p->next = top;
    top = p;
}

TInfo STACK::Pop()
{
    TList p = top;
    top = top->next;
    TInfo elem = p->info;
    std::cout << " pop-" << p->info;
    p->next = NULL;
    delete p;
    return elem;
}

TInfo STACK::Top()
{
    return top->info;
}

void STACK::View()
{
    TList p = top;
    while (p != NULL)
    {
        std::cout << p->info;
        p = p->next;
    }
    std::cout << std::endl;
}

