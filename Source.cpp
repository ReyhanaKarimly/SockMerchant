#include <iostream>
#include <cstdio>
#include <algorithm>
#include <set>
#include <vector>
using namespace std;

int sockMerchant(int n, vector <int> ar,set<int> socks) {
	// Complete this function
	int count = 0;
	int pair = 0;
	for (auto i : socks)
	{


		count = 0;
		for (size_t j =0; j < ar.size(); j++)
		{
			if (i== ar[j])
			{
				count++;
				

			}
			

		}

		//if (count % 2 == 0)
			pair+=count/2;
	}
	//cout << count << endl;
	return pair;
}

int main() {
	int n;
	set<int> socks;
	cin >> n;
	vector<int> ar(n);
	for (int ar_i = 0; ar_i < n; ar_i++) {
		cin >> ar[ar_i];
		socks.insert(ar[ar_i]);
		
	}
	int result = sockMerchant(n, ar,socks);
	cout << result << endl;
	system("pause");
	return 0;
}