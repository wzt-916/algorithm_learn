#include<iostream>
#include<vector>
using namespace std;

int main()
{
	vector<int> mytest = { 1,8,6,20,9,36,58,74,2,25};
	int len = mytest.size();
	for (int i = 0; i < len; i++)
	{
		for (int j = 0; j < len - i - 1; j++)
		{
			if (mytest[j] > mytest[j + 1])
			{
				swap(mytest[j], mytest[j + 1]);
			}
		}
	}
	for (auto i : mytest)
	{
		cout << i << " ";
	}
	return 0;
}
