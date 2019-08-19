//
//  main.cpp
//  lianxi_5
//
//  Created by arfer on 2019/8/18.
//  Copyright © 2019年 arfer. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;


int main(int argc, const char * argv[]) {
    std::cout << "Hello, World!\n";
    
    //习题5.3
    /*int val = 0, sum = 0;
    while(val < 10)
    {
        sum += val;
        ++val;
    }
    cout << sum << " ";
    
    val = 0;
    while (val < 10)
        sum += val, ++val;
    cout << sum << endl;
    */
    
    //习题5.9
    /*int num = 0;
    char ch;
    while(cin >> ch)
    {
        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
            num++;
    }
    cout << num << endl;
    */
    
    //习题5.11
    /*int num = 0;
    char ch;
    while (cin >> ch) {
        switch (ch) {
            case 'a':
            case 'A':
            case 'e':
            case 'E':
            case 'i':
            case 'I':
            case 'o':
            case 'O':
            case 'u':
            case 'U':
            case 't':
            case 'n':
            case ' ':
                num++;
                break;
        }
    }
    cout << num << endl;
    */
    
    //习题5.12
    /*int num = 0;
    char ch, prech = '\0';
    while (cin >> ch) {
        if(prech == 'f')
            switch (ch) {
                case 'f':
                case 'i':
                case 'l':
                    num++;
                    prech = '\0';
                    break;
                default:
                    prech = '\0';
                    break;
            }
        else if(ch == 'f')
            prech = 'f';
    }
    cout << num << endl;*/
    
    //习题5.14
    /*string str, prestr = "", maxstr;
    int currnum = 1, maxnum = 0;
    while(cin >> str)
    {
        if(prestr == str)
            currnum++;
        else if(currnum > 1 && currnum > maxnum){
            maxnum = currnum;
            maxstr = prestr;
            currnum = 1;
        }
        prestr = str;
    }
    if(maxnum > 1)
        cout << maxstr << " " << maxnum << endl;
    else
        cout << "no.." << endl;
    */
    
    //习题5.17
    /*vector<int> a = {0, 1, 1, 2};
    vector<int> b = {0, 1, 1, 2, 3, 4, 6};
    int i = 0;
    while (i < a.size() && i < b.size()) {
        if(a[i] == b[i])
            i++;
        else
            break;
    }
    if(i == a.size() || i == b.size())
        cout << "yes" << endl;
    else
        cout << "no" << endl;
    
    vector<int> a = {0, 1, 1, 2};
    vector<int> b = {0, 1, 1, 3, 3, 4, 6};
    vector<int>::const_iterator ia = a.cbegin(), ib = b.cbegin();
    while (ia != a.cend() && ib != b.cend()) {
        if( *ia == *ib){
            ia++;
            ib++;
        }
        else{
            cout << "no" << endl;
            break;
        }
    }
    if(ia == a.cend())
        cout << "yes a b" << endl;
    else if(ib == b.cend())
        cout << "yes b a" << endl;*/
    
    //习题5.19
    /*string a, b;
    cout << "input:" << endl;
    do {
        cin >> a >> b;
        if(a.size() > b.size())
            cout << b << endl;
        else
            cout << a << endl;
    } while (cin);*/
    
    //习题5.21
    /*string currstr, prestr;
    bool rep = 0;
    while(cin >> currstr){
        if(!isupper(currstr[0])){
            prestr = currstr;
            continue;
        }
        if(currstr == prestr)
        {
            rep = 1;
            cout << "repeat: " << prestr << endl;
            break;
        }
        prestr = currstr;
    }
    if(!rep)
        cout << "no" << endl;
    */
    
    //习题5.24
    /*int ival1, ival2;
    cin >> ival1 >> ival2;
    if(ival2 == 0)
    {
        throw runtime_error("no 0.");
    }
    cout << ival1/ival2 << endl;
    */
    
    //习题5.25
    /*int ival1, ival2;
    while(cin >> ival1 >> ival2){
        try {
            if (ival2 == 0) {
                throw runtime_error("no 0.");
            }
            cout << ival1/ival2 << endl;
        } catch (runtime_error err) {
            cout << err.what() << endl;
            break;
        }
    }*/
    
    
    
    return 0;
}
