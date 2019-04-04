#include <iostream>

using namespace std;

int main()
{
	int n;
	cout<< "ingrese el numero que quiera"<< endl;
	cin >> n;
	int contador = 1;
	for (int i=1; i<=n; i++)
		{
		contador *= i;
		}
	cout<< contador << endl;


return 0;
}
