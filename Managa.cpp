#include <windows.h>
#include"pack.cpp"

void Xoa(clother *a[],int n,int vt)
{
	for(int i=vt;i<n;i++)
	{
		a[i]=a[i+1];
	}
	n--;
}
class Manage{
	public:
		vector<clother*>Ds_clother;
		clother *a[10];
		clother *b[10];
		clother *c[10];
		clother *d[10];
		clother *e[10];
		int choose;
		int h,k,j,l,p;
		long gh;
	void Timkiem();
	void Giohang();
	void Gia();
	void Xem();
	void Xoasanpham();
	void Nhap(){
			do{
            system("cls");
            cout << "\n\n";
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
            cout << "\t\t======================================================\n";
            cout << "\t\t||                    MENU NHAP                     ||\n";
            cout << "\t\t======================================================\n\n";
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
            cout << "\t\t------------------------------------------------------\n";
            cout << "\t\t| 0. Thoat                                           |\n";
            cout << "\t\t| 1. Nhap ao                                         |\n";
            cout << "\t\t| 2. Nhap giay dep                                   |\n";
            cout << "\t\t| 3. Nhap quan                                       |\n";
            cout << "\t\t| 4. Nhap vay                                        |\n";
            cout << "\t\t| 5. Nhap balo                                       |\n";
            cout << "\t\t------------------------------------------------------\n\n";
            cout << "\t\tNhap lua chon cua ban: ";
            cin >> choose;
			switch(choose)
			{
				case 0: break;
				case 1: {
					int n;
					h=0;
					cout<<"\n\t Nhap so luong Ao: ";
					cin>>n;
					for(int i=0;i<n;i++)
					{
						cout<<"\n\t\t Nhap ao thu "<<i+1<<"";
						a[i]=new shirt;
						a[i]->input();
						h++;
					}
					break;
				}
				case 2:{
					int n;
					cout<<"\n\t Nhap so luong giay dep: ";
					cin>>n;
					k=0;
					for(int i=0;i<n;i++)
					{
						cout<<"\n\t\t Nhap giay thu "<<i+1<<"";
						b[i]=new footwear;
						b[i]->input();
						k++;
					}
					break;
				}
				case 3: {
					int n;
					cout<<"\n\t Nhap so luong quan: ";
					cin>>n;
					j=0;
					for(int i=0;i<n;i++)
					{
						cout<<"\n\t\t Nhap quan thu "<<i+1<<"";
						c[i]=new trousers;
						c[i]->input();
						j++;
					}
					break;
				}
				case 4:{
					int n;
					cout<<"\n\t Nhap so luong vay: ";
					cin>>n;
					l=0;
					for(int i=0;i<n;i++)
					{
						cout<<"\n\t\t Nhap ao thu "<<i+1<<"";
						d[i]=new dress;
						d[i]->input();
						l++;
					}
					break;
				}
				case 5:{
					int n;
					cout<<"\n\t Nhap so luong Balo: ";
					cin>>n;
					p=0;
					for(int i=0;i<n;i++)
					{
						cout<<"\n\t\t Nhap Balo thu "<<i+1<<"";
						e[i]=new packpack;
						e[i]->input();
						p++;
					}
					break;
				}
			}
		}while(choose!=0);
	}
	void Xuat(){
		
		do{
            system("cls");
            cout << "\n\n";
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
            cout << "\t\t======================================================\n";
            cout << "\t\t||                    MEMU XUAT                     ||\n";
            cout << "\t\t======================================================\n\n";
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
            cout << "\t\t------------------------------------------------------\n";
            cout << "\t\t| 0. Thoat                                           |\n";
            cout << "\t\t| 1. xuat ao                                         |\n";
            cout << "\t\t| 2. xuat giay dep                                   |\n";
            cout << "\t\t| 3. xuat quan                                       |\n";
            cout << "\t\t| 4. xuat vay                                        |\n";
            cout << "\t\t| 5. xuat balo                                       |\n";
            cout << "\t\t------------------------------------------------------\n\n";
            cout << "\t\tNhap lua chon cua ban: ";
            cin >> choose;
			switch(choose)
			{
				case 0: break;
				case 1: {
					
					for(int i=0;i<h;i++)
					{
						cout<<"\n\t ===== AO THU "<<i+1<<" ====="<<endl;
						a[i]->output();
					}
				
						system("pause");
					break;
				}
				case 2: {
					for(int i=0;i<k;i++)
					{
						cout<<"\n\t ===== GIAY DEP THU "<<i+1<<" ====="<<endl;
						b[i]->output();
					}
				
						system("pause");
					break;
				}
				case 3: {
					for(int i=0;i<j;i++)
					{
						cout<<"\n\t ===== AO THU "<<i+1<<" ====="<<endl;
						c[i]->output();
					}
				
						system("pause");
					break;
				}
				case 4: {
					for(int i=0;i<l;i++)
					{
						cout<<"\n\t ===== VAY "<<i+1<<" ====="<<endl;
						d[i]->output();
					}
				
						system("pause");
					break;
				}
				case 5: {
					for(int i=0;i<p;i++)
					{
						cout<<"\n\t ===== BALO "<<i+1<<" ====="<<endl;
						e[i]->output();
					}
					
						system("pause");
					break;
				}
			}
		}while(choose!=0);
	}
	
