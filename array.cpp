#include "Array.h"
#include <cstdlib>
#include<iostream>
using namespace std;
Array::Array(int size)
{	
	if(size<0)
	{
		cout << "error" << endl;
	}
	else
	{
		data = new int[size];
		len = size;
	}
}
Array::~Array()
{
	delete[] data;
}
int Array::length() const
{
	return len;
}
int& Array::operator[](int i){
	static int tmp;
	if(i >= 0 && i < len)
	{
		return data[i];
	}
	else
	{
		cout << "Array bound error!" << endl;
		return tmp;
	}
}
int Array::operator[](int i) const
{
	if(i >= 0 && i<len)
	{
		return data[i];
	}
	else
	{
		cout << "Array bound error!" << endl;
		return 0;
	}
}
void Array::print()
{
	int i;
	cout<<"[";
	for(i = 0; i < len; i++ ){
		cout << ' ' << data[i];
	}
	cout << "]" << endl;
}
