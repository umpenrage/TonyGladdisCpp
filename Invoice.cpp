#include <iostream>
#include "Invoice.h"
#include <string>

using namespace std;

Invoice::Invoice(string productNumber, string description, int price, int quantity)
    : productNumber(productNumber), description(description), price(price), quantity(quantity){



    }
void Invoice::setProductDescription(string descriptionSetter){
    description = descriptionSetter;

}

void Invoice::setProductNumber(string numberSetter){
    productNumber = numberSetter;

}

void Invoice::setProductPrice(int priceSetter){
    if(priceSetter <0){
        priceSetter = 0;
    }

        price = priceSetter;

}

void Invoice::setQuantity(int quantitySetter){
    if(quantitySetter <0){
        quantitySetter = 0;
    }

        quantity=quantitySetter;

}

string Invoice::getProductNumber() const{

    return productNumber;

}

string Invoice::getProductDescription () const{

    return description;
}

int Invoice::getPrice() const{

    return price;
}

int Invoice::getQuantity() const{

    return quantity;

}

void Invoice::displayInvoice() const{
    cout << "Part Number : " << getProductNumber() << "\n"
         << "Description : " << getProductDescription() <<"\n"
         << "Price : " << getPrice()<<"\n"
         << "Quantity : " <<getQuantity() << endl;


}

