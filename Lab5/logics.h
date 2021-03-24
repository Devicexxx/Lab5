#pragma once

using namespace System;


class Logic //������� �����
{
protected:
    int v1, v2, v3, v4, v5, v6, v7, v8, out, INn;
public:
    Logic() { v1 = 0; v2 = 0; v3 = 0; v4 = 0; v5 = 0; v6 = 0; v7 = 0; v8 = 0; out = 0; INn = 0; }
    void setv2(int i, int j);
    void setv3(int i, int j, int k);
    void setv4(int i, int j, int k, int n);
    void setv8(int i, int j, int k, int n, int m, int f, int g, int h);
    void setINn(int i);
    int getv1();
    int getv2();
    int getv3();
    int getv4();
    int getv5();
    int getv6();
    int getv7();
    int getv8();
    int getINn();
    int getout();


    bool operator >(Logic& k);
    bool operator <(Logic& k);
    bool operator ==(Logic& k);
    void operator =(Logic& k);

    void clear();
    void I();
    void set(int INn, int i, int j, int k, int n, int m, int f, int g, int h);
};

template <typename T>
public class Arr //����� ������
{
private:
    T* arr; // ?
    unsigned int Len; //������ ������
public:
    Arr() { Len = 0; arr = 0; }
    Arr(unsigned int l)
    {
        Len = l;
        arr = new T[l];
    }
    ~Arr() {};
    Arr(const Arr<T>& TArr);// ���������� �����
    void setSize(unsigned int i);
    void Clear();
    T& operator [] (unsigned int i);
    unsigned int getSize();
    void  operator = (Arr<T>& k);
    int getout(int i);
    int getINn(int i);
};


template <typename T>
T& Arr<T>:: operator [](unsigned int i)
{
    if (i < Len)
        return arr[i];
    return arr[0];
}

template <typename T>
Arr<T>::Arr<T>(const Arr<T>& TArr) // ���������� �����
{
    Len = TArr.Len; // ������������� ������
    arr = new T[Len]; // �������� ������
    for (unsigned int i = 0; i < Len; i++)
        arr[i] = TArr.arr[i]; // �������� ��������
}

template <typename T>
void Arr<T>::setSize(unsigned int i)
{
    T* tmp;
    tmp = new T[Len];
    if (arr) // ���� ������ ���������� �����,
    {
        for (unsigned int k = 0; k < i && k < Len; k++)
            tmp[k] = arr[k]; // �������� ��������
        delete[] arr; // ����������� ������
    }
    arr = new T[i]; // � �������� ������
    for (unsigned int k = 0; k < Len && k < i; k++)
        arr[k] = tmp[k];
    Len = i; // ������������� ����� ������
}

template <typename T>
unsigned int Arr<T>::getSize()
{
    return Len;
}

template <typename T>
void Arr<T>::Clear()
{
    delete[] arr;
    arr = 0;
    Len = 0;
}

template <typename T>
void Arr<T>::operator =(Arr<T>& k)
{
    unsigned int q;
    if (this->getSize() > k.getSize())
        q = k.getSize();
    else
        q = this->getSize();
    for (unsigned int i = 0; i < q; i++)
    {
        (*this)[i] = k[i];
    }
}

template <typename T>
int Arr<T>::getout(int i)
{
    return (arr[i].getout());
}
template <typename T>
int Arr<T>::getINn(int i)
{
    return (arr[i].getINn());
}