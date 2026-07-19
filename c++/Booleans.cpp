#include<iostream>
int main(){
    bool red_light{true};
    bool green_light{false};
    if(red_light){
        std::cout<<"go through"<<std::endl;
    }else{
        std::cout<<"stop!"<<std::endl;
    }
    if(!green_light){
        std::cout<<"the light is not green"<<std::endl;

    }else{
        std::cout<<"the light is green"<<std::endl;
    }
    return 0;
}