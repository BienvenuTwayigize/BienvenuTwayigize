#include <iostream>
#include <cmath>
using namespace std;
float mycalculator(float a,float b){
	float add;
	add=a+b;
	return (add);
}
float mycalculo(float a, float b){
	float subs;
	subs=a-b;
	return (subs);
}
float mycalc(float a, float b){
 float multi;
 multi=a*b;
 return (multi);
}
float mycalcul(float a, float b){
 float div;
 div=a/b;
 return (div);
}
int main(){
	float a,b,division,multiplication,substraction,addition;
	cout<<"Input the first number: ";
	cin>>a;
	cout<<"Input the second number: ";
	cin>>b;
	addition=mycalculator(a,b);
	cout<<a<<" + "<<b<<" = "<<addition<<endl;
	substraction=mycalculo(a,b);
	cout<<a<<" - "<<b<<" = "<<substraction<<endl;
	multiplication= mycalc(a,b);
	cout<<a<<" * "<<b<<" = "<<multiplication<<endl;
	division= mycalcul(a,b);
	cout<<a<<" / "<<b<<" = "<<division<<endl;
	
	return 0;
}





