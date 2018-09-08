//Library
#include <iostream>
using namespace std;
//Printing multiplication table of given number
int main() {
int n;
cout <<"To print the multiplication table of a number."<< endl;
//Asking for input
cout << "Enter a number: ";
cin >> n;
//Displaying result
int i = 1;
for (int i = 1; i <= 10; ++i) {
cout << n << " * " << i << " = " << i*n << endl;
}
return 0;
}
