//Library
#include <iostream>
using namespace std;
//Printing all natural numbers in reverse from n to 1
int main () {
int n;
cout <<"To print all natural numbers in reverse from n to 1."<< endl;
//Asking for input
cout << "Enter a natural number, n: ";
cin >> n;
//Displaying result
while (n>0) {
cout << n << ", ";
--n;
}
return 0;
}

