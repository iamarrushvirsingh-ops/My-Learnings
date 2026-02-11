#include <iostream>
 using namespace std;

 int main()
 {
 
float weight , height ;
 
cout << "Enter your weight in kg: ";
cin >> weight ;
cout << "You are " << weight << " kg." << endl;
cout << "Enter your height in m :"<< endl;
cin >> height ;
cout << "You are " << height << " m tall." << endl;
float height2 = height * height ;
float BMI = weight / height2 ; 
cout << "Your BMI is " << BMI << "!" << endl; 
    return 0;
}

