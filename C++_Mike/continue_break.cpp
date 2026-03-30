#include<iostream>


int main(){
    for(int i=0;i<10;i++){
        std::cout<<"Loop start"<<std::endl;
        continue;
        std::cout<<i<<std::endl;
    }
}