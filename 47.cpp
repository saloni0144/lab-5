//Library
#include <iostream>
using namespace std;
//Checking whether given number is prime
int main() {
int n, i;
bool Prime = true;
cout <<"To check whether a number is prime or not."<< endl;
//Asking for input
cout << "Enter a number: ";
cin >> n;
//Displaying result
if (n == 0 || n == 1) {
cout << n << " is not a prime number.";
}
else {
for(i = 2; i <= n / 2; ++i) {
if (n % i == 0) {
Prime = false;
break;
}
}
if (Prime) {
cout << n << " is a prime number.";
}
else {
cout << n << " is not a prime number.";
}
}
return 0;
}

