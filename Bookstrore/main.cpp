//
//  main.cpp
//  Bookstore
//
//  Created by Araz Sultanian on 11/18/17.
//  Copyright © 2017 Araz Sultanian. All rights reserved.
//
#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
using namespace std;
#include "customer.h"
#include "printer.h"
#include "subject.h"
#include "NoFileException.h"


int main() {
    string line;
    string employeeID;
    bool found = false;
    
    try {
        do {
            ifstream  input("employees.txt", ios::in);
            if (!input) {
                throw NoFileException();
            }
            cout << "Enter Employee Password:" << endl;
            getline(cin, employeeID);
            
            while (!input.eof())
            {
                getline(input, line);
                if (employeeID == line) {
                    found = true;
                    input.close();
                }
                
            }
            if (found == false) {
                cout << "Incorrect, try again\n" << endl;
                input.close();
            }
            
        } while (found == false);
    }
    catch (NoFileException &file) {
        cout << file.what() << endl;
        system("PAUSE");
        return 0;
    }

  
    cout << "\n\n\n" << endl;
    cout << "This is the regular customer register. It's constructor set the tax rate to 9.5%. And uses a coupon of $20\n--------------------------------------\n" << endl;
    
    
    customer test(employeeID, 0.0925, 20);
    test.addItem(12);
    test.addItem(15);
    test.printReceipt();
    cout << "\n\n\n\n" << endl;
    cout << "This is the printer register. It's constructor set the tax rate to 9.5%. And uses a coupon of $5, and costs per print to $0.10 for each black print and $0.30 for each color print\n--------------------------------------\n" << endl;
    printer test2(employeeID, 0.0925, 5, 0.10, 0.30);
    test2.calcBlackPrint(20);
    test2.calcColorPrint(20);
    test2.printReceipt();
    cout << "\n\n\n\n" << endl;
    cout << "This is the Easy bookstore register. It's constructor set the tax rate to 9.5%. And uses a coupon of 10. The cost to add books is $20 \n--------------------------------------\n" << endl;
   subject test3(employeeID,"History", 0.0925, 10, 5);
    test3.addItem(15);
    test3.printReceipt();
    cout << "\n\n\n\n" << endl;
    const int NUM = 3;
    customer *customerPtr[NUM];
    customerPtr[0] = &test;
    customerPtr[1] = &test2;
    customerPtr[2] = &test3;
    
    for (int i = 0; i < NUM; i++) {
        cout << "This is the polymorphic version of each department with a base pointer and a virtual print function. \n--------------------------------------\n" << endl;
        customerPtr[i]->printReceipt();
        cout << "\n\n\n\n" << endl;
    }
    
    
    
    system("PAUSE");
    return 0;
}

    
    
    

