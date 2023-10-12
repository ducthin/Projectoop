#include "footwear.cpp"
void trousers::input()
{
	cout<<"\nEnter Trousers ID: ";
	cin>>this->id;
	cin.ignore();
	cout<<"Enter Trousers Size: ";
	getline(cin, this->size);
	cout<<"Enter Type Of Pant: ";
	getline(cin, this->typeofpants);
	clother::input();
}

void trousers::output()
{
	cout<<"\nTrousers ID: "<<this->id;
	cout<<"\nTrousers Size: "<<this->size;
	cout<<"\nType Of Pant: "<<this->typeofpants;
	clother::output();
	
}
long long trousers::Timid()
{
	return this->id;
}
long long trousers::Price()
{
	return this->price;
}

