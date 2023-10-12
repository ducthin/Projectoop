#include"clother.h"

void clother::input(){
	cout<<"Enter Color: ";
	cin.ignore();
	getline(cin,this->color);
	cout<<"Enter soucre: ";
	getline(cin,this->source);
	cout<<"Enter material: ";
	getline(cin,this->material);
	cout<<"Enter brand: ";
	getline(cin,this->brand);
	cout<<"Enter price: ";
	cin>>this->price;
}
void clother::output() {
    const int width = 15; 
    cout << setw(width) << left << "Color: " << this->color << endl;
    cout << setw(width) << left << "Source: " << this->source << endl;
    cout << setw(width) << left << "Material: " << this->material << endl;
    cout << setw(width) << left << "Brand: " << this->brand << endl;
    cout << setw(width) << left << "Price: " << this->price << endl;
}
