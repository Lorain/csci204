
#include<iostream>
#include<string>
#include "atime.h"

using namespace std;

atime::atime(string h, string m)
{
	hour=h; 
	minute=m;
}

void atime::ReadTime(ifstream& in)
{	
	string time;
	ifstream fin(in);
	fin>>time;
	cout<<time; 
	while(fin.good())
        {
			string token = time.substr(0, time.find(":"));
			cout<<token;
	    }
}
	
void atime::PrintTime()
{
	cout<<hour<<":"<<minute;
}



	/*string buff; //random variable to store cin value 
	in.getline(in, buff,':');
	hour=buff; 
		//in>>hour>>minute;
	cout<<hour<<"  "<<minute;
	if(hour<0 || hour>24 || minute<0 || minute>60)
	{	
		cout<<"enter hour <press enter> minute <press enter>"<<endl;
		in>>hour>>minute;
		while(hour<0 || hour>24 || minute<0 || minute>60)
		{cout<<"enter hour <press enter> minute <press enter>"<<endl;
		in>>hour>>minute;} 
	}*/



