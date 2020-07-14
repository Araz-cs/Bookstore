//
//  Employee.cpp
//  Bookstore
//
//  Created by Araz Sultanian on 11/18/17.
//  Copyright © 2017 Araz Sultanian. All rights reserved.
//

#include "customer.h"
#include <iostream>
using namespace std;

customer::customer(){
}

 customer:: customer(const string &name, double tax , double coupon) {
     
     setName(name);
     setTaxRate(tax);
     setCoupon(coupon);
     SubTotal=0;
        
}

void customer:: setName(string name)
{
    name=name;
}


void customer:: setTaxRate(double rate)
{
    taxRate=rate;
}


void customer:: setCoupon(double Coupon)
{
    coupon=Coupon;

}

void customer:: setSubTotal(double subTotal)
{
    SubTotal+= subTotal;

}
void customer::addItem(double i) {
    SubTotal= SubTotal + i;
    cout << "$" << i << " item added" << endl;
}

string customer:: getName() const
{
    return name;
}


double customer::getCoupon() const {
    return coupon;
}


double customer::calcSubTotal() const {
    return SubTotal;
}

double customer::calcTax() const {
    return (SubTotal*taxRate);
}

double customer::calcTotal() const {
    
    if (((SubTotal*taxRate) + SubTotal - coupon) < 0) {
        return 0.0;
    }
    else {
        return ((SubTotal*taxRate) + SubTotal - coupon);
    }
}

 void customer::printReceipt() {
    cout << "customer name: " << getName() << endl;
    cout << "Subtotal: $" << calcSubTotal() << endl;
    cout << "Tax: $" << calcTax() << endl;
    cout << "Coupons:" << " -$" << getCoupon() << endl;
    cout << "-----------------" << endl;
    cout << "Total: $" << calcTotal() << endl;
    
}
