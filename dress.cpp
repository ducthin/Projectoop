#include "trousers.cpp"

void dress::input()
{
	cout<<"\nEnter Dress ID: ";
	cin>>this->id;
	cin.ignore();
	cout<<"Enter Dress Size: ";
	getline(cin, this->size);
	cout<<"Enter Type Of Skirt: ";
	getline(cin, this->typeofskirt);
	clother::input();
}

void dress::output()
{
	cout<<"\nDress ID: "<<this->id;
	cout<<"\nDress Size: "<<this->size;
	cout<<"\nType Of Skirt: "<<this->typeofskirt;
	clother::output();
}
long long dress::Timid()
{
	return this->id;
}
long long dress::Price()
{
	return this->price;
}

