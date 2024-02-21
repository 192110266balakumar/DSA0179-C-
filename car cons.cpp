#include<iostream>
using namespace std;
class car
{
    int model;
    char brand[50];
    double year;
    public:
    car();
    void display();
     
};
 
    car::car()
    {
        cout<<"Enter the model:";
        cin>>model;
        cout<<"Enter the brand:";
        cin>>brand;
        cout<<"Enter the year:";    
        cin>>year;
    }    
 
   void car::display()
    {
        cout<<endl<<model<<"\t"<<brand<<"\t"<<year;
    }
     
int main()
{
    car s;
    s.display();
    return 0;
}
