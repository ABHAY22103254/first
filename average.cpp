#include<iostream>
#include<vector>
using namespace std;

int average(vector<int>& arr){
    int n = arr.size();
    int sum =0;
    int mean =0;
    for(int i=0;i<n;i++){
        sum  += arr[i];
    }
    mean = sum/n;
    return mean;
}
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    cout<<"enter the array";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<average(arr);

}
