	#include <stdio.h>
	#include <stdlib.h>

	int binarySearch(int arr[], int LSB, int MSB, int goal)
	{
		if (MSB >= LSB) {
			int middlePoint = LSB + (MSB - LSB) / 2;

			if (arr[middlePoint] == goal)
			{
				return middlePoint;
			}
			if (arr[middlePoint] > goal)
			{
				return binarySearch(arr, LSB, middlePoint - 1, goal);
			}
			return binarySearch(arr, middlePoint + 1, MSB, goal);
		}
		return -1;
	}

	int main()
	{

		return 0;
	}
