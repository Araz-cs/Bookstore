//
//  subject.hpp
//  Bookstore
//
//  Created by Araz Sultanian on 12/2/17.
//  Copyright © 2017 Araz Sultanian. All rights reserved.
//

#ifndef subject_h
#define subject_h



#include <stdio.h>
using namespace std;
#include <iostream>
#include <string>
#include "customer.h"
class subject: public customer {
    
private:
    
    string bookName;
    double countBook;
    
    
public:
    subject();
    
    subject (const string &, const string &, double =0, double=0, double =0);
    
    
    void setBookName(string);
    string getBookName() const;
    
    void setAddedBook(double);
    double getAddedbooks() const;
    
    
    
    virtual void printReceipt();
    
    
};







#endif 

