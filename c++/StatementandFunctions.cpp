#include<iostream>
int addnumber(int first,int second){
int result =first+second;
return result ;}

int main(){
    int first_number{25};                              
    int second_number{7};                                                                 
    std::cout<<"first number:"<<first_number<<std::endl;
    std::cout<<"second number:"<<second_number<<std::endl;
    int sum =first_number+second_number;
    std::cout<<"sum;"<<sum<<std::endl;
    sum=addnumber(37,7);
    std::cout<<"sum:"<<sum<<std::endl;
 sum=addnumber(10,5);
 std::cout<<"sum:"<<sum <<std::endl; 
std::cout<<"sum:"<<addnumber(2,3);
}
