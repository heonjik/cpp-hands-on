#include <iostream>
using namespace std;

/*
Problem 1: Define a Class
Task: Create a `book` class with:
* `title`, `author`, `pages` as public members
* A method `displayInfo()` to print the details
Bonus: create an object and call `displayInfo()`
*/

class Book {
public:
    string title;
    string author;
    int pages;

    Book(string t, string a, int p) {
        title = t;
        author = a;
        pages = p;
    }

    void displayInfo() {
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Pages: " << pages << endl;
    }
};

/*
Problem 2: Encapsulation with Getters / Setters
Task: Create a `BankAccount` class with:
* `balance` (private)
* `deposit()` and `withdraw()` methods
* `getBalance()` method
*/
class BankAccount {
private:
    double balance;
public:
    // put constructor in public
    BankAccount() {
        balance = 0.0;
    }
    void deposit(double amount) {
        if (amount > 0) balance += amount;
    }
    void withdraw(double amount) {
        if (amount <= balance) balance -= amount;
    }
    double getBalance() const {
    // NOTE: const means "this function does not modify the object it's called on"
        return balance;
    }
};

/*
Problem 3: Constructor and Overloading
Task: Add a constructor to `Book` that initializes title, author, pages
*/

/*
Problem 4: Inheritance
Task: Create a `Vehicle` base class with `start()` method. Create `Car` and `Bike` classes
      that inherit from it and add their own methods
*/
class Vehicle {
public:
    void start() {
        cout << "Starting vehicle..." << endl;
    }
};
class Car: public Vehicle {
public:
    void honk() {
        cout << "Beep beep" << endl;
    }
};

int main()
{
    // Problem 1 & 3
    Book b("Harry Potter", "JK Rolling", 200);
    b.displayInfo();
    cout << endl;

    // Problem 2
    BankAccount ba;
    ba.deposit(1000.0);
    cout << "Balance: $" << ba.getBalance() << endl;
    cout << endl;

    // Problem 4
    Car myCar;
    myCar.start();
    myCar.honk();

    return 0;
}