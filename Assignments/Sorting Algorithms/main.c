	#include <stdio.h>
	#include <stdlib.h>

	unsigned char flag = 1;
	void swapVar(int *n1, int *n2){
        int backUp = 0;
        backUp = *n2;
        *n2 = *n1;
        *n1 = backUp;
    }

    void printArr(int *hPtr, int arrSize)
    {
    	int i = 0;

		for(i = 0; i < arrSize; i++)
		{
			printf("%d", *(hPtr+i));
		}
		printf("\n");
    }

    void selectionSort(int *sPtr, int arrSize,  unsigned char seq)
    {
    	// seq = 0 == descending
    	// seq = 1 == ascending
        int i = 0;
        int j = 0;

		if(seq)
		{
			for(i = 0; i < arrSize; i++)
			{
				for(j = i; j < arrSize; j++)
				{
					if(*(sPtr+j) < *(sPtr+i))
					{
						swapVar((sPtr+j), (sPtr+i));
					}
				}
			}
		}
		else
		{
			for(i = 0; i < arrSize; i++)
			{
				for(j = i; j < arrSize; j++)
				{
					if(*(sPtr+j) > *(sPtr+i))
					{
						swapVar((sPtr+j), (sPtr+i));
					}
				}
			}
		}
		printf("--Selection Sort--\n");
    }

    void bubbleSort(int *bPtr, int arrSize, unsigned char seq)
    {
		int i =0;
		int j =0;

		if(seq)
		{
			for(i =0; i < (arrSize-1); i++)
			{
				for(j = 0; j < (arrSize-1-i); j++)
				{
					if(*(bPtr+(j+1)) < *(bPtr+j))
					{
						swapVar((bPtr+j), (bPtr+(j+1)));
					}
				}
			}
		}
		else
		{
			for(i =0; i < (arrSize-1); i++)
			{
				for(j = 0; j < (arrSize-1-i); j++)
				{
					if( *(bPtr+j) < *(bPtr+(j+1)))
					{
						swapVar((bPtr+j), (bPtr+(j+1)));
					}
				}
			}
		}
		printf("--Bubble Sort--\n");
    }

    void mergeSort(int *mPtr, int LSB, int MSB)
	{
		if (LSB < MSB)
		{
			int middlePoint = LSB + (MSB-LSB) / 2;
			int n1 = middlePoint - LSB + 1;
			int n2 =  MSB - middlePoint;
			int leftArr[n1], rightArr[n2];
			int i = 0;
			int j = 0;
			int  k = 0;

			mergeSort(mPtr, LSB, middlePoint);
			mergeSort(mPtr, middlePoint + 1, MSB);

			for (i = 0; i < n1; i++)
			{
				leftArr[i] = *(mPtr + LSB + i);
			}
			for (j = 0; j < n2; j++)
			{
				rightArr[j] = *(mPtr + 1 + middlePoint + j);
			}

			i = 0;
			j = 0;
			k = LSB;
			while (i < n1 && j < n2)
			{
				if (leftArr[i] <= rightArr[j])
				{
					*(mPtr + k) = leftArr[i];
					i++;
				}
				else
				{
					*(mPtr + k) = rightArr[j];
					j++;
				}
				k++;
			}

			while (i < n1)
			{
				*(mPtr + k) = leftArr[i];
				i++;
				k++;
			}

			while (j < n2)
			{
				*(mPtr + k) = rightArr[j];
				j++;
				k++;
			}
		}
		if(flag)
		{
			printf("--Merge Sort--\n");
			flag = 0;
		}
	}

	int main()
	{
		int arr[] = {9, 2, 1, 4, 3, 8, 5, 7, 6, 0};
		int sizeOfArr = sizeof(arr)/sizeof(arr[0]);

//		selectionSort(arr, sizeOfArr,1);
//		printArr(arr, sizeOfArr);

//		bubbleSort(arr, sizeOfArr, 0);
//		printArr(arr, sizeOfArr);

//		mergeSort(arr, 0, sizeOfArr-1);
//		printArr(arr, sizeOfArr);

		return 0;

	}
