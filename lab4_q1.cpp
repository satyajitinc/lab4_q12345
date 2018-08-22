//converting length centimeter to kilometer

//including the library

#include <iostream>
using namespace std;

//including the function
int main(){

//declaring a variable
float a;

//asking for an input value 
cout << "please enter an object's length in centimeter ";

//reading the variable
cin >>a;
cout << "The value entered is " << a<<endl;

//performing the calculation
cout << " and its value in meter is " << a/100 << "m" << endl;
cout << " and its value in kilometer is " << a/100000 << "km" << endl;

//ending
return 0;
}

