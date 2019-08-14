//
//  Sales_data.h
//  lianxi_2
//
//  Created by arfer on 2019/8/14.
//  Copyright © 2019年 arfer. All rights reserved.
//

#ifndef Sales_data_h
#define Sales_data_h
#include <iostream>
#include <string>
using namespace std;

class Sales_data{
public:
    string bookNo;
    unsigned units_sold = 0;
    double sellingprice = 0.0;
    double saleprice = 0.0;
    double discount = 0.0;
public:
    Sales_data() = default;
    Sales_data(const string &book): bookNo(book) {}
    Sales_data(istream &is) { is >> *this; }
public:
    friend istream& operator >> (istream&, Sales_data&);
    friend ostream& operator << (ostream&, const Sales_data&);
    friend Sales_data operator + (const Sales_data&, const Sales_data&);
    friend bool operator == (const Sales_data&, const Sales_data&);
public:
    Sales_data& operator += (const Sales_data&);
};


Sales_data& Sales_data::operator+=(const Sales_data& s1)
{
    units_sold += s1.units_sold;
    sellingprice += s1.sellingprice;
    saleprice += s1.saleprice;
    return *this;
}



istream& operator >> (istream &in, Sales_data &s)
{
    in >> s.bookNo >> s.units_sold >> s.sellingprice >> s.saleprice;
    if(in && s.sellingprice != 0)
        s.discount = s.saleprice/s.sellingprice;
    else
        s = Sales_data();
    return in;
}

ostream& operator << (ostream &out, const Sales_data &s)
{
    out << s.bookNo << " " << s.units_sold << " " << s.sellingprice << " " << s.saleprice;
    return out;
}

inline Sales_data operator + (const Sales_data &s1, const Sales_data &s2)
{
    Sales_data s;
    if(s1.bookNo == s2.bookNo)
    {
        s.bookNo = s1.bookNo;
        s.units_sold = s1.units_sold + s2.units_sold;
        s.sellingprice = s1.sellingprice + s2.sellingprice;
        s.saleprice = s1.saleprice + s2.saleprice;
    }
    else
    {
        s = Sales_data();
    }
    return s;
}

inline bool operator == (const Sales_data &s1, const Sales_data &s2)
{
    if(s1.bookNo == s2.bookNo)
        return true;
    else
        return false;
}

#endif /* Sales_data_h */
