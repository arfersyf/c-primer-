//
//  main.cpp
//  lianxi_3
//
//  Created by arfer on 2019/8/14.
//  Copyright © 2019年 arfer. All rights reserved.
//

#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(int argc, const char * argv[]) {
    std::cout << "Hello, World!\n";
    
    //习题3.2
    /*string line;
    cout << "input:" << endl;
    while(getline(cin, line))
        cout << line << endl;
    
    return 0;
    
    string word;
    cout << "input:" << endl;
    while (cin >> word) {
        cout << word << endl;
    }*/
    
    //习题3.4
    /*string s1,s2;
    cout << "input two words:" << endl;
    cin >> s1 >> s2;
    if(s1 == s2)
        cout << "==" << endl;
    else if(s1 > s2)
        cout << ">" << endl;
    else
        cout << ">" << endl;
    */
    
    /*string s1,s2;
    cout << "input two words:" << endl;
    cin >> s1 >> s2;
    auto len1 = s1.size();
    auto len2 = s2.size();
    if(len1 == len2)
        cout << "==" << endl;
    else if(len1 > len2)
        cout << ">" << endl;
    else
        cout << "<" << endl;*/
    
    //习题3.5
    /*string s1,s2;
    cout << "input:" << endl;
    cin >> s1;
    while(cin >> s2)
        s1 += {' ' + s2};
    cout << s1 << endl;
    */
    
    //习题3.6
    /*string s;
    cout << "input: " << endl;
    getline(cin, s);
    for(char &c :s)//引用才可以改内容。 遍历字符串，也可以是数组等
    {
        c = 'x';
    }
    cout << s << endl;*/
    
    
    /*string s;
    cout << "input:" << endl;
    getline(cin, s);
    for(int i = 0; s[i] != '\0'; i++)
    {
        s[i] = 'x';
    }
    cout << s << endl;
    */
    
    /*string s;
    cout << "input:" << endl;
    getline(cin, s);
    int i = 0;
    while(s[i] != '\0')
    {
        s[i++] = 'x';
    }
    cout << s << endl;
    */
    
    //习题3.10
    /*string s;
    cout << "input:" << endl;
    getline(cin, s);
    for(auto &c : s)
        //if( c >'A' && c<'z')
        if(!ispunct(c))//非数字，非字母，非空格
            cout << c;
    cout << endl;*/
    
    //习题3.13
    /*vector<int> v(10,42);
    vector<int> v1{10,42};
    vector<string> v2(10,"hi");//v2 v3无区别
    vector<string> v3{10,"h"};
    for ( auto c : v)
        cout << c << " ";
    cout << endl;
    for ( auto c : v1)
        cout << c << " ";
    cout << endl;
    for ( auto c : v2)
        cout << c << " ";
    cout << endl;
    for ( auto c : v3)
        cout << c << " ";
    cout << endl;*/
    
    //习题3.14
    /*vector<int> vINT;
    int i;
    cout << "input:" << endl;
    while(cin >> i)
        vINT.push_back(i);//向vector中加入数据
    for(auto c : vINT)
        cout << c << " ";
    cout << endl;*/
    
    //习题3.15
    /*vector<string> vString;
    string c;
    cout << "input:" << endl;
    while(cin >> c)
        vString.push_back(c);//向vector中加入数据
    for(auto c : vString)
        cout << c << " ";
    cout << endl;
    */
    
    //习题3.17
    /*vector<string> vString;
    string s;
    cout << "input:" << endl;
    while(cin >> s)
        vString.push_back(s);//向vector中加入数据
    for(auto &str : vString)
    {
        for(auto &c : str)
            //c -= 32;
            c = toupper(c);
        cout << str << " ";
    }
    cout << endl;
    */
    
    //习题3.19
    /*vector<int> v1(10,42);
    vector<int> v2{42,42,42,42,42,42,42,42,42,42};
    vector<int> v25 = {42,42,42,42,42,42,42,42,42,42};
    vector<int> v3;
    for (int i = 0; i<10; i++) {
        v3.push_back(42);
    }
    vector<int> v4(10);
    for (int j = 0; j<10; j++){
        v4[j] = 42;
    }
    for ( auto &i : v4) {
        cout << i << " ";
    }
    cout << endl;
    vector<int> v5(10);
    for (auto &i : v5){
        i = 42;
    }
    for (auto &i : v5) {
        cout << i << " ";
    }
    cout << endl;
    */
    
    //习题3.20
    /*vector<int> vInt;
    int i;
    cout << "input:" << endl;
    while(cin >> i)
        vInt.push_back(i);//向vector中加入数据
    if(vInt.size() == 0)
        cout << "no data." << endl;
    for(int now = 0; now < vInt.size()-1; now += 2)
    {
        cout << vInt[now] + vInt[now+1] << " ";
    }
    if( vInt.size()%2 )
        cout << vInt[vInt.size()-1] << endl;
    else
        cout << endl;
    
    
    vector<int> vInt;
    int i;
    cout << "input:" << endl;
    while(cin >> i)
        vInt.push_back(i);//向vector中加入数据
    if(vInt.size() == 0)
        cout << "no data." << endl;
    for(int now = 0; now < vInt.size()/2; now++)
    {
        cout << vInt[now] + vInt[vInt.size()-1-now] << " ";
    }
    if( vInt.size()%2 )
        cout << vInt[vInt.size()/2] << endl;
    else
        cout << endl;
    */
    
    //习题3.21   迭代器
    /*vector<int> v1(10,42);
    if(v1.cbegin() != v1.cend())
    {
        for (auto it = v1.cbegin(); it != v1.cend(); it++) {
            cout << *it << " ";
        }
        cout << endl;
    }*/
    
    //习题3.22
    /*vector<string> vString;
    string s;
    while(getline( cin, s))
    {
        vString.push_back(s);
    }
    for( auto &str : vString)
    {
        for ( auto &c : str) {
            c = toupper(c);
        }
        cout << str << " ";
    }
    cout << endl;
    a
    vector<string> vString;
    string s;
    while(getline( cin, s))
    {
        vString.push_back(s);
    }
    for ( auto it = vString.begin(); it != vString.end(); it++)
    {
        for ( auto itc = (*it).begin(); itc != (*it).end(); itc++) {
            *itc = toupper(*itc);
        }
        cout << *it << " ";
    }
    cout << endl;*/
    
    //习题3.23
    /*vector<int> vInt(10,43);
    for (auto it = vInt.begin(); it != vInt.end(); it++) {
        *it = *it * 2;
        cout << *it << " ";
    }
    cout << endl;*/
    
    //习题3.34
    /*const int sz = 10;
    int a[sz],b[sz];
    for(int i = 0; i<sz; i++)
    {
        a[i] = i;
    }
    for(int i = 0; i<sz; i++)
    {
        b[i] = a[i];
    }
    for (auto &ib : b)
    {
        cout << ib << " ";
    }
    cout << endl;
    
    vector<int> vInt1,vInt2;
    for(int i = 0; i<10; i++)
    {
        vInt1.push_back(i);
    }
    //vInt2 = vInt1;
    for(int j = 0; j<10; j++)
    {
        vInt2.push_back(vInt1[j]);
    }
    for (auto &i : vInt2)
    {
        cout << i << " ";
    }
    cout << endl;*/
    
    //习题3.35
    /*const int sz = 10;
    int a[sz], i = 0;
    for (i = 0; i<sz; i++)
    {
        a[i] = i;
    }
    int *p = begin(a);
    while(p != end(a))
    {
        *p = 0;
        p++;
    }
    for ( auto i : a ) {
        cout << i << " ";
    }
    cout << endl;
    */
    
    //习题3.36
    /*const int sz = 5;
    int a[sz], b[sz], i;
    srand((unsigned) time (NULL));
    for(i = 0; i<sz; i++)
    {
        a[i] = rand()%10;
    }
    int uVal;
    for(i = 0; i<sz; i++)
    {
        if(cin >> uVal)
            b[i] = uVal;
    }
    int *p = begin(a);
    int *q = begin(b);
    while (p != end(a) && q != end(b) ) {
        if(*p != *q)
        {
            cout << "no" << endl;
            return -1;
        }
        p++;
        q++;
    }
    cout << "ok" << endl;
    
    const int sz = 5;
    int i;
    vector<int> a,b;
    srand((unsigned) time (NULL));
    for(i = 0; i<sz; i++)
    {
        a.push_back(rand()%10);
    }
    int uval;
    for(i = 0; i<sz; i++)
    {
        if(cin >> uval)
            b.push_back(uval);
    }
    auto it1 = a.cbegin();
    auto it2 = b.cbegin();
    while ( it1 != a.cend() && it2 != b.cend()) {
        if(*it1 != *it2)
        {
            cout << "no" << endl;
            return -1;
        }
        it1++;
        it2++;
    }
    cout << "ok" << endl;*/
    
    //习题3.39
    /*string a = "abcd";
    string b = "bcde";
    if(a>b)
        cout << "a" << endl;
    else if (a<b)
        cout << "b" << endl;
    else
        cout << "equal" << endl;
    
    const char a1[] = "abcd";
    const char b1[] = "bcde";
    if(strcmp(a1, b1) > 0)
        cout << "a1" << endl;
    else if(strcmp(a1, b1) < 0)
        cout << "b1" << endl;
    else
        cout << "equal" << endl;
    */
    
    //习题3.40
    /*const char a1[] = "abcd";
    const char a2[] = "efgh";
    char a3[80];
    strcpy(a3, a1);
    strcat(a3, a2);
    cout << a3 << endl;
    */
    
    
    //习题3.41
    /*int a[] = {1,2,3,4};
    vector<const int> b(begin(a), end(a));
    for(auto i : b)
        cout << i << " ";
    cout << endl;*/
    
    //习题3.42
    /*vector<int> a(10, 42);
    int b[a.size()];
    for(int i = 0; i<10; i++)
    {
        b[i] = a[i];
    }
    for (auto j : b)
    {
        cout << j << " ";
    }
    cout << endl;
    int c[a.size()];
    auto it = a.begin();
    for(auto &v : c)
    {
        v = *it;
        it++;
    }
    for(auto j : c)
    {
        cout << j << " ";
    }
    cout << endl;
    */
    
    //习题3.43
    /*int ia[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
    for (int (&row)[4] : ia) {
        for (int &col : row)
            cout << col << " ";
        cout << endl;
    }
    for(int i = 0; i<3 ; i++)
    {
        for (int j = 0; j<4; j++)
            cout << ia[i][j] << " ";
        cout << endl;
    }
    for(int i = 0; i<3; i++)
    {
        for(int j = 0; j<4; j++)
            cout << *(*(ia+i)+j) << " ";
        cout << endl;
    }
    for(int (*p)[4] = ia; p < ia+3; p++)
    {
        for(int *q = *p; q < *p+4; q++)
            cout << *q << " ";
        cout << endl;
    }
    */
    
    //习题3.44
    /*using int_array = int[4];
    int ia[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
    for (int_array &row : ia) {
        for (int &col : row)
            cout << col << " ";
        cout << endl;
    }
    for(int i = 0; i<3 ; i++)
    {
        for (int j = 0; j<4; j++)
            cout << ia[i][j] << " ";
        cout << endl;
    }
    for(int i = 0; i<3; i++)
    {
        for(int j = 0; j<4; j++)
            cout << *(*(ia+i)+j) << " ";
        cout << endl;
    }
    for(int_array *p = ia; p < ia+3; p++)
    {
        for(int *q = *p; q < *p+4; q++)
            cout << *q << " ";
        cout << endl;
    }*/
    
    //习题3.45
    /*int ia[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
    for (auto &row: ia) {
        for (auto &col : row)
            cout << col << " ";
        cout << endl;
    }
    for(int i = 0; i<3 ; i++)
    {
        for (int j = 0; j<4; j++)
            cout << ia[i][j] << " ";
        cout << endl;
    }
    for(int i = 0; i<3; i++)
    {
        for(int j = 0; j<4; j++)
            cout << *(*(ia+i)+j) << " ";
        cout << endl;
    }
    for(auto p = ia; p < ia+3; p++)
    {
        for(auto q = *p; q < *p+4; q++)
            cout << *q << " ";
        cout << endl;
    }
    */
    
    
    return 0;
}
