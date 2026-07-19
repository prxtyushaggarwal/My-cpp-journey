#include<iostream>
//#include<iomanip>
       int main()
       {
        float number10 {5.6};
        float number11{};
        float number12{};
        float result(number10/number11);
        std::cout<<number10<<" / "<<number11<<" yields "<<result<<std::endl;
         std::cout<<number10 /number11<<" + "<<number11<<" yields "<<result + number11<<std::endl;
        float number4{11.924743265444};
        //std::cout<<std::setprecision(10)<<std::endl;
        std::cout<<"number 4 is:"<<number4<<std::endl;
        return 0;
       }