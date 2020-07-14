//
//  subject.cpp
//  Bookstore
//
//  Created by Araz Sultanian on 12/2/17.
//  Copyright © 2017 Araz Sultanian. All rights reserved.
//

#include <iostream>
using namespace std;
#include "subject.h"
#include "customer.h"


subject::subject(){}


subject::subject(const string &name,const string &bookNames, double tax, double coupon, double countBooks ):customer(name, tax,coupon){
    bookName=bookNames;
    countBook=countBooks;
    customer::setSubTotal(countBook);
}
    

void subject:: setBookName(string book)
{
    bookName=book;
}

void subject:: setAddedBook(double bookAdded)
{
    countBook+=bookAdded;
    customer::setSubTotal(bookAdded);
    
}

string subject:: getBookName() const
{
    return bookName;
}

double subject::getAddedbooks()const{
    
    return countBook;
    
}
void subject::printReceipt() {
    cout << "Customer's name: " << customer::getName()<< endl;
    cout << "book's name: " << getBookName() << endl;
    cout << "amount of books: " << getAddedbooks()<< endl;
    cout << "Subtotal: $" << customer::calcSubTotal() << endl;
    cout << "Tax: $" << customer::calcTax() << endl;
    cout << "Coupons:" << " -$" << customer::getCoupon() << endl;
    cout << "-----------------" << endl;
    cout << "Total: $" << customer::calcTotal() << endl;
}

