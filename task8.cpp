#include<iostream>
using namespace std;
float tickets(int budget,int group);
float remainings(int budget,string type,int group);
main()
{
    int budget;
    string type;
    int group;
    float output2;
    float tkts;
    float result;
    float var1;
    float var2;

    cout<< "Enter budget: ";
    cin>>budget;
    cout<< "Enter type: ";
    cin>>type;
    cout<< "Enter group: ";
    cin>>group;
    output2=tickets(budget,group);
    result =remainings(budget,type,group);




    if (tkts<output2)
    {  
    var1=tkts-output2;
     cout << "Yes! you have  "<< var1 <<"left"<<endl;
    }
    if (tkts>output2)
    {
        var2=output2-tkts;
      cout<< "Not enough money.money left"<< output2<<endl;  
    }
}

float tickets(int budget,int group)
{
    float output1;
    float output2;
    

    
    if (group>=1 && group<=4)
        {
       output1=budget*0.75;
       output2=budget-output1;
        }
     if (group>=5 && group<=9)
        {
        output1=budget*0.60;
        output2=budget-output1;
        }
    if (group>=10 && group<=24)
        {
            output1=budget*0.5;
            output2=budget-output1;
        }
    if (group>=25 && group<=49)
        {
            output1=budget*0.4;
            output2=budget-output1;  
        }
     if (group>=50)
        {
            output1=budget*0.25;
            output2=budget-output1;  
        }

    return output2;
}

float remainings(int budget,string type,int group)

{ float tkts;
if (type== "vip")
{
   tkts=499.99*group;
}
if (type=="normal")
{
    tkts=249.99*group;
}
return tkts;
}