#include<iostream>
using namespace std;
class hospital{                     //base class
    public:                         //access specifier-public
    string name;                    //creating attributes
    int staff;
    int beds;
    int ott;
    string facilities;
    void getvalues(){               //setter(a function for getting values)
    cout<<"enter the name of hospital: ";
    cin>>name;
    cout<<"enter the number of staff in hospital: ";
    cin>>staff;
    cout<<"enter the number of beds in hospital: ";
    cin>>beds;
    cout<<"enter the number of operation theatre in hospital: ";
    cin>>ott;
    cout<<"enter the facilities of hospital: ";
    cin>>facilities;
    };
    void displayvalues(){           //getter(a function for displaying values)
        cout<<name<<endl;
        cout<<staff<<endl;
        cout<<beds<<endl;
        cout<<ott<<endl;
        cout<<facilities<<endl;
    };
};
class doctors:public hospital{      //derived class from base class
    public:                         //access specifier  
    string name;                    //creating attributes
    int age;
    string gender;
    string qualification;
    int experience;
    string speciality;
    
    void getvalues(){               //setter(a function for getting values)
        cout<<"enter the name of doc: ";
        cin>>name;
        cout<<"enter the age of doc: ";
        cin>>age;
        cout<<"enter the gender: ";
        cin>>gender;
        cout<<"enter the qualification of doc: ";
        cin>>qualification;
        cout<<"enter the doc's speciality: ";
        cin>>speciality;
    };
    
    void displayvalues(){       //getter(a function for displaying values)
        cout<<name<<endl;
        cout<<age<<endl;
        cout<<gender<<endl;
        cout<<qualification<<endl;
        cout<<speciality<<endl;
    }
};
int main(){                         //main function
    hospital h1;                    //creating object for base class
    h1.getvalues();                 //calling setter function using object
    h1.displayvalues();             //calling getter function using object
    
    doctors d1;                     //creating object1 for derived class
    d1.getvalues();                 //setter calling
    d1.displayvalues();             //getter calling
    
    doctors d2;                     //creating object2 for derived class
    d2.getvalues();                 //setter calling
    d2.displayvalues();             //getter calling
    
    return 0;
};