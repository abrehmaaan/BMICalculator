#include<iostream>
using namespace std;
int main(){
	double weight, height;
	cout<<"Enter weight in pounds: ";
	cin>>weight;
	cout<<"Enter height in inches: ";
	cin>>height;
	double bmi = (weight*703)/(height*height);
	cout<< "The body mass index is: "<<bmi<<endl;
	if(bmi<18.5){
		cout<<"Underweight"<<endl;
	}
	else if(bmi>=18.5&&bmi<25){
		cout<<"Normal"<<endl;
	}
	else if(bmi>=25&&bmi<30){
		cout<<"Overweight"<<endl;
	}
	else{
		cout<<"Obese"<<endl;
	}
	return 0;
}
