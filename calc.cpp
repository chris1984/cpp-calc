#include<iostream>

using namespace std;

int main()

{
  float bill_total;
  cout << "Welcome to the Tip Calculator" << endl << endl;
  cout << "How much was your bill?" << endl;
  cin >> bill_total;

  int total_people;
  cout << "How many people are in your party" << endl;
  cin >> total_people;

  double tip;
  tip = bill_total * 0.2;
  double result = tip / total_people;

  cout << "You each need to pay " << result << endl;
}
