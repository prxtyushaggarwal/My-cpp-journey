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
    std::cout<<std::boolalpha<<std::endl;       //BOOLALPHA CONVERTS THE DEFAULT 0,1 OUTPUT INTO TRUE OR FALSE
    if(red_light   ){
        std::cout<<bool (red_light)<<std::endl;
     }else{
        std::cout<<bool (!red_light)<<std::endl;
    
        }
        if(!green_light){
            std::cout<<bool(green_light)<<std::endl;
    }else
    {
        std::cout<<bool(!green_light)<<std::endl;
    }
    return 0;
}
