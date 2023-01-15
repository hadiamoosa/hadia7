#include<iostream>
using namespace std;
float checkCost(string city,string product,int quantity);
main()
{
    string city;
    string product;
    int quantity;
    float output;
    cout<< "Enter city name: ";
    cin>>city;
    cout<< "Enter product name: ";
    cin>>product;
    cout<< "Enter quantity: ";
    cin>>quantity;
    output=checkCost(city,product,quantity);
    cout<<"Output willbe: "<<output;

}



float checkCost(string city,string product,int quantity)
{
   float output;
   if(product =="coffee"&& city=="varna")
   {
    
        output=0.45*quantity;
    }

  else if (product== "coffee" && city == "sofia")
{
    output= 0.50*quantity;
}
    else if (product== "coffee" && city=="Plovdiv")
{
    output=0.40*quantity;
}
else if (product == "water"&& city=="sofia")
{
    output=0.80*quantity;
}
else if (product== "water"&& (city=="Plovdiv"|| city=="varna"))
{
    output = 0.70*quantity;
}
else if (product == "beer"&& city == "sofia")
{
    output= 1.20*quantity;
}
else if (product == "beer"&& city =="Plovdiv")
{
    output= 1.15*quantity;
}
else if (product=="beer" && city == "varna")
{
    output= 1.10*quantity;
}
else if (product == "sweets"&& city == "sofia")
{
    output=1.45*quantity;
}
else if (product == "sweets"&& city == "Plovdiv")
{
    output= 1.30*quantity;
}
else if (product=="sweets"&& city=="varna")
{
    output=1.35*quantity;
}
else if (product == "peanuts"&& city =="sofia")
{
    output=1.60*quantity;
}
else if(product == "peanuts"&& city == "Plovdiv")
{
    output=1.50*quantity;
}
else if(product == "peanuts" && city == "varna")
{
    output=1.55*quantity;
}
    
   
   return output;
}
