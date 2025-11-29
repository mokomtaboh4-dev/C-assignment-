#include <iostream>
#include <cmath>
using namespace std;

	void quadraticroots (double a, double b, double c){
	
	if ( a == 0) {
	cout << "this is not a quadratic equation (a must not be 0)." <<endl;
	return;
	}
	double discriminant = b*b - 4*a*c;
	if (discriminant > 0) {
		double r1 = (-b + sqrt(discriminant)) / (2 * a);
		double r2 = (-b - sqrt(discriminant)) / (2 * a);
	cout << "roots are real and distinct:" << endl;
	cout << "root 1 = " << r1 << endl;
	cout << "root 2 =" << r2 << endl;
	}
	else if (discriminant == 0) {
		double r = -b/(2 * a);
    cout << "roots are real and equal:" << endl;
    cout << "root = " << r << endl;
	}
	else {
		double realpart = -b / (2 * a);
		double imagpart = sqrt(-discriminant) / (2 * a);
	cout << "roots are complex:"<< endl;
	cout << "root 1 = " << "realpart" << '+' << "imagepart" << 'i' << endl;
	cout << "root 2 = " << "realaprt" << '-' << "imagepart" << 'i' <<endl;
	}
}
int main() {
	double a, b, c;
	cout << "Enter coefficient a, b, and c:";
	cin >> a >> b >> c;
	quadraticroots(a, b, c); 
}