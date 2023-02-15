#include <iostream>
#include <string>
#include <map>
using namespace std;


int main() {

  map<string, double> currency_values = {
    {"CAD", 1},
    {"USD", 0.75},
    {"JPY", 99.38},
    {"EUR", 0.70},
    {"GBP", 0.62},
  };

  string currency_from, currency_to;
  double amount;

  cout << "Currencies Allowed: CAD , USD , JPY , EUR , GBP" << endl;

  do{
    cout << "Enter Currency you would like to convert from: ";
    cin >> currency_from;
  } while (currency_values.count(currency_from) == 0);
  double value_from = currency_values[currency_from];

  do{
    cout << "Enter Currency you would like to convert to: ";
    cin >> currency_to;
  } while (currency_values.count(currency_to) == 0);
  double value_to = currency_values[currency_to];

  do{
    cin.clear();
    string line;
    getline(cin, line);
    cout << "Enter amount to convert: ";
  } while (!(cin >> amount));

  double result = amount * value_to / value_from;
  cout << amount << " " << currency_from << " = " << result << " " << currency_to;


  return 0;
  
}
