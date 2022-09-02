// Fransiskus Agapa

#include "Grocery.h"
#include "sstream"

using std::stringstream;

// default constructor
Grocery::Grocery()
{
    _name = "NoName";
    _price = 0.0;
    _quantity = -1;
    _total = 0.0;
}

Grocery::Grocery(const string &name, const double &price, const int &quantity, const double &total)
{
    _name = name;
    _price = price;
    _quantity = quantity;
    _total = total;
}

string Grocery::GetName() const
{
    return _name;
}

double Grocery::GetPrice() const
{
    return _price;
}

int Grocery::GetQuantity() const
{
    return _quantity;
}

double Grocery::GetTotal() const
{
    return _total;
}

void Grocery::AddTotal(const int &quantity)
{
    _total = _total * quantity;
}

string Grocery::lineJson() const
{
    stringstream asJson;
    asJson << "{\"Name\":\"" << _name << "\", \"Price\":$" << _price << ", \"Quantity\":" << _quantity << ", \"Total\":$" << _total << "}";
    return asJson.str();
}
