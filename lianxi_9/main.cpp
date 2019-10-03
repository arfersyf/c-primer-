//
//  main.cpp
//  lianxi_9
//
//  Created by arfer on 2019/8/21.
//  Copyright © 2019年 arfer. All rights reserved.
//

#include <iostream>
#include <fstream>
#include <vector>
#include <deque>
#include <list>
#include <iterator>
#include <forward_list>
using namespace std;

//习题9.5
vector<int>::iterator search_vec(vector<int>::iterator begin, vector<int>::iterator end, int val)
{
    for(; begin < end; begin++)
    {
        if(*begin == val)
            return begin;
    }
    return end;
}

//习题9.16
bool equalvl(list<int> &il, vector<int> &iv)
{
    if(il.size() != iv.size())
        return 0;
    
    list<int>::const_iterator lt = il.cbegin();
    vector<int>::const_iterator vt = iv.cbegin();
    while(lt != il.cend() && vt < iv.cend())
    {
        if(*lt != *vt)
            return 0;
        lt++;
        vt++;
    }
    return 1;
    
}

//习题9.28
void inserts2(forward_list<string> &sfl, const string &s1, const string &s2)
{
    forward_list<string>::iterator prev = sfl.before_begin(), curr = sfl.begin();
    bool finds1 = 0;
    while(curr != sfl.end())
    {
        if(*curr == s1)
        {
            curr = sfl.insert_after(curr, s2);
            finds1 = 1;
        }
        prev = curr;
        curr++;
    }
    
    if(finds1 == 0){
        sfl.insert_after(prev, s2);
    }
    
}

//习题9.43
void changes(string &s, const string &oldval, const string &newval){
    auto l = oldval.size();
    if(!l)
        return;
    
    string::iterator iter = s.begin();
    while(iter <= s.end()-l){
        auto iter1 = iter;
        auto iter2 = oldval.begin();
        while (iter2 != oldval.end() && *iter1 == *iter2) {
            iter1++;
            iter2++;
        }
        
        if(iter2 == oldval.end()){
            iter = s.erase(iter, iter1);
            if(newval.size())
            {
                iter2 = newval.end();
                while (iter2 > newval.begin()) {
                    iter2--;
                    iter = s.insert(iter, *iter2);
                }
                iter += newval.size();
            }
        }
        else
            iter++;
    }
}

//习题9.44
void changes2(string &s, const string &oldval, const string &newval){
    int p = 0;
    while ((p = s.find(oldval, p)) != string::npos) {
        s.replace(p, oldval.size(), newval);
        p += newval.size();
    }
}

//习题9.45
void name_string(string &name, const string &prefix, const string &suffix){
    name.insert(name.begin(), 1, ' ');
    name.insert(name.begin(), prefix.begin(), prefix.end());
    name.append(" ");
    name.append(suffix.begin(), suffix.end());
}

//习题9.46
void name_string2(string &name, const string &prefix, const string &suffix){
    name.insert(0, " ");
    name.insert(0, prefix);
    name.insert(name.size(), " ");
    name.insert(name.size(), suffix);
}

//习题9.47
void find_char(string &s, const string &chars){
    string::size_type pos = 0;
    while ((pos = s.find_first_of(chars, pos)) != string::npos) {
        cout << pos << " " << s[pos] << endl;
        pos++;
    }
}

void find_no_char(string &s, const string &chars){
    string::size_type pos = 0;
    while ((pos = s.find_first_not_of(chars, pos)) != string::npos) {
        cout << pos << " " << s[pos] << endl;
        pos++;
    }
}

//习题9.49
void find_longest_word(ifstream &in)
{
    string s, maxlength_word;
    int maxlength = 0;
    while(in >> s)
    {
        if(s.find_first_of("bdfghjklpqty") != string::npos)
            continue;
        cout << s << " ";
        if(maxlength < s.size())
        {
            maxlength = s.size();
            maxlength_word = s;
        }
    }
    cout << maxlength_word << endl;
}

class DATE{
private:
    unsigned year;
    unsigned month;
    unsigned day;
public:
    DATE(const string &s){
        
    }
};





