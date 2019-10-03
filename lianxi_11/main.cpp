//
//  main.cpp
//  lianxi_11
//
//  Created by arfer on 2019/9/2.
//  Copyright © 2019年 arfer. All rights reserved.
//

/*#include <iostream>
#include <fstream>
#include <map>
#include <string>
#include <algorithm>
using namespace std;

int main(int argc, const char * argv[]) {
    cout << "Hello, World!\n";
    
    ifstream in("/Users/arfer/Documents/c/lianxi_11/lianxi_11/file.rtf");
    if(!in){
        cout << "fail to file" << endl;
        exit(1);
    }
    
    map<string, size_t> word_count;
    string word;
    while(in >> word)
        ++word_count[word];
    
    for(const auto &w : word_count)
        cout << w.first << " chuxianl " << w.second << " ci " << endl;
    
    return 0;
}
*/

/*#include <iostream>
#include <fstream>
#include <map>
#include <string>
#include <algorithm>
using namespace std;

string &trans(string &s)
{
    for(int p = 0; p < s.size(); p++)
    {
        if(s[p] >= 'A' && s[p] <= 'Z')
            s[p] -= ('A' - 'a');
        else if(s[p] == ',' || s[p] == '.')
            s.erase(p, 1);
    }
    return s;
}

int main(int argc, const char * argv[]) {
    cout << "Hello, World!\n";
    
    ifstream in("/Users/arfer/Documents/c/lianxi_11/lianxi_11/file.rtf");
    if(!in){
        cout << "fail to file" << endl;
        exit(1);
    }
    
    map<string, size_t> word_count;
    string word;
    while(in >> word)
        ++word_count[trans(word)];
    
    for(const auto &w : word_count)
        cout << w.first << " chuxianl " << w.second << " ci " << endl;
    
    return 0;
}*/

/*#include <iostream>
#include <map>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

void add_family(map<string, vector<string>> &families, const string &family)
{
    if(families.find(family) == families.end())
        families[family] = vector<string>();
}

void add_chile(map<string, vector<string>> &families, const string &family, const string &child)
{
    families[family].push_back(child);
}

int main(int argc, const char * argv[]) {
    map<string, vector<string>> families;
    
    add_family(families, "zhang");
    add_chile(families, "zhang", "tong");
    add_family(families, "wang");
    add_chile(families, "wang", "jarven");
    add_chile(families, "wang", "way");
    
    for (auto f : families) {
        cout << f.first << " jia de haizi: ";
        for(auto c : f.second)
            cout << c << " ";
        cout << endl;
    }
    return 0;
}*/

/*#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
 
string &trans(string &s)
{
    for(int p = 0; p < s.size(); p++)
    {
        if(s[p] >= 'A' && s[p] <= 'Z')
            s[p] -= ('A' - 'a');
        else if(s[p] == ',' || s[p] == '.')
            s.erase(p, 1);
    }
    return s;
}
 
int main(int argc, const char * argv[]) {
    cout << "Hello, World!\n";
    
    ifstream in("/Users/arfer/Documents/c/lianxi_11/lianxi_11/file.rtf");
    if(!in){
        cout << "fail to file" << endl;
        exit(1);
    }
    
    vector<string> unique_word;
    string word;
    while(in >> word){
        trans(word);
        if (find(unique_word.begin(), unique_word.end(), word) == unique_word.end()) {
            unique_word.push_back(word);
        }
    }
    
    for(const auto &w : unique_word)
        cout << w << " ";
    cout << endl;
    
    return 0;
}*/

/*#include <iostream>
#include <fstream>
#include <set>
#include <string>
#include <algorithm>
using namespace std;

string &trans(string &s)
{
    for(int p = 0; p < s.size(); p++)
    {
        if(s[p] >= 'A' && s[p] <= 'Z')
            s[p] -= ('A' - 'a');
        else if(s[p] == ',' || s[p] == '.')
            s.erase(p, 1);
    }
    return s;
}

int main(int argc, const char * argv[]) {
    cout << "Hello, World!\n";
    
    ifstream in("/Users/arfer/Documents/c/lianxi_11/lianxi_11/file.rtf");
    if(!in){
        cout << "fail to file" << endl;
        exit(1);
    }
    
    set<string> unique_word;
    string word;
    while(in >> word){
        trans(word);
        unique_word.insert(word);
    }
    
    for(const auto &w : unique_word)
        cout << w << " ";
    cout << endl;
    
    return 0;
}*/


//习题11.12
/*#include <iostream>
#include <fstream>
#include <utility>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main(int argc, char *argv[])
{
    ifstream in("/Users/arfer/Documents/c/lianxi_11/lianxi_11/file1.rtf");
    if(!in){
        cout << "failure" << endl;
        exit(1);
    }
    
    vector<pair<string, int>> data;
    string s;
    int v;
    while (in >> s && in >> v)
        data.push_back(pair<string, int> (s, v));
        //data.push_back(make_pair(s, v));
        //data.push_back({s, v});
    cout << 1 << endl;
    
    for (const auto &d : data) {
        cout << d.first << "" << d.second << endl;
    }
    
    
    return 0;
}*/


//习题11.14
/*#include <iostream>
#include <map>
#include <vector>
#include <utility>
#include <string>
#include <algorithm>
using namespace std;

void add_family(map<string, vector<pair<string, string>>> &families,
                const string &family)
{
    families[family];
}

void add_child(map<string, vector<pair<string, string>>> &families,
               const string &family, const string &child, const string &birthday)
{
    families[family].push_back({child, birthday});
}

int main(int argc, char *argv[])
{
    map<string, vector<pair<string, string>>> families;
    add_child(families, "wang", "jiawen", "1992-10-30");
    add_child(families, "du", "xiao", "1995-6-4");
    
    for (auto f:families) {
        cout << f.first << ": ";
        for (auto c : f.second) {
            cout << c.first << " " << c.second << endl;
        }
    }
    return 0;
}*/

//习题11.15
/*#include <iostream>
#include <fstream>
#include <utility>
#include <iterator>
#include <map>
#include <string>
#include <algorithm>
using namespace std;

int main(int argc, char *argv[])
{
    map<int, int> m;
    m[1] = 0;
    m[2] = 1;
    map<int, int>::iterator it = m.begin();
    (*it).second = 2;
    
    for(auto c : m)
        cout << c.first << " " << c.second << endl;
    
    return 0;
}*/

#include <iostream>
#include <string>
#include <algorithm>
#include <map>
using namespace std;

void remove_author(multimap<string, string> &books,
                   const string &author)
{
    auto pos = books.equal_range(author);
    if(pos.first == pos.second)
        cout << " no find" << endl;
    else
        books.erase(pos.first, pos.second);
}

void print_book(multimap<string, string> &books)
{
    cout << "books:" << endl;
    for (auto b:books) {
        cout << b.first << ": " << b.second << endl;
    }
    cout << endl;
}

int main(int argc, char *argv[])
{
    multimap<string, string> books;
    books.insert({"jim", "s"});
    books.insert({"ans", "as"});
    books.insert({"jim", "a"});
    
    print_book(books);
    
    remove_author(books, "jim");
    
    print_book(books);
    
    return 0;
}
