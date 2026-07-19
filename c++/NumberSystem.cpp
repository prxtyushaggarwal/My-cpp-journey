#include<iostream>
int main(){
    int number1=15;             //decimal
    int number2=017;            //octal
    int number3=0x0F;           //hexadecimal
    int number4=0b0001111;       //binary
    std::cout<<number1<<std::endl;
    
     std::cout<<number2<<std::endl;
     //SO OCTAL SYSTEM ARE BASE TO 8 WHICH WORK AS FOLLOWS ->  1*8^1 + 7*8^0 =15
      std::cout<<number3<<std::endl;
      //HEXADECIMAL SYSTEM ARE BASE TO 16 WRT TO DECIMALS -> 0*16^1 + 15*16^0 =15 , F ACCOUNTS TO 15 IN HEX 
       std::cout<<number4<<std::endl;
   
return  0;
}