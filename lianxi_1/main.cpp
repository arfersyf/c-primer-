//
//  main.cpp
//  cppprimer
//
//  Created by arfer on 2019/8/13.
//  Copyright © 2019年 arfer. All rights reserved.
//

#include <iostream>
#include "Sales_item.h"
using namespace std;

//void e0103to06();



int main(int argc, const char * argv[]) {
    
    
    //习题1.24 链表
    typedef struct node {
        Sales_item item;
        int num;
        struct node *next;
    }Node;
    
    typedef Node *List;
    List booklist = NULL;
    Node *plist;
    
    Sales_item book;
    cout << "input:" << endl;
    if(cin >> book)
    {
        Node *current = new Node;
        current->item = book;
        current->num = 1;
        current->next = NULL;
        booklist = current;
        
        while(cin >> book)
        {
            plist = booklist;
            while(plist != NULL)
            {
                if(plist->item.same_isbn(book))
                {
                    plist->item += book;
                    plist->num += 1;
                    break;
                }
                if(plist->next == NULL)
                {
                    Node *current = new Node;
                    current->item = book;
                    current->num = 1;
                    current->next = NULL;
                    plist->next = current;
                    break;
                }
                plist = plist->next;
            }
        }
        plist = booklist;
        while(plist != NULL)
        {
            cout << "result:" << plist->item << " " << plist->num << endl;
            plist = plist->next;
        }
    }
    else
    {
        cout << "no data." << endl;
    }
    
    /*习题1.24 数组
     Sales_item book[5],item;
     int book_num[5] = {0};
     int num = 0;
     cout << "input:" << endl;
     if(cin >> book[0])
     {
     book_num[0] = 1;
     while(cin >> item)
     {
     int i = 0;
     for(i = 0; (i<num) && (book[i].same_isbn(item) == 0); i++);
     if(i == num)
     {
     if(num >= 5){
     cout << "chaochufanwei" << endl;
     break;
     }
     book[num] = item;
     book_num[num] += 1;
     num++;
     }
     else{
     book[i] += item;
     book_num[i] += 1;
     }
     }
     for(int j = 0; j<num; j++)
     cout << "result:" << book_num[j] << endl;
     }
     else
     {
     cout << "no data." << endl;
     }*/
    
    
    //习题1.3-1，6
    //e0103to06();
    
    //cout << "/*";
    //cout << "*/";
    //cout << /* " */ " /* " /* " */;
    
    /*
    int sum = 0;
    int i = 50;
    while(i <= 100)
    {
        sum += i;
        i++;
    }
    cout << "the result is : " << sum << endl;
    */
    
    /*int j = 10;
    while(j >= 0)
    {
        cout << j << " ";
        j--;
    }
    cout << endl;
    */
    
    /*int a,b;
    cout << "input two number:" << endl;
    cin >> a >> b;
    if(a>=b)
    {
        while(a>=b)
        {
            cout << b << " ";
            b++;
            
        }
    }
    else{
        while(b>=a)
        {
            cout << a << " ";
            a++;
        }
    }
    cout << endl;
    */
    
    /* 习题1.16
    int a = 0;
    int sum = 0;
    cout << "input:" << endl;
    while(cin >> a)
    {
        sum += a;
    }
    cout << "result" << sum << endl;
    */
    
    /* 习题1.20
    Sales_item book;
    cout << "input:" << endl;
    while(cin >> book)
    {
        cout << "result:" << book << endl;
    }*/
    
    /* 习题1.21
    Sales_item book1,book2;
    cout << "input: two:" << endl;
    cin >> book1 >> book2;
    if(book1.same_isbn(book2))
    {
        cout << "result:" << book1 + book2 << endl;
    }
    else{
        cout << "error." << endl;
    }
    */
    
    /* 习题1.22
    Sales_item total,book;
    cout << "input1:" << endl;
    if(cin >> total)
    {
        cout << "input2:" << endl;
        while(cin >> book)
        {
            if(total.same_isbn(book))
            {
                total += book;
            }
            else
            {
                cout << "error isdn." << endl;
                return 0;
            }
        }
        cout << "result: " << total << endl;
    }
    else
    {
        cout << "no data." << endl;
    }
     */
    
    
    
    
    
    
    
    return 0;
}

/*void e0103to06()
{
    int a,b;
    cout << "input two number:" << endl;
    cin >> a >> b;
    cout << "result:" << a*b << endl;
    
    cout << "the sum of " << a\
    << " and " << b\
    << " is " << a+b << endl;
}*/
