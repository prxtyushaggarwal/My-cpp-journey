#include<iostream>
#include<string>            //   WE USE <STRING> TO STORE STRINGS IN CPP
int main(){
   int age ;
    std::string name;
    std::cout<<"please enter your name and age"<<std::endl;
    std::cin>>name>>age;
    std::cout<<"hello "<<name<<" you are "<< age<<" years old!";
    return 0;

    int age1;
    std::string full_name;
    std::cout<<"please enter your name and age"<<std::endl;
    // IT HELPS IN STORING SPACES AND GIVING OUTPUT 
    std::getline(std::cin,full_name);
    std::cin>>age1;
    std::cout<<"hello "<< full_name<<" you are "<< age1<<" years old!";
    return 0;
}
