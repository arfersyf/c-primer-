//
//  main.cpp
//  lianxi_2
//
//  Created by arfer on 2019/8/13.
//  Copyright © 2019年 arfer. All rights reserved.
//

#include <iostream>
#include <typeinfo>
#include "Sales_data.h"

using namespace std;

class A
{
public:
    int a = 1;
    A() {}
    A(int a_):a(a_){}
    A(int a_, bool b) :a(4) { a = a_; }
};




//int global_int;//0
//extern int ix = 1024;//不要初始化

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    
    //习题2.8
    //cout << "2\x4d\012";
    //cout << "2\t\x4d\n";
    
    //
    /*string local_str;//NULL
    int local_int;//xxxx
    */
    
    //
    /*int *p = nullptr;
    if(p)
        cout << "ok" << endl;
    else
        cout << "null" << endl;
    */
    
    //习题2.34
    /*int i = 0, &r = i;
    auto a = r;
    const int ci = i, &cr = ci;
    auto b = ci;
    auto c = cr;
    auto d = &i;
    auto e = &ci;
    auto &g = ci;
    cout << a << " " << b << " " << c << " " << d << " " << e << " " << g << endl;
    a = 42;
    b = 42;
    c = 42;
    //d = 42;
    //e = 42;
    //g = 42;
    cout << a << " " << b << " " << c << " " << d << " " << e << " " << g << endl;*/
    
    //习题2.35
    /*const int i = 42;
    auto j = i;
    const auto &k = i;
    auto *p = &i;
    const auto j2 = i, &k2 = i;
    cout << typeid(i).name() <<endl;
    cout << typeid(j).name() <<endl;
    cout << typeid(k).name() <<endl;
    cout << typeid(p).name() <<endl;
    cout << typeid(j2).name() <<endl;
    cout << typeid(k2).name() <<endl;
     */
    
    //习题2.37
    /*int a = 3, b = 4;
    decltype(a) c = a;
    decltype(a = b) d = a;//引用
    a = 5;
    cout << c << " " << d << endl;
    */
    
    //类成员变量初始化
    /*A a1, a2(3), a3(5, true);
    cout << "a1.a=" << a1.a << endl;
    cout << "a2.a=" << a2.a << endl;
    cout << "a3.a=" << a3.a << endl;
    */
    
    Sales_data book;
    Sales_data book2("as");
    Sales_data book3(cin);
    Sales_data book4;
    
    cin >> book4;
    
    cout << book.bookNo << endl;
    cout << book2.bookNo << endl;
    cout << book3.bookNo << endl;
    book4 += book3;
    cout << book4 << endl;
    if(book3==book4)
        cout << "book3 is equal to book4." << endl;
    
    
    return 0;
}
