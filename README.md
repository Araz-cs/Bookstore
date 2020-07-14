# Bookstore
	My final project is about a Book Store, I have included 8 classes including main and exception handling.

BookStore includes:

All my base and derived classes include destructors, copy constructors, void set functions, get functions, calc functions, derived classes included composition, inheritance and polymorphism’s virtual function but also I did not do cascading because I used it in my midterm classes which I have practiced on a lot during the semester. 

**1.customer- Base Class with .h and .cpp.**
- [x] This base class has one string that inputs customer Id using File as a password to open up the program.
- [x] Two double which compute the taxRate, Coupon 
- [x] Subtotal works differently by doing its calculation after an item is added, also depends on taxRate and coupon too.
- [x] Also have calc classes to do the calculations with the calc total.
- [x] virtual print function useful for polymorphism to be called from main depending on the classes’s parameters written.
- [x] this helps us use inheritance.


**2.subject- Derived Class with .h and .cpp.**
- [x] I added a string book name to input the name of the book.
- [x] I Added a double countBook to count the amount of books and do some calculation.
- [x] void set function, used inheritance in them.
- [x] get functions, and virtual print function using inheritance again.

**3.printer- Derived Class with .h and .cpp.**
- [x] I added two doubles as cost for black print and colorful print.
- [x] I added void set and get as usual.
- [x] I added void calcBlack printer and void calcColor printer functions to do the calculation cost time number of colorful and black prints to get the right subtotal.
---- I added get functions, void set functions, and virtual print function using inheritance. 

**4.noFileException- exception handling class .h.**
- [x] I added runtime error class to indicate if they input the right input from the file, if not it output that file cant be found.(I use this for the customer Id as a password to get into the program by committing exception handling into it).

**5.Main**
- [x] using employees.txt file in the debug document folder for it to open up.
- [x] in order for the program to operate, I put exception handling with “try&catch” and do while statements to test if the file has the right input form, if it doesn’t it would say file couldn’t be found.
- [x] also in do while statement I put if statements  to check if the user put the right Id and checks it with the file so the program operates and moves to the next step.

**The End**
- [x] From there I just do the testing by doing and easy way of using registers, and I do another one by using polymorphism to show the programmer the essentiality of using different ways to output something ive learned in during advanced c++ class.
