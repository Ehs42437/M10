#ifndef SORTINGHEADERS_H_INCLUDED
#define SORTINGHEADERS_H_INCLUDED

extern void SelectionSort(int *pArr,int NoofElements);
extern void BubbleSort(int *pArr,int NoofElements);
extern void MergeSort(int *pArr);
extern void Merge(int *pLeft ,int *pRight,int *pArr,int NL,int NR ,int N);
extern void swap(int *parr2, int *parr1);
extern void printArray(int *pArr,int NoofElements);



#endif // SORTINGHEADERS_H_INCLUDED
