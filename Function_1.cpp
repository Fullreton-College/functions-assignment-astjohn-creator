#include <iostream>
#include <cstdlib>
using namespace std;

/* Define your function here */ 
string CoinFlip(){
   int randomValue = rand() % 2;
   if (randomValue == 1) {
      return "Heads";
   }
   else{
      return "Tails";
   }
}

int main() {
   // Add more variables as needed
   int numFlips;
   int seedValue;
   cin >> seedValue;
   
   
   srand(seedValue);  // Unique seed
   cin >> numFlips;

   /* Type your code here */
   for (int i = 0; i < numFlips; ++i){
      cout << CoinFlip()<< " ";
   }

   cout << endl;

   return 0;
}
