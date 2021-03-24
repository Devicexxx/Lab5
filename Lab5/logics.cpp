#include "iostream"
#include "logics.h"

using namespace System;


void Logic::setv2(int i, int j)
{
    if ((i > 1) || (j > 1))
        return;
    v1 = i;
    v2 = j;
}
void Logic::setv3(int i, int j, int k)
{
    if ((i > 1) || (j > 1) || (k > 1))
        return;
    v1 = i;
    v2 = j;
    v3 = k;
}
void Logic::setv4(int i, int j, int k, int n)
{
    if ((i > 1) || (j > 1) || (k > 1) || (n > 1))
        return;
    v1 = i;
    v2 = j;
    v3 = k;
    v4 = n;
}
void Logic::setv8(int i, int j, int k, int n, int m, int f, int g, int h)
{
    if ((i > 1) || (j > 1) || (k > 1) || (n > 1) || (m > 1) || (f > 1) || (g > 1) || (h > 1))
        return;
    v1 = i;
    v2 = j;
    v3 = k;
    v4 = n;
    v5 = m;
    v6 = f;
    v7 = g;
    v8 = h;
}
void Logic::setINn(int i)
{
    INn = i;
}

void Logic::clear()
{
    this->setINn(0);
    this->setv8(0, 0, 0, 0, 0, 0, 0, 0);
}

int Logic::getv1() { return v1; }
int Logic::getv2() { return v2; }
int Logic::getv3() { return v3; }
int Logic::getv4() { return v4; }
int Logic::getv5() { return v5; }
int Logic::getv6() { return v6; }
int Logic::getv7() { return v7; }
int Logic::getv8() { return v8; }

int Logic::getINn()
{
    return INn;
}
int Logic::getout()
{
    return out;
}
void Logic::I() //вычесление сигнала на выходе
{
    if (INn == 2)
    {
        if ((v1 == 0) && (v2 == 0)) out = 0;
        if ((v1 == 1) && (v2 == 0)) out = 0;
        if ((v1 == 0) && (v2 == 1)) out = 0;
        if ((v1 == 1) && (v2 == 1)) out = 1;
    }
    if (INn == 3)
    {
        if ((v1 == 1) && (v2 == 1) && (v3 == 1))
            out = 1;
        else out = 0;
    }
    if (INn == 4)
    {
        if ((v1 == 1) && (v2 == 1) && (v3 == 1) && (v4 == 1))
            out = 1;
        else out = 0;
    }
    if (INn == 8)
    {
        if ((v1 == 1) && (v2 == 1) && (v3 == 1) && (v4 == 1) && (v5 == 1) && (v6 == 1) && (v7 == 1) && (v8 == 1))
            out = 1;
        else out = 0;
    }
}
void Logic::set(int INn, int i, int j, int k, int n, int m, int f, int g, int h)
{
    this->clear();
    if (INn == 2)
    {
        this->setINn(2);
        this->setv2(i, j);
        this->I();
    }
    if (INn == 3)
    {
        this->setINn(3);
        this->setv3(i, j, k);
        this->I();
    }
    if (INn == 4)
    {
        this->setINn(4);
        this->setv4(i, j, k, n);
        this->I();
    }
    if (INn == 8)
    {
        this->setINn(8);
        this->setv8(i, j, k, n, m, f, g, h);
        this->I();
    }
}


bool Logic::operator >(Logic& k)
{
    if (this->getout() > k.getout())
        return true;
    return false;
}
bool Logic::operator <(Logic& k)
{
    if (this->getout() < k.getout())
        return true;
    return false;
}
bool Logic::operator ==(Logic& k)
{
    if (this->getout() == k.getout())
        return true;
    return false;
}
void Logic::operator =(Logic& k)
{
    this->setINn(k.getINn());
    this->setv8(k.getv1(), k.getv2(), k.getv3(), k.getv4(), k.getv5(), k.getv6(), k.getv7(), k.getv8());
}



//
//
//Logic& Arr:: operator [](unsigned int i)
//{
//    if (i < Len)
//        return arr[i];
//    return arr[0];
//}
//
//Arr::Arr(const Arr& TArr) // Конструкор копий
//{
//    Len = TArr.Len; // Устанавливаем размер
//    arr = new Logic[Len]; // Выделяем память
//    for (unsigned int i = 0; i < Len; i++)
//        arr[i] = TArr.arr[i]; // Копируем элементы
//}
//
//void Arr::setSize(unsigned int i)
//{
//    Logic* tmp;
//    tmp = new Logic[Len];
//    if (arr) // Если память выделялась ранее,
//    {
//        for (unsigned int k = 0; k < i && k < Len; k++)
//            tmp[k] = arr[k]; // Копируем элементы
//        delete[] arr; // освобождаем память
//    }
//    arr = new Logic[i]; // и выделяем память
//    for (unsigned int k = 0; k < Len && k < i; k++)
//        arr[k] = tmp[k];
//    Len = i; // Устанавливаем новый размер
//}
//
//unsigned int Arr::getSize()
//{
//    return Len;
//}
//
//void Arr::Clear()
//{
//    delete[] arr;
//    arr = 0;
//    Len = 0;
//}
//
//void Arr::operator =(Arr& k)
//{
//    unsigned int q;
//    if (this->getSize() > k.getSize())
//        q = k.getSize();
//    else
//        q = this->getSize();
//    for (unsigned int i = 0; i < q; i++)
//    {
//        (*this)[i] = k[i];
//    }
//}
//
//int Arr::getout(int i)
//{
//    return (arr[i].getout());
//}
//int Arr::getINn(int i)
//{
//    return (arr[i].getINn());
//}