int main(int argc, const char * argv[]) {
    std::cout << "Hello, World!\n";
    
    //习题9.2
    //list<deque<int>> a;
    
    //习题9.4
    /*int val = 10;
    bool find = 0;
    vector<int> iv = {1,2,3,5,34,3,10,38,4};
    for (vector<int>::const_iterator it = iv.cbegin(); it < iv.cend(); it++) {
        if(*it == val)
            find = true;
    }
    cout << find << endl;
    */
    
    //习题9.5
    /*vector<int> iv = {1,2,3,4,3,2,5,5,6};
    cout << search_vec(iv.begin(), iv.end(), 6) - iv.begin() << endl;
    cout << search_vec(iv.begin(), iv.end(), 10) - iv.begin() << endl;
    */
    
    //习题9.13
    /*list<int> ilist = {1,2,3,4};
    vector<int> ivec = {1,2,3,4};
    
    //vector<double> dvec1(ilist);
    vector<double> dvec2(ilist.begin(), ilist.end());
    //vector<double> dvec3(ivec);
    vector<double> dvec4(ivec.begin(), ivec.end());

    cout << dvec2.capacity() << " " << dvec2.size() << endl;
    cout << dvec4.capacity() << " " << dvec4.size() << endl;*/
    
    //习题9.14
    /*list<char*> cl = {"abcd", "bhu"};
    vector<string> sv1(cl.begin(), cl.end());
    vector<string> sv2;
    sv2.assign(cl.begin(), cl.end());
    
    cout << sv1.capacity() << " " << sv1.size() << " " << sv1[0] << endl;
    cout << sv2.capacity() << " " << sv2.size() << " " << sv2[0] << endl;*/
     
    //习题9.15
    /*vector<int> ivec1 = {1,2,3,4};
    vector<int> ivec2 = {1,2,3,4};
    
    cout << (ivec1 == ivec2) << endl;
    
    ivec1.push_back(8);
    ivec1.pop_back();
    cout << (ivec1 == ivec2) << endl;
    cout << ivec1.capacity() << " " << ivec2.capacity() << endl;//扩容不影响
     */
    
    //习题9.16
    /*list<int> il = {1,2,3,4};
    vector<int> iv = {1,2,3,4};
    
    cout << equalvl(il, iv) << endl;
    */
    
    //习题9.18
    /*deque<string> sd;
    string sin;
    while(cin >> sin){
        sd.push_back(sin);
    }
    for(deque<string>::const_iterator csd = sd.cbegin(); csd < sd.cend(); csd++)
    {
        cout << *csd << endl;
    }*/
    
    //习题9.19
    /*list<string> sl;
    string word;
    while(cin >> word)
        sl.push_back(word);
    for (list<string>::const_iterator csl = sl.cbegin(); csl != sl.cend(); csl++) {
        cout << *csl << endl;
    }*/
    
    //习题9.20
    /*list<int> il= {1,2,3,4,5,6,7,8,9};
    deque<int> id1, id2;
    for(int ival : il)
    {
        ival%2? id1.push_back(ival) : id2.push_back(ival);
    }
    for(int val : id1)
    {
        cout << val << " ";
    }
    cout << endl;
    for(int val : id2)
    {
        cout << val << " ";
    }
    cout << endl;
    */
    
    //习题9.21
    /*vector<string> svec;
    string word;
    auto iter = svec.begin();
    while (cin >> word) {
        iter = svec.insert(iter, word);
    }
    
    for (auto sval : svec) {
        cout << sval << endl;
    }*/
    
    //习题9.22
    /*int some_val = 3;
    vector<int> iv = {1,2,3,3,3,6,7,8};
    int oldsize = iv.size(), newele = 0;
    vector<int>::iterator iter = iv.begin();
    
    while (iter != (iv.begin() + oldsize/2 + newele)) {
        if(*iter == some_val){
            iter = iv.insert(iter, 2*some_val);//iter失效
            iter++;
            newele++;
        }
        iter++;
    }
    
    for (auto val : iv) {
        cout << val << endl;
    }*/
    
    
    /*vector<int> iv = {1,2,3,3,3,6,7,8};
    vector<int>::iterator iter = iv.begin();
    int some_val = 3, time = iv.size()/2;
    int i = 0;
    
    while (i < time) {
        if(*iter == some_val){
            iter = iv.insert(iter, 2*some_val);//iter失效
            iter++;
        }
        iter++;
        i++;
    }
    
    for (auto val : iv) {
        cout << val << endl;
    }*/
    
    //习题9.24
    //vector<int> ivec;
    //cout << ivec.front() << endl;
    //cout << ivec[0] << endl;
    //cout << *(ivec.begin()) << endl;
    //cout << ivec.at(0) << endl;
    
    //习题9.26
    /*int ia[] = {1,2,3,4,5,6,7,8};
    vector<int> ivec;
    list<int> il;
    
    ivec.assign(ia, ia+8);
    il.assign(ia, ia+8);
    
    
    list<int>::iterator iterl = il.begin();
    while (iterl != il.end()) {
        if(*iterl%2)
            iterl = il.erase(iterl);
        else
            iterl++;
    }
    for(auto val : il){
        cout << val << " ";
    }
    cout << endl;
    
    vector<int>::iterator iter2 = ivec.begin();
    while (iter2 != ivec.end()) {
        if(!(*iter2 % 2))
            iter2 = ivec.erase(iter2);
        else
            iter2++;
    }
    for(auto val : ivec){
        cout << val << " ";
    }
    cout << endl;*/
    
    //习题9.27
    /*forward_list<int> iflist = {1,2,3,4,5,6,7,8};
    
    auto prev = iflist.before_begin();//前驱
    auto curr = iflist.begin();//当前
    
    while (curr != iflist.end()) {
        if(*curr % 2)
            curr = iflist.erase_after(prev);
        else{
            prev = curr;
            curr++;
        }
    }
    for (auto ival : iflist) {
        cout << ival << " ";
    }
    cout << endl;
    */
    
    //习题9.28
    /*forward_list<string> sflist = {"hello", "are", "you"};
    
    inserts2(sflist, "hello", "how");
    
    for(auto sl : sflist)
    {
        cout << sl << endl;
    }*/
    
    //习题9.40
    /*vector<string> svec;
    svec.reserve(20);
    string word;
    while (cin >> word) {
        svec.push_back(word);
    }
    svec.resize(svec.size() + svec.size()/2);
    
    cout << svec.capacity() << endl;
    */
    
    //习题9.41
    /*vector<char> cv = {'h','e','l','l','o'};
    string cs1(cv.begin(), cv.end());
    string cs2(cv.data(), cv.size());
    cout << cs1 << endl;
    cout << cs2 << endl;*/
    
    //习题9.42
    /*string s;
    s.reserve(100);
    char c;
    while(cin >> c){
        s.push_back(c);
    }
    cout << s << endl;
    */
    
    //习题9.43
    /*string s = "asdfhakurg";
    changes(s, "a", "abc");
    cout << s << endl;
    */
    
    //习题9.44
    /*string s = "asdfhakurg";
    changes2(s, "a", "abc");
    cout << s << endl;
    */
    
    //习题9.45
    /*string name = "asdf";
    name_string(name, "Mr.", "III");
    cout << name << endl;
    */
    
    //习题9.46
    /*string name = "asdf";
    name_string2(name, "Mr.", "III");
    cout << name << endl;
    */
    
    //习题9.47
    /*string s1 = "sdajufi2ioiew2";
    find_no_char(s1, "1234567890");
    string s2 = "sdajufi2ioiew2";
    find_no_char(s2, "abcdefghijklmnopqrstuvwxyz");
    */
    
    //习题9.49
    /*ifstream in(argv[1]);
    if(!in){
        cerr << "no file." << endl;
        return -1;
    }
    find_longest_word(in);
    */
    
    //习题9.50
    vector<string> vs = {"123", "334", "-1"};
    int sum = 0;
    for (auto iter = vs.begin(); iter != vs.end(); iter++) {
        sum += stoi(*iter);
    }
    cout << sum << endl;
    
    vector<string> vs2 = {"123.1", "334.3", "-1.9"};
    double sum2 = 0;
    for (auto iter = vs2.begin(); iter != vs2.end(); iter++) {
        sum2 += stof(*iter);
    }
    cout << sum2 << endl;
    
    return 0;
}
