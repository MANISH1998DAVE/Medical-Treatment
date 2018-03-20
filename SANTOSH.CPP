#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<dos.h>
#include<graphics.h>

void main()
{clrscr();
char ch1[100],ch3[300],ch4[50],ch2;
int i,d,c,e;
double m;
cout<<"::WELCOME TO DOCTOR ZONAL PROGRAM::"<<"\n";
cout<<"Enter your Name:";
cin>>ch1;
cout<<"\n"<<"Enter your Age:";
cin>>i;
cout<<"\n"<<"Enter your Gender(M or F):";
cin>>ch2;
cout<<"\n"<<"Enter your Address:";
gets(ch3);
cout<<"\n"<<"Enter your Problem:";
gets(ch4);
cout<<"\n"<<"Enter your Duration of Problem in Days:";
cin>>d;
cout<<"\n"<<"Enter your Mobile No.:";
cin>>m;

getch(); clrscr();

cout<<"\n"<<"Problems be treated by::"<<"\n";
cout<<"1.Physician"<<"\n";
cout<<"2.Cardiologist"<<"\n";
cout<<"3.Skin Related Problem"<<"\n";
cout<<"4.Other Problem"<<"\n";

cout<<"Enter your choice (about your problem):";
cin>>c;
getch();
clrscr();

if(c==1)
{
cout<<"The Doctors List Related To PHYSICIAN::"<<"\n";
cout<<"1.DR.ABC..."<<"\n";
cout<<"2.DR.XYZ..."<<"\n";
cout<<"3.DR.MNO..."<<"\n";
cout<<"Enter your Choice:";
cin>>e;
switch(e)
{case 1:cout<<"Mobile no.is:9414xxxxxx"<<"\n";
	cout<<"Email Id is:santxxx@gmail.com"<<"\n";
	cout<<"DO YOU WANT TO SUBMIT THIS INFORMATION TO THE DOCTORS (Yes OR No):";
	cin>>ch2;
	if(ch2=='y'||ch2=='Y')
	cout<<"YOUR DETAILS ARE SUBMITTED , WE WILL CONTACT YOU WITHIN 24 Hrs.";
	else
	cout<<"GO AND CHECK FOR CONCERNED DR. IF YOU REQUIRED";
	break;

 case 2:cout<<"Mobile no.is:8679xxxxxx"<<"\n";
	cout<<"Email Id is:rituxxxx@yahoo.com"<<"\n";
	cout<<"DO YOU WANT TO SUBMIT THIS INFORMATION TO THE DOCTORS (Yes OR No):";
	cin>>ch2;
	if(ch2=='y'||ch2=='Y')
	cout<<"YOUR DETAILS ARE SUBMITTED , WE WILL CONTACT YOU WITHIN 24 Hrs.";
	else
	cout<<"GO AND CHECK FOR CONCERNED DR. IF YOU REQUIRED";
	break;

 case 3:cout<<"Mobile no.is:7014xxxxxx"<<"\n";
	cout<<"Email Id is:dcxxxxxxx@rediff.com"<<"\n";
	cout<<"DO YOU WANT TO SUBMIT THIS INFORMATION TO THE DOCTORS (Yes OR No):";
	cin>>ch2;
	if(ch2=='y'||ch2=='Y')
	cout<<"YOUR DETAILS ARE SUBMITTED , WE WILL CONTACT YOU WITHIN 24 Hrs.";
	else
	cout<<"GO AND CHECK FOR CONCERNED DR. IF YOU REQUIRED";
	break;
}
}

else if(c==2)
{
cout<<"The Doctors List Related To CARDIOLOGIST::"<<"\n";
cout<<"1.DR.DEF...."<<"\n";
cout<<"2.DR.GHI...."<<"\n";
cout<<"3.DR.PQR...."<<"\n";
cout<<"Enter your Choice:";
cin>>e;
switch(e)
{case 1:cout<<"Mobile no.is:9414xxxxxx"<<"\n";
	cout<<"Email Id is:santxxx@gmail.com"<<"\n";
	cout<<"DO YOU WANT TO SUBMIT THIS INFORMATION TO THE DOCTORS (Yes OR No):";
	cin>>ch2;
	if(ch2=='y'||ch2=='Y')
	cout<<"YOUR DETAILS ARE SUBMITTED , WE WILL CONTACT YOU WITHIN 24 Hrs.";
	else
	cout<<"GO AND CHECK FOR CONCERNED DR. IF YOU REQUIRED";
	break;

 case 2:cout<<"Mobile no.is:8679xxxxxx"<<"\n";
	cout<<"Email Id is:rituxxxx@yahoo.com"<<"\n";
	cout<<"DO YOU WANT TO SUBMIT THIS INFORMATION TO THE DOCTORS (Yes OR No):";
	cin>>ch2;
	if(ch2=='y'||ch2=='Y')
	cout<<"YOUR DETAILS ARE SUBMITTED , WE WILL CONTACT YOU WITHIN 24 Hrs.";
	else
	cout<<"GO AND CHECK FOR CONCERNED DR. IF YOU REQUIRED";
	break;

 case 3:cout<<"Mobile no.is:7014xxxxxx"<<"\n";
	cout<<"Email Id is:dcxxxxxxx@rediff.com"<<"\n";
	cout<<"DO YOU WANT TO SUBMIT THIS INFORMATION TO THE DOCTORS (Yes OR No):";
	cin>>ch2;
	if(ch2=='y'||ch2=='Y')
	cout<<"YOUR DETAILS ARE SUBMITTED , WE WILL CONTACT YOU WITHIN 24 Hrs.";
	else
	cout<<"GO AND CHECK FOR CONCERNED DR. IF YOU REQUIRED";
	break;
}
}

else if(c==3)
{
cout<<"The Doctors List Related To SKIN PROBLEMS::"<<"\n";
cout<<"1.DR.YXZ...."<<"\n";
cout<<"2.DR.STU...."<<"\n";
cout<<"3.DR.VWX...."<<"\n";
cout<<"Enter your Choice:";
cin>>e;
switch(e)
{case 1:cout<<"Mobile no.is:9414xxxxxx"<<"\n";
	cout<<"Email Id is:santxxx@gmail.com"<<"\n";
	cout<<"DO YOU WANT TO SUBMIT THIS INFORMATION TO THE DOCTORS (Yes OR No):";
	cin>>ch2;
	if(ch2=='y'||ch2=='Y')
	cout<<"YOUR DETAILS ARE SUBMITTED , WE WILL CONTACT YOU WITHIN 24 Hrs.";
	else
	cout<<"GO AND CHECK FOR CONCERNED DR. IF YOU REQUIRED";
	break;

 case 2:cout<<"Mobile no.is:8679xxxxxx"<<"\n";
	cout<<"Email Id is:rituxxxx@yahoo.com"<<"\n";
	cout<<"DO YOU WANT TO SUBMIT THIS INFORMATION TO THE DOCTORS (Yes OR No):";
	cin>>ch2;
	if(ch2=='y'||ch2=='Y')
	cout<<"YOUR DETAILS ARE SUBMITTED , WE WILL CONTACT YOU WITHIN 24 Hrs.";
	else
	cout<<"GO AND CHECK FOR CONCERNED DR. IF YOU REQUIRED";
	break;

 case 3:cout<<"Mobile no.is:7014xxxxxx"<<"\n";
	cout<<"Email Id is:dcxxxxxxx@rediff.com"<<"\n";
	cout<<"DO YOU WANT TO SUBMIT THIS INFORMATION TO THE DOCTORS (Yes OR No):";
	cin>>ch2;
	if(ch2=='y'||ch2=='Y')
	cout<<"YOUR DETAILS ARE SUBMITTED , WE WILL CONTACT YOU WITHIN 24 Hrs.";
	else
	cout<<"GO AND CHECK FOR CONCERNED DR. IF YOU REQUIRED";
	break;
}
}

else
{
cout<<"The Doctors List (OTHERS)::"<<"\n";
cout<<"1.DR.FED...."<<"\n";
cout<<"2.DR.RST...."<<"\n";
cout<<"3.DR.VUT...."<<"\n";
cout<<"Enter your Choice:";
cin>>e;
switch(e)
{case 1:cout<<"Mobile no.is:9414xxxxxx"<<"\n";
	cout<<"Email Id is:santxxx@gmail.com"<<"\n";
	cout<<"DO YOU WANT TO SUBMIT THIS INFORMATION TO THE DOCTORS (Yes OR No):";
	cin>>ch2;
	if(ch2=='y'||ch2=='Y')
	cout<<"YOUR DETAILS ARE SUBMITTED , WE WILL CONTACT YOU WITHIN 24 Hrs.";
	else
	cout<<"GO AND CHECK FOR CONCERNED DR. IF YOU REQUIRED";
	break;

 case 2:cout<<"Mobile no.is:8679xxxxxx"<<"\n";
	cout<<"Email Id is:rituxxxx@yahoo.com"<<"\n";
	cout<<"DO YOU WANT TO SUBMIT THIS INFORMATION TO THE DOCTORS (Yes OR No):";
	cin>>ch2;
	if(ch2=='y'||ch2=='Y')
	cout<<"YOUR DETAILS ARE SUBMITTED , WE WILL CONTACT YOU WITHIN 24 Hrs.";
	else
	cout<<"GO AND CHECK FOR CONCERNED DR. IF YOU REQUIRED";
	break;

 case 3:cout<<"Mobile no.is:7014xxxxxx"<<"\n";
	cout<<"Email Id is:dcxxxxxxx@rediff.com"<<"\n";
	cout<<"DO YOU WANT TO SUBMIT THIS INFORMATION TO THE DOCTORS (Yes OR No):";
	cin>>ch2;
	if(ch2=='y'||ch2=='Y')
	cout<<"YOUR DETAILS ARE SUBMITTED , WE WILL CONTACT YOU WITHIN 24 Hrs.";
	else
	cout<<"GO AND CHECK FOR CONCERNED DR. IF YOU REQUIRED";
	break;
}
}
cout<<"............................................................."<<"\n";
cout<<"............................................................."<<"\n";
cout<<"............................................................."<<"\n";
cout<<"............................................................."<<"\n";
cout<<"After 8-10 Hrs."<<"\n";
cout<<"DR. ........... Will able to contact through your Mobile No."<<"\n";
cout<<"............................................................";
getch();
}