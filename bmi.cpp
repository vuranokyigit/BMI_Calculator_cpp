#include <iostream>
#include<math.h>

using namespace std;

 main()
{
    cout<<"Hello Guys\n";
    cout<<"We are calculate the BMI value for a person.\n";
    
    double weightPerson = 0;
    double heightPerson = 0; 
    
    cout<<"Weight Person (kg):  ";
    cin>>weightPerson;
    cout<<"Height Person (m):  ";
    cin>>heightPerson;
    
    double bmi = weightPerson / pow(heightPerson,2);
    
    if (bmi >= 18.5 && bmi <= 24.9){
        cout<<"Your BMI is like a normal person";
    }else if (bmi >= 25.0 && bmi <= 29.9){
        cout<<"Your BMI is like a heavy person";
    }else if (bmi >= 30.0 && bmi <= 34.9){
        cout<<"Your BMI is like a first degree of obesite person";
    }else if (bmi >= 35.0 && bmi <= 39.9){
        cout<<"Your BMI is like a last degree of obesite person";
    }else{
        cout<<"Your BMI is not include the database. Because you might be extra weak or extra obesite";
    }
    
    


  
}
