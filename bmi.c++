//first c++ program
//calculating bmi
#include <iostream>
int main(){
    float weight;
    int height;
    float bmi;
cout<<"please enter your weight:";
cin>>weight;
cout<<"please enter your height:";
cin>>height;
bmi=weight/(height*height)
cout<<"your bmi is"<<bmi<<"kg/m^2"<<endl;
if(bmi<18.5){
    cout<<"underweight"<<endl;}
else if(bmi>=18.5 && bmi<25.0){
    cout<<"you have a healthy weight";}
else if(bmi>=25.0 && bmi<=29.9){
    cout<<"you are over weight";}
else{
    cout<<"you are obese";}
    return 0;
}
