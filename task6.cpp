#include<iostream>
using namespace std;
float lowestprice(string time,float kilometers);
main()

{
float kilometers;
string time;

    cout<< "Enter kilometers";
    cin>>kilometers;
    float fare;
    cout<< "Enter day time";
    cin>>time;
    fare=lowestprice(time,kilometers);
    cout<<"Lowest price"<<fare;
}
float lowestprice(string time,float kilometers)
{   
    if (time=="day" && kilometers<20)
    {
       return 0.70+(0.79*kilometers);

    }
    else if (time=="night" && kilometers<20)
    {
        return 0.70+(0.90*kilometers);
    }
    else if (time=="day"||(time=="night" && (kilometers<=20 && kilometers>=100)))
    {
        return (0.09*kilometers) ;
    
    }
    else if (time=="day"|| time == "night" && (kilometers>100))
    {
        return (0.06*kilometers);
    }
   return 0;
}
