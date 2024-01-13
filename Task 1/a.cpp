#include<iostream>
#include<cstdlib>
using namespace std;
int main(){
    int input;
    int random;
    int lb , ub;
    bool okay = false;

    while(okay == false){

      cout << "Enter the range of your random number : ";
      cin >> lb >> ub;

      if(lb == ub){
        cout << "You didn't provide correct range. Try again!!!" << endl;
      }

      else{
        okay = true;
      }

    }
    
    while(okay == true){

      cout << "Enter your choosen value : ";
      cin >> input;

      random = (rand() % (ub - lb + 1)) + lb;

      //cout << "Random number : " << random << endl;;

      if(input == random){
          cout << "Congratulations, Your choosen number is same as random number." << endl;
          okay = false;
      }
    
      else if(input > random){
          cout << "O-oo, Your number is heigher than random number. Try again!!" << endl;
      }

      else{
          cout << "Oops, You have choosen lower number than random number. Please try again!!" << endl;
      }

    }

    return 1;
}    