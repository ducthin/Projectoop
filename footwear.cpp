#include "shirt.cpp"
void footwear::input(){
    cout << "\nEnter Footwear ID: ";cin>>this->id;
    cin.ignore();
    cout<<"Enter Footwear Size: ";
    getline(cin,this->size);
    cout<<"Enter typeOfFootwear: ";
    getline(cin,this->typeOfFootwear);
    clother::input();
}
void footwear::output(){
    cout<<"\nFootwear ID: "<<this->id;
    cout<<"\nFootwear Size: "<<this->size;
    cout<<"\ntypeOfFootwear: "<<this->typeOfFootwear;
    clother::output();
}
long long footwear::Timid()
{
	return this->id;
}
long long footwear::Price()
{
	return this->price;
}

