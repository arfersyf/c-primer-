//
//  main.cpp
//  lianxi_13
//
//  Created by arfer on 2019/10/3.
//  Copyright © 2019年 arfer. All rights reserved.
//


//习题13.5
/*#include <iostream>

using namespace std;

class HasPtr{
public:
    //添加拷贝构造函数
    HasPtr(const HasPtr &hp);
    HasPtr(const string &s = string()):ps(new string(s)), i(0) { }
    HasPtr& operator=(const HasPtr &rhs);
    ~HasPtr() {delete ps;}
private:
    string *ps;
    int i;
};

HasPtr::HasPtr(const HasPtr &hp){
    ps = new string(*hp.ps);
    i = hp.i;
}

HasPtr& HasPtr::operator=(const HasPtr &rhs){
    auto newps = new string(*rhs.ps);
    delete ps;
    ps = newps;
    i = rhs.i;
    return *this;
}

int main(int argc, const char * argv[]) {
    
    return 0;
}*/


//习题13.13
/*#include <iostream>
#include <vector>

using namespace std;

struct X{
    X() {cout << "gouzao X()" << endl; }
    X(const X&) {cout << "kaobei X(const X&)" << endl; }
    X& operator=(const X &rhs){ cout << "kaobeifuzhi = " << endl; return *this; }
    ~X() {cout << "xigou ~X()" << endl; }
};

void f1(X x){}

void f2(X &x){}

int main(int argc, char **argv){
    cout << "jububianliang" << endl;
    X x;
    
    cout << "fei&" << endl;
    f1(x);
    
    cout << "&" << endl;
    f2(x);
    
    cout << "dongtai" << endl;
    X *px = new X;
    
    cout << "rongqi" << endl;
    vector<X> vx;
    vx.push_back(x);
    
    cout << "shifangdongtaifenpei" << endl;
    delete px;
    
    cout << "jianjiechushihuahefuzhi" << endl;
    X y = x;
    y = x;
    
    cout << "over" << endl;
    return 0;
}*/

//习题13.17
/*#include <iostream>

using namespace std;

class numbered{
private:
    static int seq;
public:
    numbered() {mysn = seq++;}
    numbered(const numbered& n) { mysn = seq++;}
    int mysn;
};

int numbered::seq = 0;

void f(numbered &s)
//void f(numbered s)
{
    cout << s.mysn << endl;
}

int main(int argc, char **argv){
    numbered a, b = a, c = b;
    f(a); f(b); f(c);
    
    return 0;
}*/


//习题13.22
/*#include <iostream>
#include <string>
 
using namespace std;

class HasPtr{
public:
    //添加拷贝构造函数
    HasPtr(const HasPtr &hp):ps(new string(*hp.ps)), i(hp.i) { };
    HasPtr(const string &s = string()):ps(new string(s)), i(0) { }
    HasPtr& operator=(const HasPtr &rhs);
    HasPtr& operator=(const string&);
    string& operator*();
    ~HasPtr() {delete ps;}
private:
    string *ps;
    int i;
};

inline HasPtr& HasPtr::operator=(const HasPtr &rhs){
    auto newps = new string(*rhs.ps);
    delete ps;
    ps = newps;
    i = rhs.i;
    return *this;
}

HasPtr& HasPtr::operator=(const string &s){
    *ps = s;
    return *this;
}

string& HasPtr::operator*(){
    return *ps;
}

int main(int argc, const char * argv[]) {
    HasPtr h("hi mom!");
    HasPtr h2(h);
    HasPtr h3=h;
    h2 = "hi dad!";
    h3 = "hi son!";
    cout << *h << endl;
    cout << *h2 << endl;
    cout << *h3 << endl;
    return 0;
}*/


//习题13.27/30
/*#include <iostream>
#include <string>
#include <vector>

using namespace std;

class HasPtr{
public:
    //添加拷贝构造函数
    HasPtr(const HasPtr &hp):ps(new string(*hp.ps)), i(hp.i), use(hp.use) {++*use; };
    HasPtr(const string &s = string()):ps(new string(s)), i(0),use(new size_t(1)) { }
    HasPtr& operator=(const HasPtr &rhs);
    HasPtr& operator=(const string&);
    string& operator*();
    void swap(HasPtr&, HasPtr&);
    ~HasPtr() {if(--*use == 0){delete ps; delete use;}}
private:
    string *ps;
    int i;
    size_t *use;
};

inline HasPtr& HasPtr::operator=(const HasPtr &rhs){
    ++*rhs.use;
    if(--*use == 0){
        delete ps;
        delete use;
    }
    ps = rhs.ps;
    i = rhs.i;
    use = rhs.use;
    return *this;
}

HasPtr& HasPtr::operator=(const string &s){
    *ps = s;
    return *this;
}

string& HasPtr::operator*(){
    return *ps;
}

inline void HasPtr::swap(HasPtr &lhs, HasPtr &rhs){
    cout << "exchange " << *lhs.ps << " " << *rhs.ps << endl;
    std::swap(lhs.ps, rhs.ps);
    std::swap(lhs.i, rhs.i);
}

int main(int argc, const char * argv[]) {
    HasPtr h("hi mom!");
    HasPtr h2=h;
    h2 = "hi dad!";
    swap(h, h2);
    cout << *h << endl;
    cout << *h2 << endl;
    
    
    return 0;
}*/

//习题13.31
/*#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using std::string;
using std::cout;
using std::endl;
using std::vector;
using std::to_string;

class HasPtr{
    friend void swap(HasPtr&, HasPtr&);
public:
    //添加拷贝构造函数
    HasPtr(const HasPtr &hp):ps(new string(*hp.ps)), i(hp.i) { };
    HasPtr(const string &s = string()):ps(new string(s)), i(0) { }
    HasPtr& operator=(const HasPtr &rhs);
    HasPtr& operator=(const string&);
    string& operator*();
    bool operator<(const HasPtr&) const;
    ~HasPtr() {delete ps;}
private:
    string *ps;
    int i;
};

inline HasPtr& HasPtr::operator=(const HasPtr &rhs){
    auto newps = new string(*rhs.ps);
    delete ps;
    ps = newps;
    i = rhs.i;
    return *this;
}

HasPtr& HasPtr::operator=(const string &s){
    *ps = s;
    return *this;
}

string& HasPtr::operator*(){
    return *ps;
}

bool HasPtr::operator<(const HasPtr &hp) const{
    return *ps < *hp.ps;
}

inline void swap(HasPtr &lhs, HasPtr &rhs){
    cout << "exchange " << *lhs.ps << " " << *rhs.ps << endl;
    std::swap(lhs.ps, rhs.ps);
    std::swap(lhs.i, rhs.i);
}

int main(int argc, const char * argv[]) {
    HasPtr h("hi mom!");
    HasPtr h2=h;
    h2 = "hi dad!";
    HasPtr h3("hi son!");
    HasPtr h4("hi daughter!");
    cout << *h << endl;
    cout << *h2 << endl;
    
    vector<HasPtr> hpss;
    hpss.push_back(h);
    hpss.push_back(h2);
    hpss.push_back(h3);
    hpss.push_back(h4);
    
    for(auto hp:hpss)
        cout << *hp << " ";
    cout << endl;
    
    sort(hpss.begin(), hpss.end());
    
    for(auto hp:hpss)
        cout << *hp << " ";
    cout << endl;
    
    return 0;
}*/
