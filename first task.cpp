#include<iostream>
using namespace std;
#include<fstream>

int main(int argc,char**argv[])
{
	ofstream myfile;
	cout<<(argv[1]);
	myfile<<"iam writting in this file ";


	myfile.close();
;}
