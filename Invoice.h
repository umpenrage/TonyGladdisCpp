#ifndef INVOICE_H_INCLUDED
#define INVOICE_H_INCLUDED
#include <string>

class Invoice{
public:
    explicit Invoice(std::string , std::string , int , int );
    void setProductNumber(std::string);
    void setProductPrice(int);
    void setProductDescription(std::string);
    void setQuantity(int);
    std::string getProductNumber() const;
    std::string getProductDescription() const;
    int getQuantity() const ;
    int getPrice() const ;
    void displayInvoice() const;
private:
    std::string description;
    std::string productNumber;
    int price;
    int quantity;
};

#endif // INVOICE_H_INCLUDED
