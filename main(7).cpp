#include <iostream>

using namespace std;

int attended, totalClasses;
double attendance;

//Int dividido en int, es int, se necesita pasar a doble

int main() 
{
  cout << "Attended classes? ";
  cin >> attended;
  
  cout << "Total classes? ";
  cin >> totalClasses;
  
  attendance = (double)attended/totalClasses;
  
  cout << "Your percentage: " << attendance*100 << "%" << endl;
  
  if (attendance >= 0.75)
  {
  	cout << "You can do your exam!" << endl;
  }
  else
  {
  	cout << "No exam for you" << endl;
  }
  
  return 0;
}