#include<iostream>
using namespace std;
class teacher{
public:
    string name;
    int age;
    string gender;
    int hra;
    int ta;
    int tax;
public:
    double salary;
    
//setter
    void setsalary(double s){
        salary=s;
    };
//getter
    double getsalary(){
        hra=salary*0.02;
        ta=salary*0.01;
        tax=salary*0.5;
        salary=salary+hra+ta-tax;
        cout<<"hra is:"<<hra<<endl<<"ta is:"<<ta<<endl<<"tax is:"<<tax<<endl;
        return salary;
    };
    void changeage(){
        age=age+1;
        };
    void changegender(){
        if (gender=="female"){
            gender="male";
        }
        else if(gender=="male"){
            gender="female";
        }
        else{
            gender="notdefined";
        }
    }
};
    
int main(){
    teacher t1;
    cout<<"enter the name of teacher:";
    cin>>t1.name;
    cout<<"enter the age of teacher:";
    cin>>t1.age;
    cout<<"enter the gender of teacher:";
    cin>>t1.gender;
    cout<<"enter the salary of teacher:";
    cin>>t1.salary;
    
  //  t1.setsalary(250000);
    cout<<t1.name<<endl;
    t1.changeage();
    t1.changegender();
    cout<<t1.age<<endl;
    cout<<t1.gender<<endl;
    cout<<t1.getsalary()<<endl;
    
    return 0;
};