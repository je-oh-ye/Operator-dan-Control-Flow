#include<iostream>
using namespace std;

int main()
{	
	int number;
	
	for(number=1; number <= 50; number++)
	{
        if(number%3 == 0 && number%5 == 0){
            cout << "fizz buzz, ";
        }else if(number%3 == 0){
            cout << "fizz, ";
        }else if(number%5 == 0){
            cout << "buzz, ";
        }else{
		cout << number << ", ";
        }
	}
	
 	return 0;
}