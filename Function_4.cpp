#include <iostream>
using namespace std;

//define necessary functions
void computeCoins(int value, int& num, int& remainder){
  num = remainder / value;
  remainder = remainder % value;
}
int main()
{
  char choice;

  do{
    int amount;
    int quarters, dimes, pennies;
    cout << "Enter change( 1 to 99): ";
    cin >> amount;

    int origin = amount;
    computeCoins(25, quarters, amount);
    computeCoins(10, dimes, amount);
    pennies = amount;
    
    cout << origin << " cents could be "<< quarters<< " quarter(s) " << dimes << " dime(s) and " << pennies << " penny(pennies) "<< endl;
    
    cout << "Enter Y or y to continue, any other halis ";
    cin >> choice;
    cout<< endl;

  }
  while(choice == 'Y'|| choice == 'y');
  

return 0;
}

