#include<iostream>
using namespace std;
int main() {
    int frn;
    cout<<"Enter the temperature in fahrenheit: ";
    cin>> frn;
    double celsius = (frn - 32)/1.8;
    cout<< frn<< " F in celsius is "<< celsius<< endl;
    return 0;
}