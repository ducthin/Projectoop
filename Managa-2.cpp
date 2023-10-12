#include"Managa.cpp"
void Manage::Timkiem()
{
	long tk;
	do{
            system("cls");
            cout << "\n\n";
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
            cout << "\t\t======================================================\n";
            cout << "\t\t||                  MENU TIM KIEM                   ||\n";
            cout << "\t\t======================================================\n\n";
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
            cout << "\t\t------------------------------------------------------\n";
            cout << "\t\t| 0. Quay lai Menu                                   |\n";
            cout << "\t\t| 1. Tim mau ao                                      |\n";
            cout << "\t\t| 2. Tim mau giay dep                                |\n";
            cout << "\t\t| 3. Tim mau quan                                    |\n";
            cout << "\t\t| 4. Tim mau vay                                     |\n";
            cout << "\t\t| 5. Tim mau balo                                    |\n";
            cout << "\t\t------------------------------------------------------\n\n";
            cout << "\t\tNhap lua chon cua ban: ";
            cin >> choose;
			switch(choose)
			{
				case 0: break;
				case 1: {
					
					cout<<"\n\t Nhap id de tim: ";
					cin>>tk;
					for(int i=0;i<h;i++)
					{
						if(a[i]->Timid()==tk)
						 a[i]->output();
					}
					system("pause");
					break;
				}
				case 2:{
					cout<<"\n\t Nhap id de tim: ";
					cin>>tk;
					for(int i=0;i<k;i++)
					{
						if(b[i]->Timid()==tk)
						 b[i]->output();
					}
					system("pause");
					break;
				
				}
				case 3: {
					cout<<"\n\t Nhap id de tim: ";
					cin>>tk;
					for(int i=0;i<j;i++)
					{
						if(c[i]->Timid()==tk)
						 c[i]->output();
					}
					system("pause");
					break;
				}
				case 4:{
					cout<<"\n\t Nhap id de tim: ";
					cin>>tk;
					for(int i=0;i<l;i++)
					{
						if(d[i]->Timid()==tk)
						 d[i]->output();
					}
					system("pause");
					break;
				}
				case 5:{
					cout<<"\n\t Nhap id de tim: ";
					cin>>tk;
					for(int i=0;i<p;i++)
					{
						if(e[i]->Timid()==tk)
						 e[i]->output();
					}
					system("pause");
					break;
				}
			}
		}while(choose!=0);
		
}
void Manage::Xem()
{
	do{
            system("cls");
            cout << "\n\n";
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
            cout << "\t\t======================================================\n";
            cout << "\t\t||                    MENU MUA                      ||\n";
            cout << "\t\t======================================================\n\n";
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
            cout << "\t\t------------------------------------------------------\n";
            cout << "\t\t| 0. Quay lai Menu                                   |\n";
            cout << "\t\t| 1. Mua ao                                          |\n";
            cout << "\t\t| 2. Mua giay dep                                    |\n";
            cout << "\t\t| 3. Mua quan                                        |\n";
            cout << "\t\t| 4. Mua vay                                         |\n";
            cout << "\t\t| 5. Mua balo                                        |\n";
            cout << "\t\t------------------------------------------------------\n\n";
            cout << "\t\tNhap lua chon cua ban: ";
            cin >> choose;
			switch(choose)
			{
				case 0: break;
				case 1: {
					
					for(int i=0;i<h;i++)
					{
						cout<<"\n\t ======= AO THU "<<i+1<<" =======";
						a[i]->output();
					}
					cout<<"\n\n\t\tVui long nhap id de mua: ";
					cin>>gh;
					for(int i=0;i<h;i++)
					{
						if(a[i]->Timid()==gh){
							Ds_clother.push_back(a[i]);
							cout<<"\n\t Cam on ban da mua!"<<endl;
						}
					}
						system("pause");
					break;
				}
				case 2: {
					for(int i=0;i<k;i++)
					{
						cout<<"\n\t ======= GIAY DEP THU "<<i+1<<" =======";
						b[i]->output();
					}
					cout<<"\n\n\t\tVui long nhap id de mua: ";
					cin>>gh;
					for(int i=0;i<k;i++)
					{
						if(b[i]->Timid()==gh){
							Ds_clother.push_back(b[i]);
							cout<<"\n\t Cam on ban da mua!"<<endl;
						}
					}
						system("pause");
					break;
				}
				case 3: {
					for(int i=0;i<j;i++)
					{
						cout<<"\n\t ======= Ao thu "<<i+1<<" =======";
						c[i]->output();
					}
					cout<<"\n\n\t\tVui long nhap id de mua: ";
					cin>>gh;
					for(int i=0;i<j;i++)
					{
						if(c[i]->Timid()==gh){
							Ds_clother.push_back(c[i]);
							cout<<"\n\t Cam on ban da mua!"<<endl;
						}
					}
						system("pause");
					break;
				}
				case 4: {
					for(int i=0;i<l;i++)
					{
						cout<<"\n\t ======= VAY "<<i+1<<" =======";
						d[i]->output();
					}
					cout<<"\n\n\t\tVui long nhap id de mua: ";
					cin>>gh;
					for(int i=0;i<l;i++)
					{
						if(c[i]->Timid()==gh){
							Ds_clother.push_back(c[i]);
							cout<<"\n\t Cam on ban da mua!"<<endl;
						}
					}
						system("pause");
					break;
				}
				case 5: {
					for(int i=0;i<p;i++)
					{
						cout<<"\n\t ======= BALO "<<i+1<<" =======";
						e[i]->output();
					}
					cout<<"\n\n\t\tVui long nhap id de mua: ";
					cin>>gh;
					for(int i=0;i<p;i++)
					{
						if(e[i]->Timid()==gh){
							Ds_clother.push_back(e[i]);
							cout<<"\n\t Cam on ban da mua!"<<endl;
						}
					}
						system("pause");
					break;
				}
			}
		}while(choose!=0);
}
void Manage::Giohang()
{
	system("cls");
	cout<<"\n\n\t\t======= Danh sach don hang cua ban ======";
	for(int i=0;i<Ds_clother.size();i++)
	{
		cout<<"\n\n\t\t Don hang thu"<<i+1<<"";
		Ds_clother[i]->output();
	}
	system("pause");
}
void Manage::Gia()
{
	long long gia=0;
	cout<<"\n\n\t\t======= Tong Tien ban phai tra la ======="<<endl;
	for(int i=0;i<Ds_clother.size();i++)
	{
		gia+=Ds_clother[i]->Price();
	}
	cout<<"\n\t\t Thanh tien: "<<gia<<" VND"<<endl;
	system("pause");
}
void Manage::Xoasanpham()
{
	long sp;
	system("cls");
	cout<<"\n\n\t\t======= Danh sach don hang cua ban =======";
	for(int i=0;i<Ds_clother.size();i++)
	{
		cout<<"\n\n\t\t Don hang thu"<<i+1<<"";
		Ds_clother[i]->output();
	}
	cout<<"\n\n\t Vui long nhap ID de Huy Don:";
	cin>>sp;
	for(int i=0;i<Ds_clother.size();i++)
	{
		if(Ds_clother[i]->Timid()==sp)
		{
			Ds_clother.erase(Ds_clother.begin() + i );
			cout<<"\n\t Ban da huy xong!"<<endl;
		}
	}
	system("pause");
}
