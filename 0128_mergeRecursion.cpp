#include <iostream>
using namespace std;

void print(int *arr, int size) {
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void merge(int *arr, int start, int end) {

    cout << "\n==============================";
    cout << "\nMERGE CALLED";
    cout << "\nstart = " << start;
    cout << "\nend   = " << end;

    int mid = start + (end - start) / 2;
    cout << "\nmid   = " << mid << endl;

    int len1 = mid - start + 1;
    int len2 = end - mid;

    cout << "len1 = " << len1 << endl;
    cout << "len2 = " << len2 << endl;

    int *first = new int[len1];
    int *second = new int[len2];

    // Copy first half
    int mainArrayIndex = start;

    for(int i = 0; i < len1; i++) {
        first[i] = arr[mainArrayIndex];
        mainArrayIndex++;
    }

    // Copy second half
    mainArrayIndex = mid + 1;

    for(int i = 0; i < len2; i++) {
        second[i] = arr[mainArrayIndex];
        mainArrayIndex++;
    }

    cout << "\nFirst Array : ";
    print(first, len1);

    cout << "Second Array: ";
    print(second, len2);

    // Merge
    int index1 = 0;
    int index2 = 0;
    mainArrayIndex = start;

    while(index1 < len1 && index2 < len2) {

        if(first[index1] < second[index2]) {
            arr[mainArrayIndex] = first[index1];
            index1++;
        }
        else {
            arr[mainArrayIndex] = second[index2];
            index2++;
        }

        mainArrayIndex++;
    }

    while(index1 < len1) {
        arr[mainArrayIndex] = first[index1];
        index1++;
        mainArrayIndex++;
    }

    while(index2 < len2) {
        arr[mainArrayIndex] = second[index2];
        index2++;
        mainArrayIndex++;
    }

    cout << "\nArray After Merge : ";
    print(arr, end + 1);

    delete [] first;
    delete [] second;
}

void mergeSort(int *arr, int start, int end) {

    cout << "\n--------------------------------";
    cout << "\nmergeSort(" << start << ", " << end << ")" << endl;

    if(start >= end) {
        cout << "Base Case Reached\n";
        return;
    }

    int mid = start + (end - start) / 2;

    cout << "Left  -> (" << start << ", " << mid << ")" << endl;
    cout << "Right -> (" << mid + 1 << ", " << end << ")" << endl;

    mergeSort(arr, start, mid);

    mergeSort(arr, mid + 1, end);

    merge(arr, start, end);
}

int main() {

    int arr[5] = {2,5,1,6,9};

    cout << "Original Array : ";
    print(arr,5);

    mergeSort(arr,0,4);

    cout << "\n\nFinal Sorted Array : ";
    print(arr,5);

    return 0;
}