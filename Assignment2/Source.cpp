// Project by Martin Siddons

#include <iostream>
#include <vector>

using namespace std;

bool same_elements(vector<int> a, vector<int> b);
bool element_compare(vector <int> a, vector<int> b);


int main()
{
	vector <int> num1, num2;
	int numIn = 1;
	cout << "Please enter integer numbers, ending with a 0: ";
	while (numIn != 0)
	{
		cin >> numIn;
		num1.push_back(numIn);
	}
	numIn = 1;
	cout << "Please enter integer numbers, ending with a 0: ";
	while (numIn != 0)
	{
		cin >> numIn;
		num2.push_back(numIn);
	}
	num1.pop_back();
	num2.pop_back();

	if (same_elements(num1, num2) == true)
		cout << "The two sequences are identical." << endl;
	else
		cout << "The two sequences are not identical." << endl;;
}

bool same_elements(vector<int> a, vector<int> b)
{
	if (a.size == b.size)
	{

		return true;
	}
	else
		return false;
}

bool element_compare(vector<int> a, vector<int> b)
{
	for (int i=0; i<a.size; i++)
		if (a[i] )
	return false;
}
