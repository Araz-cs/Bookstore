//
//  Employee.hpp
//  Bookstore
//
//  Created by Araz Sultanian on 11/18/17.
//  Copyright © 2017 Araz Sultanian. All rights reserved.
//

#ifndef customer_h
#define customer_h

#include <stdio.h>
using namespace std;
#include <iostream>
#include <string>
class customer {
    
private:
    string name;
    double taxRate;
    double coupon;
    double SubTotal;
    
    
public:
    customer();
    
    customer (const string &, double =0, double =0);
    

    void setName(string);
    void setTaxRate(double);
    void setCoupon(double);
    void setSubTotal(double);
    void addItem(double);
    
    string getName() const;
    double getTax() const;
    double getCoupon() const;
    
    
    double calcSubTotal() const;
    double calcTax() const;
    double calcTotal() const;
    virtual void printReceipt();
    
    
};







#endif /* Employee_hpp */
