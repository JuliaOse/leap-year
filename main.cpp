#include <iostream>
using namespace std;
int main() {

    //asking for year

        int year;
        cout<<"Enter the year\n";
        cin>>year;


    //checking if its four digits

         if(year<1000 || year >9999){
             cout<<"Please enter a valid year\n";
         }
         /*(the year can be evenly divided by 4) AND
         NOT(the year can be evenly divided by 100) OR
         (the year can be evenly divided by 400) AND
         (the year is evenly divisible by 400)*/
         else if (year%4 == 0 && year%100 !=0 || year % 400 == 0){
        cout<< "It's a leap year!\n";
         }
         else{
        cout<<"It's not a leap year.\n";
         }


}