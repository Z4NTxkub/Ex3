#include<iostream>
#include<string>
using namespace std;
int main()
{	float weight;
	float height;
	cout << "Enter weight : ";
	cin >> weight;
	cout << "Enter height : ";
	cin >> height;
	cout <<"*******Output*******\n";  
	cout <<"BMI = "<< weight/((height/100) * (height/100)) <<endl;
	system ("pause");
	return(0);
}