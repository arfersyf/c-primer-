//
//  main.cpp
//  lianxi_4
//
//  Created by arfer on 2019/8/18.
//  Copyright © 2019年 arfer. All rights reserved.
//

#include <iostream>
#include <vector>

using namespace std;

int main(int argc, const char * argv[]) {
    std::cout << "Hello, World!\n";
    
    //习题4.2
    /*vector<int> vec(10,42);
    cout << *vec.begin() << " " << *vec.begin() + 1 << endl;
    cout << *(vec.begin() + 1) << endl;
    */
    
    //习题4.10
    /*int a;
    while(cin >> a && a !=42);
    cout << "end" << endl;
    */
    
    //习题4.11
    //(a>b && b>c && c>d)
    
    //习题4.21
    /*vector<int> a = {1,2,3,4,5,6,7,8,9,0};
    for(auto &i : a){
        i = i % 2 == 1? i * 2 : i;//条件运算符
        cout << i << " ";
    }
    cout << endl;
    */
    
    //习题4.22
    /*int grade;
    string finalgrade;
    cout << "input:" << endl;
    while(cin >> grade && grade >=0 && grade <= 100){
        finalgrade = grade < 60? "fail." : grade < 75? "low pass." : grade < 90? "pass." : "high pass.";
        cout << finalgrade << endl;
        cout << "input:" << endl;
    }*/
    
    //习题4.24
    /*int grade;
    string finalgrade;
    cout << "input:" << endl;
    while(cin >> grade && grade >=0 && grade <= 100){
        finalgrade = grade >90? "high pass." : grade > 75? "pass." : grade > 60? "low pass." : "fail.";
        cout << finalgrade << endl;
        cout << "input:" << endl;
    }*/
    
    //习题4.28
    /*cout << "bool: " << sizeof(bool) << endl;
    cout << "char: " << sizeof(char) << endl;
    cout << "int: " << sizeof(int) << endl;
    cout << "float: " << sizeof(float) << endl;
    cout << "double: " << sizeof(double) << endl;
    cout << "short: " << sizeof(short) << endl;
    cout << "long: " << sizeof(long) << endl;
    cout << "void *: " << sizeof(void *) << endl;
    cout << "int[4]: " << sizeof(int [4]) << endl;
    cout << "int*[4]: " << sizeof(int *[4]) << endl;
    */
    
    //习题4.29
    /*int x = 10, y = 20;
    bool somevalue = true;
    somevalue? (++x, ++y): --x,--y;//条件运算符到--y之前，无论somevalue，--y都要执行
    cout << x << " " << y << endl;
    
    x = 10;
    y = 20;
    somevalue = false;
    somevalue? (++x, ++y): --x,--y;
    cout << x << " " << y << endl;
    */
    
    //习题4.36
    /*int i = 5;
    double d = 0.3;
    cout << i*(static_cast<int>(d)) << endl;
    */
    
    
    
    
    
    return 0;
}
