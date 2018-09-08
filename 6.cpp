//Library
#include <iostream>
using namespace std;
//Finding out whether given year is leap year or not
int main() {
int y;
cout <<"To find out whether a year is a leap year or not."<< endl;
//Asking for input
cout <<"Enter year: ";
cin >> y;
int a = y%4;
int b = y%100;
int c = y%400;
//Displaying result
cout <<y<< " is ";
if ((a==0 && b==0 && c==0) || (a==0 && b!=0)) {
cout <<"a leap year."<< endl;
}
else {
cout <<"not a leap year."<< endl;
}
return 0;
}