	void XOA()
	{
		long vt;
		do{
            system("cls");
            cout << "\n\n";
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
            cout << "\t\t======================================================\n";
            cout << "\t\t||                     MENU XOA                     ||\n";
            cout << "\t\t======================================================\n\n";
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
            cout << "\t\t------------------------------------------------------\n";
            cout << "\t\t| 0. Thoat                                           |\n";
            cout << "\t\t| 1. xoa ao                                          |\n";
            cout << "\t\t| 2. xoa giay dep                                    |\n";
            cout << "\t\t| 3. xoa quan                                        |\n";
            cout << "\t\t| 4. xoa vay                                         |\n";
            cout << "\t\t| 5. xoa balo                                        |\n";
            cout << "\t\t------------------------------------------------------\n\n";
            cout << "\t\tNhap lua chon cua ban: ";
            cin >> choose;
			switch(choose)
			{
				case 0: break;
				case 1: {
					cout<<"\n Nhap Id de xoa: ";
					cin>>vt;
					for(int i=0;i<h;i++)
					{
						if(a[i]->Timid()==vt)
						{
							Xoa(a,h,i);
						}
					}
					cout<<"\n\n\t Ban da xoa xong!";
					system("pause");
					break;
				}
				case 2: {
					cout<<"\n Nhap Id de xoa: ";
					cin>>vt;
						for(int i=0;i<k;i++)
					{
						if(b[i]->Timid()==vt)
						{
							Xoa(b,k,i);
						}
					}
					cout<<"\n\n\t Ban da xoa xong!";
					system("pause");
					break;
				}
				case 3: {
					cout<<"\n Nhap Id de xoa: ";
					cin>>vt;
						for(int i=0;i<j;i++)
					{
						if(c[i]->Timid()==vt)
						{
							Xoa(c,j,i);
						}
					}
					cout<<"\n\n\t Ban da xoa xong!";
					system("pause");
					break;
				}
				case 4: {
					cout<<"\n Nhap Id de xoa: ";
					cin>>vt;
					for(int i=0;i<l;i++)
					{
						if(d[i]->Timid()==vt)
						{
							Xoa(d,l,i);
						}
					}
					cout<<"\n\n\t Ban da xoa xong!";
					system("pause");
					break;
				}
				case 5: {
				cout<<"\n Nhap Id de xoa: ";
					cin>>vt;
					for(int i=0;i<p;i++)
					{
						if(e[i]->Timid()==vt)
						{
							Xoa(e,p,i);
						}
					}
					cout<<"\n\n\t Ban da xoa xong!";
					system("pause");
					break;
				}
			}
		}while(choose!=0);
	}
};

