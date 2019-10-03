//
//  main.cpp
//  lianxi_12
//
//  Created by arfer on 2019/9/28.
//  Copyright © 2019年 arfer. All rights reserved.
//


//习题12.2
/*#include <iostream>

using namespace std;

#include "my_strBlob.h"

int main(int argc, const char * argv[]) {
    StrBlob b1;
    {
        StrBlob b2 = {"a", "an", "the"};
        b1 = b2;
        b2.push_back("about");
        cout << b2.size() << endl;
    }
    cout << b1.size() << endl;
    cout << b1.front() << " " << b1.back() << endl;
    
    const StrBlob b3 = b1;
    cout << b3.front() << " " << b3.back() << endl;  
    
    return 0;
}
*/

//习题12.6
/*#include <iostream>
#include <vector>

using namespace std;

vector<int> *new_vector(void)
{
    return new (nothrow) vector<int>;
}

void read_ints(vector<int> *pv)
{
    int v;
    while (cin >> v) {
        pv->push_back(v);
    }
}

void print_ints(vector<int> *pv)
{
    for (const auto &v : *pv)
        cout << v << " ";
    cout << endl;
}

int main(int argc, char **argv)
{
    vector<int> *pv = new_vector();
    if(!pv){
        cout << "memory not enough" << endl;
        return -1;
    }
    
    read_ints(pv);
    
    print_ints(pv);
    
    delete pv;
    pv = nullptr;
    
    return 0;
}*/

//习题12.7
/*#include <iostream>
#include <vector>
#include <memory>

using namespace std;

shared_ptr<vector<int>> new_vector(void)
{
    return make_shared<vector<int>>();
}

void read_ints(shared_ptr<vector<int>> spv)
{
    int v;
    while(cin >> v)
    {
        spv->push_back(v);
    }
}

void print_ints(shared_ptr<vector<int>> spv)
{
    for(const auto &v : *spv)
        cout << v << " ";
    cout << endl;
}

int main(int argc, char **argv)
{
    auto spv = new_vector();
    
    read_ints(spv);
    
    print_ints(spv);
    
    return 0;
}*/

//习题12.13
//智能指针与普通指针混用
/*#include <iostream>
#include <vector>
#include <memory>

using namespace std;

int main(int argc, char **argv)
{
    //auto sp = make_shared<int>();
    //auto p = sp.get();
    //delete p;  //报错，因为sp的指向的int对象被释放，sp成了空悬指针
    
    int *ip = new int(20);
    //shared_ptr<int> P2(ip);
    unique_ptr<int> P2(ip);
    delete ip;
    
    return 0;
}
*/

//习题12.14
/*#include <iostream>
#include <memory>

using namespace std;

struct destination {};
struct connection {int a;};

connection connect(destination *pd){
    cout << "open connection" << endl;
    return connection();
}

void disconnect(connection c)
{
    cout << "close connection" << endl;
}

void f(destination &d){
    cout << "normal" << endl;
    connection c = connect(&d);
    //忘记调用disconnect()
    cout << endl;
}

void end_connection(connection *p){
    disconnect(*p);
}

void f1(destination &d)
{
    cout << "shared_ptr" << endl;
    connection c = connect(&d);
    
    shared_ptr<connection> p(&c, end_connection);
    //忘记调用disconnect()
    cout << endl;
}

int main(int argc, char **argv){
    destination d;
    f(d);
    f1(d);
    
    return 0;
}*/

//习题12.23
/*#include <iostream>
#include <cstring>

using namespace std;

int main(int argc, char **argv){
    const char *c1 = "Hello ";
    const char *c2 = "world.";
    
    char *r = new char[strlen(c1) + strlen(c2) + 1];
    strcpy(r, c1);
    strcat(r, c2);
    cout << r << endl;
    
    string s1 = "Hello ";
    string s2 = "world.";
    strcpy(r, (s1+s2).c_str());
    cout << r << endl;
    
    delete [] r;
    
    return 0;
}
*/

//习题12.24
/*#include <iostream>
#include <cstring>

using namespace std;

int main(int argc, char **argv){
    char c;
    
    char *r = new char[20];
    int l = 0;
    
    while (cin.get(c)) {
        if(isspace(c))
            break;
        r[l++] = c;
        if(l == 20){
            cout << "over" << endl;
            break;
        }
    }
    r[l] = 0;
    cout << r << endl;
    
    delete [] r;
    
    return 0;
}*/

//习题12.26
/*#include <iostream>
#include <string>
#include <memory>

using namespace std;

int main(int argc, char **argv)
{
    allocator<string> alloc;
    
    auto const p = alloc.allocate(100);
    string s;
    string *q = p;
    while (cin >> s && q != p + 100) {
        alloc.construct(q++, s);
    }
    const size_t size = q - p;
    
    for (size_t i = 0; i < size; i++) {
        cout << p[i] << " " << endl;
    }
    
    while (q != p) {
        alloc.destroy(--q);
    }
    alloc.deallocate(p, 100);
    
    return 0;
}*/

//习题12.28
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
#include <map>
#include <set>

#include <cstdio>

