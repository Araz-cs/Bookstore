//
//  printer.hpp
//  Bookstore
//
//  Created by Araz Sultanian on 11/18/17.
//  Copyright © 2017 Araz Sultanian. All rights reserved.
//

#ifndef printer_h
#define printer_h

#include <stdio.h>
using namespace std;
#include <iostream>
#include <string>
#include "customer.h"

class printer : public customer {
private:
    double costPerColorPrint;
    double costPerBlackPrint;
    int numOfColor;
    int numOfblack;
    
public:
    printer();
    printer(const string &, double = 0,  double =0, double =0,double =0);
   
    void  setBlack(double);
    void setColor(double);
    
    double getBlack()const;
    double getColor()const;
    
    
    void calcColorPrint(double);
    void calcBlackPrint(double);
    
    virtual void printReceipt();
    
};
#endif


