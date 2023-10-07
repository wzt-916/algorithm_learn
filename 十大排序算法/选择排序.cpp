#include<iostream>
#include<vector>
using namespace std;

int main()
{
	vector<int> mytest = { 1,8,6,20,9,36,58,74,21,25};
	int len = mytest.size();
	for (int i = 0; i < len; i++)
	{
		int arr = i;
		for (int j = i; j < len; j++)
		{
			if (mytest[arr] > mytest[j])
			{
				arr = j;
			}
		}
		swap(mytest[arr], mytest[i]);
	}

	for (auto i : mytest)
	{
		cout << i << " ";
	}
	return 0;
}
