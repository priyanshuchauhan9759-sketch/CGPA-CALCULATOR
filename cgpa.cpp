#include<iostream>
using namespace std;
int main()
{
    int i;
    int n;
    float grade,total_points=0,total_credits=0;
    cout<<" Enter the number of courses :";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        int credit_hours;
        float grade;
        string sub;
        cout<<"enter the name of subject"<<i<<":";
        cin>>sub;
        cout<<endl;
        cout<<"enter the credit_hours :";
        cin>>credit_hours;
        cout<<endl;
        cout<<"enter grade of the subject:";
        cin>>grade;
        cout<<endl;
        total_points+=(grade*credit_hours);
        total_credits+=credit_hours;    
    }
        float CGPA;
        CGPA=(total_points/total_credits);
        cout<<"Your CGPA is : "<<CGPA <<endl;

    return 0;

}