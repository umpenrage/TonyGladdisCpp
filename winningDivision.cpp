#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <string>


double getSales();
void findHighest(double, double, double, double, double);

int main()
{
    double salesNE;
    double salesSE;
    double salesNW;
    double salesSW;
    double highestProfit=0;
    std::cout << "The sales for the NorthEast Division are : ";
    salesNE = getSales();
    std::cout << "The sales for the SouthEast Division are : ";
    salesSE = getSales();
    std::cout << "The sales for the NorthWest Division are : ";
    salesNW = getSales();
    std::cout << "The sales for the SouthWest Division are : ";
    salesSW = getSales();
    findHighest(salesNE, salesSE, salesNW, salesSW, highestProfit);
    return 0;
}

double getSales(){
    double sales=0;
    std::cin >> sales;
    if(sales <0){

        while (sales < 0){
            std::cout << "Invalid input, please input a value greater than or equal to zero: ";
            std::cin>> sales;
        }
        return sales;
    }else{

    return sales;
    }
}

void findHighest(double ne, double se, double nw, double sw, double highestProfit){

    std::string bestDivisionSales;

    for(int i = 0; i < 4; i++){

        switch(i){
            case 0: if(ne > highestProfit){
                        highestProfit = ne;
                        bestDivisionSales = "NorthEast";
                    }
                    else{

                    }
                    break;
            case 1: if(se > highestProfit){

                        highestProfit = se;
                        bestDivisionSales = "SouthEast";
                    }
                    else{

                    }
                    break;
            case 2: if(nw > highestProfit){
                        highestProfit = nw;
                        bestDivisionSales = "NorthWest";
                    }
                    else{

                    }
                    break;
            case 3: if(sw > highestProfit){
                        highestProfit = sw;
                        bestDivisionSales = "SouthWest";
                    }
                    else{

                    }
                    break;

        }



    }
    std::cout << "The highest profit is $" << highestProfit << " from the " << bestDivisionSales << " Division.";
    std::cin.get();
}
