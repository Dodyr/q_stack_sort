#pragma once
#include <iostream>
#include <fstream>

typedef int TInfo;
struct NODE
{
    TInfo info;
    NODE* next;
};
typedef NODE* TList;
class STACK
{
private:
    TList top;
public:
    // методы функциональной спецификации
    STACK();
    bool Empty();
    void Push(TInfo elem);
    TInfo Pop();
    TInfo Top();
    void View();
};

