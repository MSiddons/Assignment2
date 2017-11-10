// code produced by Martin Siddons

#include <iostream>
#include <vector>

using namespace std;

bool same_elements(vector<int> a, vector<int> b);
int element_count(vector <int> a, int i, int c);


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
	return 0;
}

bool same_elements(vector<int> a, vector<int> b)
{
	int count1 = 0, count2 = 0;
	if (a.size() == b.size())
	{
		for (unsigned i = 0; i < a.size(); i++)
		{
			int d = a[i];
			if (element_count(a, d, count1) != element_count(b, d, count2))
				return false;
		}
		return true;
	}
	else
		return false;
}

int element_count(vector<int> a, int d, int c)
{
	for (unsigned n = 0; n < a.size(); n++)
	{
		if (d == a[n])
			c++;
	}
	return c;
}