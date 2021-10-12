/**
 *   @file: invoice.cc
 * @author: Graham Pfeifer
 *   @date: 09/07/2021
 *  @brief: Homework 1
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <string>
using namespace std;

///Constants and function prototypes

int main(int argc, char const *argv[]) {
char brand;
double quantity = 0;
double price = 0;
char ohio_resident;
double taxes = 0;
double discount = 0;
cout << "Enter a monitor type (s, v) followed by the quantity: ";
cin >> brand >> quantity;
cout << "Do you live in Ohio (yes/no)? ";
cin >> ohio_resident;

if (brand = 's') { 
    if (quantity < 3) {
        if (ohio_resident = 'y'){
             price = 190 * quantity;
            taxes = price * 0.07;
            cout << "Hard Monitors Invoice \n ------------------------------ \n Monitor brand: Samsung \n Quantity: " << quantity << 
            "\n Price: $190.00 \n Ohio Resident: Yes \n Total price: " 
            << fixed << setprecision(2) << "$" << price;
            cout << "\n ------------------------------ \n Discount: $0.00 \n Subtotal: $" 
            << price << "\n Taxes: $" << taxes;
            cout << "\n ============================== \n Total: $" << price + taxes << "\n ==============================";
        }
        else {
            price = 190 * quantity;
            cout << "Hard Monitors Invoice \n ------------------------------ \n Monitor brand: Samsung \n Quantity: " << quantity << 
            "\n Price: $190.00 \n Ohio Resident: No \n Total price: " 
            << fixed << setprecision(2) << "$" << price;
            cout << "\n ------------------------------ \n Discount: $0.00 \n Subtotal: $" 
            << price << "\n Taxes: $0.00";
            cout << "\n ============================== \n Total: $" << price << "\n ==============================";
        }
    }
    else {
        if (ohio_resident = 'y'){
            price = 190 * quantity;
            discount = price * 0.05;
            taxes = (price - discount) * 0.07;
            cout << "Hard Monitors Invoice \n ------------------------------ \n Monitor brand: Samsung \n Quantity: " << quantity << 
            "\n Price: $190.00 \n Ohio Resident: Yes \n Total price: " 
            << fixed << setprecision(2) << "$" << price;
            cout << "\n ------------------------------ \n Discount: $" << discount << "\n Subtotal: $" 
            << price - discount << "\n Taxes: $" << taxes;
            cout << "\n ============================== \n Total: $" << price - discount + taxes << "\n ==============================";
        }
        else {
            price = 190 * quantity;
            discount = price * 0.05;
            cout << "Hard Monitors Invoice \n ------------------------------ \n Monitor brand: Samsung \n Quantity: " << quantity << 
            "\n Price: $190.00 \n Ohio Resident: No \n Total price: " 
            << fixed << setprecision(2) << "$" << price;
            cout << "\n ------------------------------ \n Discount: $" << discount << " \n Subtotal: $" 
            << price - discount << "\n Taxes: $0.00";
            cout << "\n ============================== \n Total: $" << price - discount << "\n ==============================";
        }
    }
}

else {
    if (quantity < 3) {
        if (ohio_resident = 'y') {
            price = 170 * quantity;
            taxes = price * 0.07;
            cout << "Hard Monitors Invoice \n ------------------------------ \n Monitor brand: ViewSonic \n Quantity: " << quantity << 
            "\n Price: $170.00 \n Ohio Resident: Yes \n Total price: " 
            << fixed << setprecision(2) << "$" << price;
            cout << "\n ------------------------------ \n Discount: $0.00 \n Subtotal: $" 
            << price << "\n Taxes: $" << taxes;
            cout << "\n ============================== \n Total: $" << price + taxes << "\n ==============================";
        }
        else {
            price = 170 * quantity;
            cout << "Hard Monitors Invoice \n ------------------------------ \n Monitor brand: ViewSonic \n Quantity: " << quantity << 
            "\n Price: $170.00 \n Ohio Resident: No \n Total price: " 
            << fixed << setprecision(2) << "$" << price;
            cout << "\n ------------------------------ \n Discount: $0.00 \n Subtotal: $" 
            << price << "\n Taxes: $0.00";
            cout << "\n ============================== \n Total: $" << price << "\n ==============================";
        }
    }
    else {
        if (ohio_resident = 'y') {
            price = 170 * quantity;
            discount = price * 0.05;
            taxes = (price - discount) * 0.07;
            cout << "Hard Monitors Invoice \n ------------------------------ \n Monitor brand: ViewSonic \n Quantity: " << quantity << 
            "\n Price: $170.00 \n Ohio Resident: Yes \n Total price: " 
            << fixed << setprecision(2) << "$" << price;
            cout << "\n ------------------------------ \n Discount: $" << discount << "\n Subtotal: $" 
            << price - discount << "\n Taxes: $" << taxes;
            cout << "\n ============================== \n Total: $" << price - discount + taxes << "\n ==============================";
        }
        else {
            price = 170 * quantity;
            discount = price * 0.05;
            cout << "Hard Monitors Invoice \n ------------------------------ \n Monitor brand: ViewSonic \n Quantity: " << quantity << 
            "\n Price: $170.00 \n Ohio Resident: No \n Total price: " 
            << fixed << setprecision(2) << "$" << price;
            cout << "\n ------------------------------ \n Discount: $" << discount << " \n Subtotal: $" 
            << price - discount << "\n Taxes: $0.00";
            cout << "\n ============================== \n Total: $" << price - discount << "\n ==============================";
        }
    }      
}
return 0;
} /// main