#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main(){
    double prin, Rate, annual, inter, total, newBa;
    int year = 1;
    
	cout << "Enter initial loan: ";
	cin >> prin;
	cout << "Enter interest rate per year (%): ";
	cin >> Rate;
	cout << "Enter amount you can pay per year: ";
	cin >> annual;
	
	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
	

while (prin > 0) {
       inter = prin * (Rate / 100);
        total = prin + inter;

        double payment = (total < annual) ? total : annual;
        newBa = total - payment;

	cout << fixed << setprecision(2); 
	cout << setw(13) << left << year; 
	cout << setw(13) << left <<prin;
	cout << setw(13) << left << inter;
	cout << setw(13) << left << total;
	cout << setw(13) << left << payment;
	cout << setw(13) << left << newBa;
	cout << "\n";	
	

        prin = newBa;

        if (prin <= 0) break;
    year++;
    }
    	return 0;
}