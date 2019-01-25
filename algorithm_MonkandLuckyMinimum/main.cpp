#include <iostream>

using namespace std;

void malm_Algorithm(long input_data[], int length)
{
	int m_Size = 0;
	int m_Min = 100000000000000000;
	int m_MinCount = 0;

	////show input_data
	//for (m_Size = 0; m_Size < length; m_Size++)
	//	cout << input_data[m_Size] << endl;

	//find min
	for (m_Size = 0; m_Size < length; m_Size++)
	{
		if (input_data[m_Size] < m_Min)
		{
			m_Min = input_data[m_Size];
			m_MinCount = 1;
		}
		else if (input_data[m_Size] == m_Min)
			m_MinCount++;
	}
	
	//find min is odd or even
	if (m_MinCount % 2 == 0)
		cout << "Unlucky" << endl;
	else
		cout << "Lucky" << endl;

}

int main()
{
	int testcase = 0;
	int length = 0;
	long arr[100000] = { 0, };

	cin >> testcase;

	for (int i = 0; i < testcase; i++)
	{
		cin >> length;
		for (int i = 0; i < length; i++)
			cin >> arr[i];

		malm_Algorithm(arr, length);
	}

	return 0;
}