#include<iostream>
#include<vector>
using namespace std;

int main()
{
	vector<int> mytest = { 1,8,60,20,6,36,58,74,21,25};
	int len = mytest.size();
	for (int i = 1; i < len; i++)
	{
		int key = mytest[i];
		int j = i - 1;
		while ((j >= 0) && key < mytest[j])
		{
			mytest[j + 1] = mytest[j];
			j--;
		}
		mytest[j + 1] = key;
	}
	for (auto i : mytest)
	{
		cout << i << " ";
	}
	return 0;
}
