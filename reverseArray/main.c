    #include <stdio.h>

    int main()
    {
       int elements_no; // size of array
       int cnt; // counter
       int cnt1; // counter 1
       int arr_org[100]; // store original array
       int arr_temp[100]; // store temp array

       printf("Enter the number of elements in array\n");
       scanf("%d", &elements_no);

       printf("Enter array elements\n");

       for (cnt = 0; cnt < elements_no ; cnt++) // store elements in original array
          scanf("%d", &arr_org[cnt]);

       for (cnt = elements_no - 1, cnt1 = 0; cnt >= 0; cnt--, cnt1++) // Copying elements into temp array
          arr_temp[cnt1] = arr_org[cnt];                              //  starting from end of original array [reversing]

       for (cnt = 0; cnt < elements_no; cnt++)                        // Copying reversed array into original array
          arr_org[cnt] = arr_temp[cnt];

       printf("Reversed elements are\n");

       for (cnt = 0; cnt < elements_no; cnt++)
          printf("%d\n", arr_org[cnt]);

       return 0;

    }
