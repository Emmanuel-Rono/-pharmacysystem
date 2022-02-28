
//#EMMANUEL KIBET <emmanuelkibet@zetech.ac.ke>
 
#include<iostream>
#include<fstream>
//#include<windows.h>
using namespace std;

int main()
{
int stock,quantity,sales,order,category,contact,total,optionstock,howmany,i,stockop2,price,dateofdelivery,optionorder,optionsale;
char name[50],specification[50],customername[20],type[300];
fstream stockfile;
int a = 0,password=123;
stockfile.open("stockfile.txt",ios::out|ios::in|ios::app);
if(!stockfile)
{

cout<<"failed to creat stockfile"<<endl;
}else
{
cout<<"\t\t\tFILES ALERT\t\t\t"<<endl;
cout<<"\t\t\tstock file created\t\t\t"<<endl;
}



   
   
    cout<<"enter password to continue to main menu:";
    cin>>password;
    if(password !=123 )
    {
    cout<<"wrong password";
    }
    else if(password ==123)
    {
   


   
    cout<<"\t\t\t    Pharmacy Management System \n";
cout<<"\t\t==================================================\n\n";
cout<<"\t\t--------------------------------------------------\n";
cout<<"\t\t||\t 1.stock \t\t ||\n";
cout<<"\t\t||\t 2.SALES \t\t ||\n";
cout<<"\t\t||\t 3.ORDERS \t\t ||\n";
cout<<"\t\t--------------------------------------------------\n";
cout<<"\t\tENTER PREFERRED CATEGORY TO NAVIGATE TO:\t\t"<<endl;
    cout<<"category:";
    cin>>a;
    if(a == 1)
    switch(a)
    {
    case 1:
   
   
    cout<<"\t\t\t==============\t\t\t"<<endl;
    cout<<"\t\t\tSTOCK CATEGORY\t\t\t"<<endl;
    cout<<"\nenter category password to continue";
    cin>>password;
    if (!password);
    {
 
cout<<"\t\t\t==============\t\t\t"<<endl;
//user is given a opportunity to choose between the task he/she wants to perfom
cout<<"\t\t\t**WELCOME**\t\t\t"<<endl;
cout<<"\t\t\tSTOCK SECTION\t\t\t";
cout<<"\nCHOOSE OPTION"<<endl<<"\n1.ADD NEW STOCK"<<"\n2.VIEW STOCKS";
cout<<"\nplace your option:";
cin>>optionstock;

}
 if(optionstock == 1)
{

cout<<"\t\t\t:::::::::::\t\t\t"<<endl;
//creat a file to store my stock data

cout<<"\t\t\tNEW STOCK\t\t\t"<<endl;
cout<<"\t\t\t:::::::::::\t\t\t"<<endl;
cout<<"\nHOW MANY stocks DO YOU WISH TO ADD: "<<"\n(maximum 10 at a time)";
 cin>>howmany;
 for(i=howmany;i<=howmany & i > 0;--i)
 {
 cout<<"STOCK"<<" "<<i<<"  "<<"DETAILS"<<"\n";
 cout<<"\t\t\t:::::::::::::\t\t\t"<<endl;
 cout<<"\t\t\tADD UP STOCKS\t\t\t"<<endl;
cout<<"\nTYPE:";
cin>>type;
stockfile<<" "<<type;
cout<<"\nquantity:";
cin>>quantity;
stockfile<<"  "<<quantity;
cout<<"\nprice:";
cin>>price;
stockfile<<"  "<<price;
cout<<"               "<<"PRESS ONE TO VIEW YOUR ENTITIES"<<"               ";
cin>>stockop2;
 }
if(stockop2==1)
cout<<"               "<<"\nTYPE"<<type<<"\nquantity:"<<quantity<<"\nPRICE"<<price<<"ksh"<<endl;


else if (optionstock==2)
{
goto viewstock;
}

}
 viewstock:
cout<<"\n********EXISTING STOCKS*******"<<endl;
//cout the fle

stockfile>>type;
stockfile>>quantity;
stockfile>>price;
cout<<type<<"  ";
cout<<quantity<<"  ";
cout<<price<<"  ";


    break;

    }
   

   

    else if(a==2)
    switch(a)
{
    case 2:
    cout<<"\nenter category password to continue";
    cin>>password;
    cout<<"****sales**"<<endl;
    cout<<"\n1.PLACE A NEW SALE";
    cout<<"\n2.SALES OF THE DAY";
    cout<<"\n(choose option)";
    cin>>optionsale;
    if(optionsale == 1)
    cout<<"_______________";
    cout<<"\n**PLACE A NEW SALE**";
    cout<<"\ncustomer names:";
    cin>>customername;
    cout<<"\nquantity";
    cin>>quantity;
    cout<<"\ndate of delivery";
    cin>>dateofdelivery;
    cout<<"______________________________________________________";
    //to print out the customers as per entered
     cout<<"\n"<<customername<<"    "<<"\nquantity: "<<quantity<<"   "<<"\ndate of delivery: "<<dateofdelivery;
        cout<<"\n****placed successfuly****";
        //confirming if sales is done successfully
    cout<<"\n sale order placed successfully";
    cout<<"\nproceed to accounts desk for receipt";

    //order should be defined for the below act to go
    break;
}
else if(a==3)
switch(a)
{
case 3:
cout<<"\nenter category password to continue";
    cin>>password;

cout<<"******WELCOME****";
cout<<"\n__________________________________"<<endl;
cout<<"(select optins below)"<<endl;
//give the user a chance to choose between sections in the order category
cout<<"1.PLACE A NEW ORDER:"<<endl<<"\n2.CHECK ORDER LIST";
cout<<"\nYOUR OPTION:  ";

cin>>optionorder;
if(optionorder==1)
{
cout<<"::::::::::::::::::::::::::";
cout<<"\nPLACE NEW ORDER";
//the details of the customer
cout<<"\n(ENTER CUSTOMERS DETAILS BELOW)"<<endl;
//maximum is 10
cout<<"HOW MANY ORDERS DO YOU WISH TO MAKE:"<<"\n(maximum 10 at a time)";
 cin>>howmany;
 for(i=howmany; i<=howmany & i>0;--i)
 {
 cout<<"enter order"<<i<<"\n";
 
cout<<"\n____________________________________";
//user enters name
cout<<"\nNAME:";

cin>>name;
{
cout<<"\nSPECIFICATION"<<endl<<"\n(type of product)";
cin>>specification;
}
{
cout<<"\nQUANTITY:"<<endl;

cin>>quantity;
cout<<contact;
cin>>contact;
cout<<"ORDER PLACED SUCESSFULLY****";
}

 }
}
else if( optionorder==2)
{
//to check order list
//user is to
cout<<"\n__________________________________";
cout<<"\nCHECK ORDER LIST";
cout<<name;
}
break;
default:
    cout<<"please only consider the listed category";
    }
   
}

return 0;

}

