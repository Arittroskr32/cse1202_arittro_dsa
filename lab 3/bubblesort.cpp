#include<bits/stdc++.h>
using namespace std;

void bubbleSort(int array[], int size) {
  int i, j; 
    for (i = 0; i < size - 1; i++) 
        for (j = 0; j < size - i - 1; j++) 
            if (array[j] > array[j + 1]) 
                swap(array[j], array[j + 1]); 
}

// print an array
void printArray(int array[], int size) {
  for (int i = 0; i < size; ++i) {
    cout << "  " << array[i];
  }
  cout << "\n";
}

int main() {
  int data[] = {-2, 45, 0, 11, -9};
  int size = sizeof(data) / sizeof(data[0]);
  
  bubbleSort(data, size);  
  cout << "Sorted Array in Ascending Order:\n";
  printArray(data, size);
}