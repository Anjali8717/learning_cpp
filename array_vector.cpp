#include <iostream>
using namespace std;
int main(){
    int marks[5] = {10, 20, 30, 40, 50};
    int size = 5;
    // cout<<marks[2]<<endl;
    for(int i = 0; i<size; i++){
        cout<<marks[i]<<endl;
    }
    return 0;
}

#include <iostream>
using namespace std;
int main(){
    int marks[5];
    int size = 5;

    for(int i = 0; i<size; i++){
        cin>>marks[i];
    }
    // cout<<marks[2]<<endl;
    for(int i = 0; i<size; i++){
        cout<<marks[i]<<endl;
    }
    return 0;
}

// WAP to find the smallest value in array
#include <iostream>
using namespace std;
int main(){
    int nums[] = {10, 30, -5, 3, 2};
    int size = 5;
    int smallest = INT8_MAX;
    for(int i = 0; i< size; i++){
        if(nums[i] < smallest){
            smallest = nums[i];
        }
    }
    cout<<"Smallest number is : "<< smallest<<endl;
    return 0;
}

// WAP to find the index of value
#include <iostream> 
using namespace std;

int linearSearch(int size, int arr[], int target){
    for(int i = 0; i<size; i++){
        if(arr[i] == target){
            return i;
        }
    }
    return -1;
}

int main(){
int arr[] = {20, 1, 5, 8, 34};
int size = 5;
int target = 30;
cout<<linearSearch(size, arr, target);
return 0;
}

// WAP to swap the values 
#include <iostream>
using namespace std;

int reversearray(int arr[], int size){
    int start = 0, end = size-1;
    while(start<end){
        swap(arr[start], arr[end]);
        start ++;
        end --;
    }
    return  0;
}

int main(){
    int arr[] = {20, 42, 35, 45, 38};
    int size = 5;
    reversearray(arr, size);
    for(int i = 0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}

//  studying some vector functions
#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> vec;

    vec.push_back(25);
    vec.push_back(35);
    vec.push_back(45);
    vec.push_back(55);
    vec.push_back(65);
    cout<<"After push_back size ="<< vec.size()<<endl;
    vec.pop_back();
    
    for(int val : vec){
        cout<<val<<endl;
    }
    return 0;

}