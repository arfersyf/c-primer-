//
//  main.cpp
//  lianxi_8
//
//  Created by arfer on 2019/8/20.
//  Copyright © 2019年 arfer. All rights reserved.
//

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
#include <stdexcept>
#include "Sales_data.h"
using namespace std;

//习题8.1
istream & inout(istream &in){
    int v;
    while(in >> v && !in.eof()){
        if(in.bad())
            throw runtime_error("error");
        if(in.fail()){
            cerr << "try again." << endl;
            in.clear();
            in.ignore(100, '\n');
            continue;
        }
        cout << v << endl;
    }
    in.clear();
    return in;
}






int main(int argc, const char * argv[]) {
    std::cout << "Hello, World!\n";
    
    //习题8.1
    //inout(cin);
    
    //习题8.4
    /*ifstream in("data");
    if(!in){
        cerr << "no" << endl;
        return -1;
    }
    
    string line;
    vector<string> words;
    while(getline(in, line)){
        words.push_back(line);
    }
    
    in.close();
    
    vector<string>::const_iterator it = words.cbegin();
    while (it != words.cend()) {
        cout << *it << endl;
        it++;
    }
     */
    
    //习题8.5
    /*ifstream in("data");
     if(!in){
     cerr << "no" << endl;
     return -1;
     }
     
     string line;
     vector<string> words;
     while(in >> line){
     words.push_back(line);
     }
     
     in.close();
     
     vector<string>::const_iterator it = words.cbegin();
     while (it != words.cend()) {
     cout << *it << endl;
     it++;
     }
     */
    
    //习题8.7
    
    
    
    
    return 0;
}
