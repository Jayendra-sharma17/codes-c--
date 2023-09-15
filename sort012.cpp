#include<iostream>
using namespace std;

void printArray(int arr[], int n) {
    for(int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void sortOne(int arr[], int n) {

    int left = 0, right = n-1;

    // while(left < right) {

    //     while(arr[left] == 0 && left < right )  {
    //         left++;
    //     }

    //     while(arr[right]==1 && left < right){
    //         right--;
    //     }

    //     //agar yha pohoch gye ho, iska matlab
    //     //arr[left]==1 and arr[right]==0
     
    // }

       while(left<right)
        {
            swap(arr[left], arr[right]);
            left++;
            right--;
        }

}

int main() {

    int arr[9] = {0,1,0,2,2,1,0,2,1};

    sortOne(arr, 9);
    printArray(arr, 9);


    return 0;
}