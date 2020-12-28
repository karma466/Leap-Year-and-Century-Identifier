#include <iostream>

using namespace std;

int main()
{


    int i = 0;
    while(i<10){

    int year;

    std::cout<<"Enter the year you want to check:\n";
    std::cin>>year;

    if(year>100 && year%4==0 && year%100==0 && year%400==0){

     std::cout<<"Its a century and a leap year\n";
     std::cout<<"\n";


    }else if(year>100 && year%100!=0 && year%4==0){


     std::cout<<"Its not a century but is a leap year.\n";
     std::cout<<"\n";

    }else{

     std::cout<<"Its not a leap or a century year.\n";
     std::cout<<"\n";

    }

    i++;
    }
}
