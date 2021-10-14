#include<bits/stdc++.h>
#include <chrono>
using namespace std::chrono;
using namespace std;

bool isSmaller(int *arr, int i, int j){
    cout << "Comparing " << arr[i] << " and " << arr[j] << endl;
    
    if (arr[i] < arr[j])
    {
        return true;
    }
    else
    {
        return false;
    }
}

void swap(int *arr, int i, int j){
    cout << "Swapping " << arr[i] << " and " << arr[j] << endl ;
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

void bubbleSort(int *arr,int n)
{
    for (int itr = 1; itr <= n-1; itr++)
    {
        for (int j = 0; j < n - itr; j++)
        {
            if (isSmaller(arr, j + 1, j))
            {
                swap(arr, j + 1, j);
            }
        }
    }
}


int main() {
    int arr[6] ;
    srand(time(0));
    for(int i=0;i<=6;i++) {
        arr[i]=rand() ;
    }

	auto start = high_resolution_clock::now();
	
    bubbleSort(arr,6) ;

    auto stop = high_resolution_clock::now();

    auto duration = duration_cast<microseconds>(stop - start);

        cout << "Time taken by function: "
             << duration.count() << " microseconds" << endl;

        return 0;
}
