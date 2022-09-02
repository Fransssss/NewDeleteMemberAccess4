// Author: Fransiskus Agapa
// 9/2/22
// Practices make improvement - Have Fun !!!
// :)

// ========================
// user input name of groceries, its price and quantity,
// the program would display the data and calculate the total price of groceries' quantity
// ========================

#include <iostream>
#include "Grocery.h"
#include "ValidDigit.h"
#include "CapitalalWord.h"

using std::cout;
using std::cin;
using std::getline;
using std::endl;
using std::string;
using std::stod;
using std::stoi;

int main()
{
    string choice;                                     // user choice
    Grocery* myGrocery;                                // pointer to new allocated memory
    bool thereIsData;                                  // indicate if user has input data or not
    cout << "\n== US Grocery Data ==" << endl;
    cout << "1. Input Data" << endl;
    cout << "2. Display Data" << endl;
    cout << "e. Exit" << endl;
    cout << "choice: ";
    cin >> choice;
    cout << endl;

    while(choice != "e" and choice != "E")
    {
        if(choice == "1")
        {
            cout << "\n= Input Data =" << endl << endl;
            string name;
            bool validDigit;                              // validate digit input from user
            string strPrice;                              // validate as string then convert / change the type
            double price = 0;

            string strQuantity;
            int quantity = 0;

            double total = 0;

            // name
            cout << "Input name of grocery: ";
            name = "";
            while(name.size() == 0)
            {
                getline(cin, name);
            }
            Capitalize(name);
            cout << endl;

            // price
            cout << "Input the price of the grocery: $";
            while(strPrice.size() == 0)
            {
                cin >> strPrice;
            }
            validDigit = Validate(strPrice);
            if(validDigit)
            {
                price = stod(strPrice);
            }
            else
            {
                cout << endl << "[ Invalid price ]" << endl;
                price = 0.0;
            }
            cout << endl;

            // quantity
            cout << "Input the quantity of grocery: ";
            while(strQuantity.size() == 0)
            {
                cin >> strQuantity;
            }
            validDigit = Validate(strQuantity);
            if(validDigit)
            {
                quantity = stoi(strQuantity);
            }
            else
            {
                cout << endl << "[ Invalid quantity ]" << endl;
                quantity = -1;
            }
            cout << endl;

            // total
            validDigit = Validate(strQuantity);
            if(validDigit)
            {
                quantity = stoi(strQuantity);
                total = price;
                if(quantity > 1)
                {
                    total *= quantity;
                }
            }

            myGrocery  = new Grocery(name, price, quantity, total);
            cout << "[ Data submitted ]" << endl;
            thereIsData = true;

        }

        else if(choice == "2")
        {
            cout << "\n= Display Data =" << endl;
            if(thereIsData)
            {
                cout << endl << "Name: " << myGrocery->GetName() << endl;
                cout << "Price: $" << myGrocery->GetPrice() << endl;
                cout << "Quantity: " << myGrocery->GetQuantity() << endl;
                cout << "Total: $" << myGrocery->GetTotal() << endl;
                cout << endl;
                cout << myGrocery->lineJson() << endl;
                delete myGrocery;
            }
            else
            {
                myGrocery = new Grocery;
                cout << endl << "Name: " << myGrocery->GetName() << endl;
                cout << "Price: $" << myGrocery->GetPrice() << endl;
                cout << "Quantity: " << myGrocery->GetQuantity() << endl;
                cout << "Total: $" << myGrocery->GetTotal() << endl;
                cout << endl;
                cout << myGrocery->lineJson() << endl;
                delete myGrocery;
            }
            cout << "================" << endl;
        }

        else
        {
            cout << "\n[ Invalid choice ]" << endl;
        }

        cout << "\n== US Grocery Data ==" << endl;
        cout << "1. Input Data" << endl;
        cout << "2. Display Data" << endl;
        cout << "e. Exit" << endl;
        cout << "choice: ";
        cin >> choice;
        cout << endl;
    }

    delete myGrocery;                                 // Free allocated memory
    if(choice == "e" or choice == "E")
    {
        cout << "\n== Exit Program ==" << endl;
    }

    return 0;
}
