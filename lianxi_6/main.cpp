//
//  main.cpp
//  lianxi_6
//
//  Created by arfer on 2019/8/19.
//  Copyright © 2019年 arfer. All rights reserved.
//

#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include "Chapter6.h"
using namespace std;



//习题6.5
double myabs(double ival){
    if(ival<0)
        ival = -ival;
    return ival;
}

//习题6.7
int returnadd()
{
    static int i = 0;
    return i++;
}

//习题6.10
void exchange(int *i1, int *i2)
{
    int temp;
    temp = *i2;
    *i2 = *i1;
    *i1 = temp;
}

//习题6.11
void reset(int &i)
{
    i = 0;
}

//习题6.12
void exchange2(int &i1, int &i2)
{
    int temp;
    temp = i2;
    i2 = i1;
    i1 = temp;
}

//习题6.17
bool haveupper(const string &s)
{
    for (auto c : s) {
        if(isupper(c))
            return true;
    }
    return false;
}

void uptolow(string &s)
{
    for (char &c : s) {
        if(isupper(c))
            c = tolower(c);
    }
}

//习题6.22
void swappointer1(int *p, int *q)//什么都不交换
{
    int *temp = p;
    p = q;
    q = temp;
}

void swappointer2(int *p, int *q)//交换指针所指的值
{
    int temp = *p;
    *p = *q;
    *q = temp;
}

void swappointer3(int *&p, int *&q)//交换指针本身的值
{
    int *temp = p;
    p = q;
    q = temp;
}

//习题6.23
void printf1(const int *p)
{
    cout << *p << endl;
}

void printf2(const int *p, int sz)
{
    int i = 0;
    while(i<sz)
    {
        cout << *(p+i) << endl;
        ++i;
    }
}

void printf3(const int *p, const int *q)
{
    const int *i = p;
    while(i<q)
    {
        cout << *i << endl;
        i++;
    }
}

//习题6.27
int sum(initializer_list<int> i)
{
    int sum = 0;
    for (auto val : i) {
        sum += val;
    }
    return sum;
}

//习题6.32
int &get(int *array, int index){
    return array[index];
}

//习题6.33
void printfvector(vector<int> vint, int index)
{
    size_t sz = vint.size();
    if(!vint.empty() && index < sz){
        cout << vint[index] << endl;
        printfvector(vint, index+1);
    }
}

//习题6.36
int (&func1())[10];

typedef string arr[10];
arr& func2();//类型别名

auto func3() -> string(&) [10];//尾置返回类型

string str[10];
decltype(str) &func4();//decltype

//习题6.38
int odd[] = {1,3,5,7,9};
int even[] = {0,2,4,6,8};

int (&arrPtr(int i))[5]
{
    return i%2? odd : even;
}

//习题6.42
string make_plural(size_t ctr, const string &word, const string &ending = "s")
{
    return ctr>1? word + ending : word;
}

//习题6.47
void printfv(vector<int> vInt, unsigned index){
    unsigned sz = vInt.size();
    #ifndef NDEBUG
    cout << "size: " << sz << endl;
    #endif
    if(!vInt.empty() && index < sz)
    {
        cout << vInt[index] << endl;
        printfv(vInt, index+1);
    }
}

//习题6.51
void f(){
    cout << "a" << endl;
}

void f(int i){
    cout << "b" << endl;
}

void f(int i1, int i2){
    cout << "c" << endl;
}

void f(double d1, double d2){
    cout << "d" << endl;
}

//习题6.54
int fun(int a, int b){
    return a+b;
}

void comp(int a, int b, int (*p)(int, int)){
    cout << p(a,b) << endl;
}



int main(int argc, const char * argv[]) {
    std::cout << "Hello, World!\n";
    
    //习题6.4
    /*int a = 0;
    cout << "input: " << endl;
    cin >> a;
    cout << fact(a) << endl;
    */
    
    //习题6.5
    /*double d = 0;
    cout << "input: " << endl;
    cin >> d;
    cout << myabs(d) << " " << abs(d) << endl;
    return 0;*/
    
    //习题6.7
    /*for (int i = 0; i<10; i++) {
        cout << returnadd() << " ";
    }
    cout << endl;
    */
    
    //习题6.10
    /*int a = 1, b = 2;
    exchange(&a, &b);
    cout << a << " " << b << endl;
    */
    
    //习题6.11
    /*int a = 10;
    reset(a);
    cout << a << endl;
    */
    
    //习题6.12
    /*int a = 1, b = 2;
    exchange2(a, b);
    cout << a << " " << b << endl;
    */
    
    //习题6.17
    /*string str;
    cin >> str;
    cout << haveupper(str) << endl;
    uptolow(str);
    cout << str << endl;
    */
    
    //习题6.22
    /*int a = 2, b = 3;
    int *p = &a, *q = &b;
    swappointer2(p, q);
    cout << p << " " << a << " " << q << " " << b << endl;
    swappointer3(p, q);
    cout << p << " " << a << " " << q << " " << b << endl;
    */
    
    //习题6.23
    /*int i = 0;
    int j[3] = {1, 2, 3};
    printf1(&i);
    printf2(j, 3);
    printf3(begin(j), end(j));
    */
    
    //习题6.25
    //int main(int argc, char **argv)//argc 字符串数量。argv 字符串值
    /*{
        string str;
        for (int i = 0; i < argc; ++i) {
            str += argv[i];
        }
        cout << str << endl;
    }*/
    
    //习题6.27
    /*initializer_list<int> ival = {1,2,3,4};
    cout << sum(ival) << endl;*/
    
    //习题6.32
    /*int ia[10];
    for (int i = 0; i<10; i++) {
        get(ia, i) = i;
    }
    for (auto i : ia) {
        cout << i << endl;
    }*/
    
    //习题6.33
    /*vector<int> i = {1,2,3,4,5,6,7};
    printfvector(i, 0);
    */
    
    //习题6.38
    /*int i = 0;
    cin >> i;
    cout << *arrPtr(i) << endl;
    */
    
    //习题6.42
    /*cout << "success: " << make_plural(3, "success", "es") << endl;
    cout << "failure: " << make_plural(2, "failure") << endl;
    */
    
    //习题6.47
    /*vector<int> iv = {1,2,3,4,5,6,7,8};
    printfv(iv, 0);
    */
    
    //习题6.51
    //f(2.45, 5);
    /*f(3);
    f();
    f(3, 1);
    f(3.5, 7.9);
    */
    
    //习题6.54
    decltype(fun) *p = fun;
    vector<decltype(fun) *> vF = {p};
    comp(2, 4, p);
    
    return 0;
    
}


