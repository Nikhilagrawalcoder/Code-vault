#include<iostream>
#include<array>
#include<algorithm>
int main(){
    // int arr[3]={1,3,5};
    std::array <int,3>are{1,3,5};
    int arr[3];
    std::fill(arr,arr+3,1);
    for(auto& element:arr){
        std::cout<<element<<std::endl;
    }


}