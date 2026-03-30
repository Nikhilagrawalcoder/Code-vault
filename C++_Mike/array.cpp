#include<iostream>
#include<iterator>
#include<numeric>

#include<array>
int main(){

// int ids[100];//raw array
    std::array<int,100>ids; // stl array
std::iota(std::begin(ids),std::end(ids),11);

ids.at(99)=9;
   for(int i=0;i<100;i++){
    std::cout<<ids[i]<<std::endl;
   }
}