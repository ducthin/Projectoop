#include "dress.cpp"
void packpack::input(){
    cout <<"\nEnter Backpack ID: ";cin>>this->id;
    cin.ignore();
    cout<<"Enter Backpack Size: ";
    getline(cin,this->size);
    cout<<"Enter backpack type: ";
    getline(cin,this->packpackType);
    clother::input();
}
void packpack::output(){
    cout<<"\nBackpack ID: "<<this->id;
    cout<<"\nBackpack Size: "<<this->size;
    cout<<"\nbackpack Type: "<<this->packpackType;
    clother::output();
}
long long packpack::Timid()
{
	return this->id;
}
long long packpack::Price()
{
	return this->price;
}
