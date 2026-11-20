#include<iostream>
using namespace std;
int main()
{
int tries =0;
int savedpin =1234;
int userpin;
int overtry=0;
while(tries<3){
cout<<"Enter Pin"<<endl;
cin>>userpin;
if(userpin==savedpin)
{
  cout<<"Un Lock"<<endl;
  break;}
else{
cout<<"Wrong Pin"<<endl;
tries++;
}}
  if(tries==3){
  cout<<"Locked Atm Try Again After 10 Minutes"<<endl;
  }
    if(overtry==1){
  cout<<"Locked Atm Try After 15 Minutes "<<endl;}
  else if(overtry==2){
  cout<<"Locked Atm Try Again After 30 Minutes "<<endl;}
  else if(overtry==3){
  cout<<"Locked Atm Try Again After 1 hour"<<endl;
  }
  else{
   cout<<"Has Been Withdrawn The card Go Bank To Check Information"<<endl;}
int numchoice;
double initialbalance =550000;
double withdrawbalance;
double deposit;
do{
cout<<"1. Check Balance"<<endl;
cout<<"2. Deposit"<<endl;
cout<<"3. With draw"<<endl;
cout<<"4. Exit "<<endl;
cout<<"Enter Num choice"<<endl;
cin>>numchoice;
switch(numchoice){
case 1:
cout<<"Check Balance"<<endl;
  cout<<"Your Balance: "<<initialbalance<<endl;
break;
case 2:
cout<<"Enter Deposit Amount"<<endl;
cin>>deposit;
  if(deposit<=0)
{
cout<<"This Number Not Avilable"<<endl;
break;}
else
{
initialbalance=initialbalance+deposit;
cout<<"Your Balance:"<<initialbalance<<endl;
break;}
case 3: 
cout<<"With Draw Balance"<<endl;
cout<<"Enter Price Of WithDraw"<<endl;
cin>>withdrawbalance; 
if(withdrawbalance<=0)
{
cout<<"This Number Not Avilable"<<endl;
  break;}
if(withdrawbalance>initialbalance )
{
cout<<"Your Balance Not Enough Try Less Price"<<endl;
}
  else
{
  initialbalance=initialbalance-withdrawbalance;
cout<<"New Balance:"<<initialbalance<<endl;
break;}
case 4:
cout<<"Exit"<<endl;
break;
default:
cout<<"Invalid Choice Try AnotherNumber"<<endl;
  break;}}
while(numchoice!=4);
return 0;
}
