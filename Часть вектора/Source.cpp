#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void PrintVectorPart(const vector<int>& numbers);

int main()
{
	/*PrintVectorPart({6, 1, 8, -5, 4});
	cout << endl;
	PrintVectorPart({ -6, 1, 8, -5, 4 });  // ничего не выведется
	cout << endl;
	PrintVectorPart({ 6, 1, 8, 5, 4 });
	cout << endl;
	system("pause");*/
	return 0;
}

void PrintVectorPart(const vector<int>& numbers)
{
	auto border = find_if(begin(numbers), end(numbers),
		[](const int& nums)
	{
		return nums < 0;
	});
	
	while (border!=begin(numbers))
	{
		--border;
		cout << *border << " ";
	}
	
}