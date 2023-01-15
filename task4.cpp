#include<iostream>
using namespace std;
string speedInfo (float speed );
main()

{
    float speed;
    string info;
    cout<< "Enter speed";
    cin>>speed;
    info =speedInfo (speed );
    cout<< "Speed info is:"<<info;
   
}
string speedInfo (float speed )
  
{    string info;
    if (speed<= 10)
    {
   info = "Slow";
  
    }
    else if (speed>=10 && speed<=50)
    {
        info = "Average";
       
    }
    else if (speed>=50 && speed<=150)
    {
        info = "Fast";
       
    }
    else if (speed>=150 && speed<=1000)
    {
      info = "Extremely fast";
      
    }
    return info;
    
}

