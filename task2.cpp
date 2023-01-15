#include<iostream>
using namespace std;
float discount (string day,string month,float amount);
main()

{
    string day;
    string month;
    float amount;
    float discountPrice;
  
cout<< "Enter price:";
cin>>amount;
cout<<"Enter month: ";
cin>>month;
cout<< "Enter day: ";
cin>>day;
discountPrice= discount (day,month,amount);
cout<< "Discount price: "<<discountPrice;
    
}

float discount (string day,string month,float amount)
{
    float discountPrice;
    
    if(day == "Sunday"&& (month =="October"|| month =="March" || month == " August") )
    {
    
    
        discountPrice=amount-(amount*0.1);
        

    
    }
  else if (day == "Monday")
  {
    if (month== "November" || month == "December")
    {
         discountPrice=amount-(amount*0.05);
       
    }

  }
else{
discountPrice=amount;

}
 return discountPrice;


}