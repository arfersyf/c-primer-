//
//  main.cpp
//  lianxi_7
//
//  Created by arfer on 2019/8/20.
//  Copyright © 2019年 arfer. All rights reserved.
//

#include <iostream>
#include <vector>
#include <string>
using namespace std;

//习题7.4
/*class Person{
private:
    string strname;
    string straddress;
    
public:
    Person() = default;
    Person(const string &name, const string &address)
        :strname(name), straddress(address) {
        //strname = name;
        //straddress = address;
    }
    Person(istream &is){ read(is, *this); }
public:
    string getname() const {return strname;}
    string getaddress() const {return straddress;}
    friend istream &read(istream &is, Person &per);
    friend ostream &print(ostream &os, const Person per);

};

istream &read(istream &is, Person &per){
    is >> per.strname >> per.straddress;
    return is;
}

ostream &print(ostream &os, const Person per){
    os << per.strname << "  " << per.straddress << endl;
    return os;
}
*/

class Window_mgr{
public:
    void clear() ;
};


class Screen{
private:
    unsigned height = 0, width = 0;
    unsigned cursor = 0;
    string contents;
public:
    Screen() = default;
    Screen(const unsigned &hei, const unsigned &wid): height(hei), width(wid), contents(hei * wid, ' ') {}
    Screen(const unsigned &hei, const unsigned &wid, char c): height(hei), width(wid), contents(hei * wid, c) {}
public:
    Screen& move(const unsigned i, const unsigned j){
        cursor = i * width + j;
        return *this;
    }
    Screen& set(char c){
        contents[cursor] = c;
        return *this;
    }
    ostream& display(ostream &os){
        for(int i = 0; i < height; i++)
        {
            for (int j = 0; j < width; j++) {
                os << contents[i*width + j];
            }
            os << endl;
        }
        return os;
    }
    
    friend void Window_mgr::clear();
};

class Screen2{
private:
    unsigned height = 0, width = 0;
    unsigned cursor = 0;
    string contents;
public://委托构造函数
    Screen2(const unsigned &hei, const unsigned &wid, char c): height(hei), width(wid), contents(hei * wid, c) {
        cout << "1" << endl;
    }
    Screen2() : Screen2(1,2,'b'){cout << "2" << endl;}
    Screen2(istream &is): Screen2() { contents = "aadsfa"; cout << "3" << endl; }
public:
    Screen2& move(const unsigned i, const unsigned j){
        cursor = i * width + j;
        return *this;
    }
    Screen2& set(char c){
        contents[cursor] = c;
        return *this;
    }
    ostream& display(ostream &os){
        for(int i = 0; i < height; i++)
        {
            for (int j = 0; j < width; j++) {
                os << contents[i*width + j];
            }
            os << endl;
        }
        return os;
    }
    
    friend void Window_mgr::clear();
};

void Window_mgr::clear()
{
    Screen myscreen(10, 20, 'x');
    myscreen.contents = "";
}

//习题7.31
class Y;

class X{
private:
    //Y y1; //Y只有前向声明没有定义，只能建立指针，不能定义对象 此句错误
    Y *y2;  //声明后，指针可以建立
};

class Y{
    X x;
};


//习题7.43
class NO{
public:
    int val;
public:
    NO(int i) {val = i;}
};

class Can{
private:
    NO no;
public:
    //Can(int i) : no(i) {}
    Can() : no(2) {}//no的构造函数必须有参数，所以这里必须显式调用初始化no
    void printfcan() {cout << no.val << endl;}
};



int main(int argc, const char * argv[]) {
    std::cout << "Hello, World!\n";
    
    //习题7.10
    /*Person p1, p2;
    read(read(cin, p1), p2);
    Person p3("as", "as"), p4(cin);
    print(cout, p1);
    print(cout, p2);
    print(cout, p3);
    print(cout, p4);
    */
    
    /*Screen myscreen( 5, 5, 'x');
    myscreen.move(4, 0).set('#').display(cout);
    cout << endl;
    myscreen.display(cout);
    cout << endl;
    
    
    Screen2 first(2,2,'q');
    Screen2 second;
    Screen2 third(cin);
    
    first.display(cout);
    second.display(cout);
    third.display(cout);
    */
    
    //习题7.43
    /*Can can;
    can.printfcan();
    */
    
    
    return 0;
}
