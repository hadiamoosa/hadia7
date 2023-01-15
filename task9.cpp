#include<iostream>
using namespace std;
int play(string year,int holidays,int weekends);
main()
{
    int holidays;
     string year;
     int weekends;
     int output2;
     int r1;
     int r2;

    cout<< "Enter number of holidays: ";
    cin>>holidays;
    cout<< "Enter number of weekends";
    cin>>weekends;
    cout <<"Year is: ";
    cin>>year;

     output2= play(year,holidays,weekends);
   

    if (year =="normal")
    {
           r2 = output2;
    }

     else if (year == "leap")
     {
      r1=  output2*0.15;
      r2=  r1 +output2;
     }
     cout<<endl<<r2;
}
int play(string year,int holidays,int weekends)   
{
int output1;
int output2;
output1=(2*holidays)/3;
output2=output1 + 36;
cout<<output2;
return output2;
}
