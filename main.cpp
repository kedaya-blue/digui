#include "pch.h"
#include "iostream"
using namespace std;

double Factorial(int n) {
	double f=1;
	for (int i = 1; i < n + 1; i++) {
		f *= i;
	}
	return f;
}
static double Fomula(int n,int x) {
	double m = 1;
	double ans;
	while (n > 0&&pow(x,n)/double(Factorial(n))>0.000001) {
		ans = pow(x, n) / double(Factorial(n));
		m = m + ans;
		n--;
	}
	return m;
}
int main()
{
	int n;
	int x=0;
	cin >> n>>x;
	cout<<Fomula(n,x);
}
