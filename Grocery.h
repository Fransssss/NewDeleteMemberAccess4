// Fransiskus Agaapa

#ifndef NEWDELETEMEMBERACCESS4_GROCERY_H
#define NEWDELETEMEMBERACCESS4_GROCERY_H

#include "string"

using std::string;

class Grocery
{
private:
    string _name;
    double _price;
    int _quantity;
    double _total;
public:
    Grocery();
    Grocery(const string& name, const double& price, const int& quantity, const double& total);
    void AddTotal(const int& quantity);
    string GetName() const;
    double GetPrice() const;
    int GetQuantity() const;
    double GetTotal() const;
    string lineJson() const;
};


#endif //NEWDELETEMEMBERACCESS4_GROCERY_H
