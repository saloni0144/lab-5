//Library
#include <iostream>
using namespace std;
//Printing all natural numbers from 1 to n
int main () {
int n;
cout <<"To print all natural numbers from 1 to n."<< endl;
//Asking for input
cout << "Enter a natural number, n: ";
cin >> n;
//Displaying results
int i = 1;
while (i<=n) {
cout << i << ", "; 
++i;
}
return 0;
}
