#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
   const double CLASS_A = 15.00; //cost of class A tickets
   const double CLASS_B = 12.00; // cost of class b tickets
   const double CLASS_C =  9.00;// cost of class c Tickets

   double incomeGenerated;

   int classATickets;
   int classBTickets;
   int classCTickets;

   cout << "Please input the amount of Class A tickets sold: ";
   cin >> classATickets;
   cout << "Please input the amount of Class B tickets sold: ";
   cin >> classBTickets;
   cout << "Please input the amount of Class C tickets sold: ";
   cin >> classCTickets;

   incomeGenerated = classATickets * CLASS_A + classBTickets * CLASS_B + classCTickets * CLASS_C;

   cout << "The income generate from each class totaled : " << setprecision(2)<< fixed << showpoint << incomeGenerated << endl;

   double percentOfA = (classATickets * CLASS_A)/incomeGenerated * 100;
   double percentOfB = (classBTickets * CLASS_B)/incomeGenerated * 100;
   double percentOfC = (classCTickets * CLASS_C)/incomeGenerated * 100 ;

   cout << "Class A tickets yielded " << fixed << showpoint << percentOfA << " % of total income";
   cout << "\nClass B tickets yielded " << fixed << showpoint << percentOfB << " % of total income";
   cout << "\nClass C tickets yielded " << fixed << showpoint << percentOfC << " % of total income";

}
