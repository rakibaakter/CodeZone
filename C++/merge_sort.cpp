#include <iostream>
using namespace std;

//dispaly array
void display(int *array, int size){
    for(int i=0; i<size; i++){
        cout << array[i] << " ";
    }
    cout << endl;

}

//merge sorting
void merge_sort(int *Left, int nL, int * Right, int nR , int *array){
    int i=0, j=0, k=0;

    while(i<nL && j<nR){
        if(Left[i] <= Right[j]){
            array[k] = Left[i];
            i=i+1;
        }
        else{
            array[k] = Right[j];
            j=j+1;
        }
        k=k+1;
    }
    while (i < nL){
        array[k] = Left[i];
        i++;
        k++;
    }
     while (j < nR){
        array[k] = Right[j];
        j++;
        k++;
    }
    cout << "After merge sort: ";
    display(array, nL+nR);

}


//divide the array
void divide(int *main_arr, int n){
    int k=0;
    if(n > 1){
        int mid = n/2, later = n-mid;
        int left_arr[mid], right_arr[later];

        cout << "Left Sub array: ";
        for(int i=0; i<mid; i++){
            left_arr[i]=main_arr[i];
        }
        display(left_arr, mid);
        divide(left_arr, mid);

        cout << "Right Sub array: ";
        for(int j=mid; j<=n; j++){
            right_arr[k]=main_arr[j]; 
            k++;
        }
        display(right_arr, later);
        divide(right_arr, later);

        merge_sort(left_arr, mid, right_arr, later, main_arr);
    }
}

int main(){
    int length, val, arr[length];
    cout << "Length: ";
    cin >> length;
    cout << "values: ";
    for(int i=0; i<length; i++){
        cin >> val;
        arr[i]= val;
    }
    cout << "Before sorting: ";
    display(arr, length);
    divide(arr, length);

}