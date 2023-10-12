#include"clother.cpp"

void shirt::input(){
	cout<<"\nEnter Shirt ID:";
	cin>>this->id;
	cin.ignore();
	cout<<"Enter Shirt Size: ";
	getline(cin,this->size);
	cout<<"Enter type shirt: ";
	getline(cin,this->shirttype);
	clother::input();
}
void shirt::output(){
	cout<<"\nShirt Id: "<<this->id;
	cout<<"\nShirt Size: "<<this->size;
	cout<<"\nShirt type: "<<this->shirttype;
	clother::output();
}
long long shirt::Timid()
{
	return this->id;
}
long long shirt::Price()
{
	return this->price;
}

