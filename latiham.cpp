#include "latihan.h"
int main()
{
    list l;
    createList(l);
  
    infotype value;
    while (true)
    {
        cout << "-----------------------------" << endl;
        cout << "Pilihan Menu: " << endl;
        cout << "1. Insert first" << endl;
        cout << "2. Insert Last" << endl;
        cout << "3. Insert After" << endl;
        cout << "4. Delete First" << endl;
        cout << "5. delete Last" << endl;
        cout << "6. Delete After" << endl;
        cout << "7. Tampilkan List" << endl;
        cout << "0. Keluar" << endl;
        cout << "-----------------------------" << endl;
        cout << "Masukkan pilihan anda: ";

        int pilihan;
        cin >> pilihan;


        switch (pilihan)
        {
        case 1:
            cout<< "Masukan nilai yang anda ingin tambahkan di awal: ";
            cin >> value;
            insertfirst(l,createElement(value));
            break;
        case 2:
            cout<< "Masukan nilai yang anda ingin tambahkan di akhir: ";
            cin >> value;
            insertlast(l,createElement(value));
            break;
        
        case 3:
            cout<< "Masukan nilai yang anda ingin sisipkan: ";
            cin >> value;
            insertafter(l,createElement(value),l.first);
            break;

        case 4:
            cout<< "Elemen saat ini: ";
            printlist(l);
            cout<<"Elemen sesudah di hapus: "<<endl;
            deletefirst(l,createElement(value));
            break;

        case 5: 
            cout<< "Elemen saat ini: ";
            printlist(l);
            cout<<"Elemen akhir sesudah di hapus: "<<endl;
            deletelast(l,createElement(value)); 
            break; 

        case 6:
            cout<< "Elemen saat ini: ";
            printlist(l);
            cout<<"Elemen ssisipan esudah di hapus: "<<endl;
            deleteafter(l,createElement(value),l.first);
            break;

        case 7:
            cout<<"List saat ini: ";
            printlist(l);
            break;

        case 0:
            cout<<"Program selesai."<< endl;
            break;
        
        default:
            cout << "Pilihan tidak valid. Program selesai." << endl;
            return 0; 
        }
    }
    return 0;


}    