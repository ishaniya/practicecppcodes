#include<bits/stdc++.h>
using namespace std;

// Prints roots of quadratic equation ax*2 + bx + x
void findRoots(int a, int b, int c)
{
// If a is 0, then equation is not quadratic, but
// linear
if (a == 0)
{
cout << "Invalid";
return;
}

int d = b*b - 4*a*c;
double sqrt_val = sqrt(abs(d));

if (d > 0)
{	int p,q;
	cout << "Real and distinct \n";
	p=(double)(-b - sqrt_val)/(2*a);
	q=(double)(-b + sqrt_val)/(2*a);
	cout<<min(p,q)<<" "<<max(p,q);
}
else if (d == 0)
{
	cout << "Real and Equal \n";
	cout << -(double)b / (2*a);
}
else // d < 0
{
	cout << "Imaginary";
}
}

// Driver code
int main()
{
int a , b , c;
cin>>a>>b>>c;

findRoots(a, b, c);
return 0;
}
