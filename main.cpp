#include <iostream>
#include <array>
using namespace std;

int main() {
    // Write C++ code here
    array<int,9> arr= {1,2,2,3,4,4,5,5,6};
    cout << "Original Array: ";
    for(int i = 0; i < arr.size(); i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    //we initialize left pointer at index 1
    int l = 1;
    // //we create a for loop iterating through index 1 uptil last
    for(int r = 1; r < arr.size(); r++)
    {
        if(arr[r] != arr[r-1])
        {
            arr[l] = arr[r];
            l++;
        }
    }

    cout << "The size of the array after removing duplicates :" << l << endl;
    cout << "Array without duplicates: ";
    for(int i = 0; i < arr[l]; i++){
        cout << arr[i] << " ";
    }
    return 0;
}
