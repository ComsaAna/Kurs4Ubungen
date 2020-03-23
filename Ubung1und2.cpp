#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

template <typename T>


T add(T array[], int start, int end, T Anfangswert)
{
	int s = Anfangswert;
	for (int i = start;i < end;i++)
	{
		s = s + array[i];
	}
	return s;
}

template <typename T>

T sumalambda(T v[], int start, int end, T Anfangswert)
{
	vector <T> array;

	while (start <= end)
	{
		array.push_back(v[start]);
		start++;
	}
	Anfangswert = 0;
	std::for_each(array.begin(), array.end(), [&Anfangswert](T aux)
	{
		Anfangswert = Anfangswert + aux;
	});
	return Anfangswert;
}

int main()
{
	int v[256] = { 1,2,5,8,9 };
	int sum = sumalambda<int>(v, 0, 5, 0);
	cout << sum;
	int size = 5;
	int vector1[] = { 1,1,1,1 };
	cout << "Die Summe von Elementen ist: " << add<int>(vector1, 0, size, 6);
	return 0;
}

