#include <iostream>
#include <vector>
using namespace std; 

vector <int> findMode(int nums[], int size);
void showValues(vector<int>mode);
void showValues(vector<int>mode)
{
	for (int count = 0; count < mode.size(); count++)
		cout << mode[count] << "  ";
	cout << endl;
}
int main()
{
	int const size = 8;
	int modeArray[size] = { 2, 5, 2, 4, 5, 5, 2, 7};
	vector<int> mode = findMode(modeArray, size);
	cout << "The mode is:" << mode[0] << endl;
	cout << "The mode is:" << mode[1] << endl;
	/*cout << "count is:"<< findMode(modeArray, size)<<endl;*/
	showValues(mode);
	
#if _DEBUG
	cout<<"end, press key to close";
	getchar();
#endif 

	return 0; 
}