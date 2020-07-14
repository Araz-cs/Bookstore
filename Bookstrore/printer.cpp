//
//  printer.cpp
//  Bookstore
//
//  Created by Araz Sultanian on 11/18/17.
//  Copyright © 2017 Araz Sultanian. All rights reserved.
//

#include "printer.h"
#include <iostream>
#include "customer.h"
using namespace std;

printer:: printer(){
}

printer::printer(const string &name, double taxRate, double coupon,double costBlack, double costColor):customer(name, taxRate, coupon) {
    
    setBlack(costBlack);
    setColor(costColor);
    
}

void printer:: setBlack(double black){
    
    costPerBlackPrint=black;
    
}

void printer:: setColor(double color){
    
    costPerColorPrint=color;
    
}

double printer:: getBlack()const
{
    return costPerBlackPrint;
}

double printer:: getColor()const
{
    
    return costPerColorPrint;
}



void printer::calcBlackPrint(double num) {
    customer::setSubTotal(num*(costPerBlackPrint));
    numOfblack = num;
}

void printer::calcColorPrint(double num) {
    customer::setSubTotal(num*(costPerColorPrint));
    numOfColor = num;
}



void printer::printReceipt() {
    
    cout << "Customer's name: " << customer::getName()<< endl;
    cout << "Cost Per Black Print $" << costPerBlackPrint << endl;
    cout << "Cost Per Color Print $" << costPerColorPrint << endl;
    cout << "Number of Black Prints " << numOfblack << endl;
    cout << "Number of Color Prints " << numOfColor << endl;
    cout << "Subtotal: $" << customer::calcSubTotal() << endl;
    cout << "Tax: $" << customer::calcTax() << endl;
    cout << "Coupons:" << " -$" << customer::getCoupon() << endl;
    cout << "-----------------" << endl;
    cout << "Total: $" << customer::calcTotal() << endl;
}
