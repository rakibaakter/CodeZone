#include <iostream>
using namespace std;

//dispaly array
void display(int *array, int size){
    // int size = sizeof(array)/sizeof(array[0]);
    for(int i=0; i<size; i++){
        cout << array[i] << " ";
    }
    cout << endl;

}

int partition(int array[], int low, int high) {

  int pivot = array[high];
  int i = (low - 1);

  for (int j = low; j < high; j++) {
    if (array[j] <= pivot) {
      i++;
      int temp = array[i];
      array[i] = array[j];
      array[j] = temp;
    }
  }
  
  int temp = array[i+1];
  array[i+1] = array[high];
  array[high] = temp;
  return (i + 1);
}


void quickSort(int array[], int low, int high) {
  if (low < high) {
    int pi = partition(array, low, high);
    quickSort(array, low, pi - 1);
    quickSort(array, pi + 1, high);
  }
}

int main(){
    int len, val, arr[len];
    cout << "Length: ";
    cin >> len;
    cout << "values: ";
    for(int i=0; i<len; i++){
        cin >> val;
        arr[i]= val;
    }
    cout << "Before sorting: ";
    display(arr, len);
    quickSort(arr, 0, len-1);
  
    cout << "After sorting: \n";
    display(arr, len);
}