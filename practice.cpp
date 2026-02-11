#include <iostream>
 using namespace std;
/* This a programme that calculates BMI of a person based on the info they input in the progrmame . */
 int main()
 {
 
float weight , height ;
 
cout << "Enter your weight in kg: ";
cin >> weight ;
cout << "You are " << weight << " kg." << endl;
cout << "Enter your height in cm :"<< endl;
cin >> height ;
cout << "You are " << height << " cm tall." << endl;
float height2 = height * height ;
float BMI = (weight / height2)*10000 ; 
cout << "Your BMI is " << BMI << "." << endl; 
  cout << "A BMI scale categorizes weight status for adults (20+) as Underweight (<18.5), Normal (18.5-24.9), Overweight (25-29.9), and Obese (≥30)" ;
    return 0;
}




