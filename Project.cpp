#include"Managa-2.cpp"
 int main()
 {
 	Manage *ma=new Manage;
 	int choose;
 	do{
            system("cls");
            cout << "\n\n";
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10); 
            cout << "\t\t\t\t\t======================================================\n";
            cout << "\t\t\t\t\t||               CHUONG TRINH QUAN LY               ||\n";
            cout << "\t\t\t\t\t======================================================\n\n";
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
			cout << "\t\t\t\t MENU QUAN LI SHOP                                     MENU CUA KHACH HANG\n" ;
            cout << "\t\t------------------------------------------------------------------------------------------------------------\n";
            cout << "\t\t| 0. Thoat                                           | 10. Tim kiem mat hang                               |\n";
            cout << "\t\t| 1. Nhap mat hang                                   | 11. Xem san pham                                    |\n";
            cout << "\t\t| 2. Xuat mat hang                                   | 12. Gio hang cua ban                                |\n";
            cout << "\t\t| 3. Xoa mat hang                                    | 13. Xoa gio hang                                    |\n";
            cout << "\t\t|                                                    | 14. Tong tien san pham                              |\n";
            cout << "\t\t|                                                    | ...                                                 |\n";
            cout << "\t\t------------------------------------------------------------------------------------------------------------\n\n";
            cout << "\t\tNhap lua chon cua ban: ";
            cin >> choose;
			switch(choose)
			{
				case 0: break;
				case 1: ma->Nhap(); break;
				case 2: ma->Xuat(); break;
				case 3: ma->XOA(); break;
//				case 4: ma->Nhap(); break;
				case 10: ma->Timkiem(); break;
				case 11: ma->Xem(); break;
				case 12: ma->Giohang(); break;
				case 13: ma->Xoasanpham(); break;
				case 14: ma->Gia(); break;
			}
	 }while(choose!=0);
 	delete ma;
 	return 0;
 }
