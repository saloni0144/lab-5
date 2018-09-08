//Library
#include <iostream>
using namespace std;
//Finding the number of days in given month
int main() {
int x;
cout <<"To find the number of days in a month."<< endl;
//Asking for input
cout <<"Enter month number: ";
cin >> x;
//Displaying result
cout <<"The month has ";
if (x==2) {
cout <<"28 or 29 days, depending on the year."<< endl;
}
else { if (x==4 || x==6 || x==9 || x==11) {
cout <<"30 days."<< endl;
}
else {
cout <<"31 days."<< endl;
}
}
return 0;
}
