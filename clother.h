#include<iomanip>
#include<bits/stdc++.h>

using namespace std;

class clother{
	protected:
		string color;
		string source;
		string material; //vat lieu
		string brand;
		long price;
	public:
		virtual void input();
		virtual void output();
		virtual long long Timid()=0;
		virtual long long Price()=0;
		
};
class shirt:public clother{
	public:
		int id;
		string size;
		string shirttype;
	void input();
	void output();
	long long Timid();
	long long Price();
};
class  footwear:public clother{
	public:
		int id;
		string size;
		string typeOfFootwear;
	void input();
	void output();
	long long Timid();
	long long Price();
};
class trousers:public clother{
	public:
		int id;
		string size;
		string typeofpants;
	void input();
	void output();
	long long Timid();
	long long Price();
		
};
class dress : public clother
{
	public:
		int id;
		string size;
		string typeofskirt;
		void input();
		void output();
		long long Timid();
		long long Price();
};
class packpack:public clother{
	public:
		int id;
		string size;
		string packpackType;
	void input();
	void output();
	long long Timid();
	long long Price();
};

