//Library
#include <iostream>
using namespace std;
//Finding sum of all natural numbers between 1 and n
int main() {
int n, sum = 0;
cout <<"To find the sum of all natural numbers between 1 and n."<< endl;
//Asking for input
cout << "Enter a natural number, n: ";
cin >> n;
//Displaying result
for (int i = 1; i <= n; ++i) {
sum += i;
}
cout << "Sum of natural numbers between 1 to " << n << " = " << sum << endl;
return 0;
}

