//Enkripsi dan deskripsi sederhana 

#include <iostream> 
#include <fstream> //header untuk membaca dan menulis dari / ke file.
using namespace std;

int main()
{
    int i, x;
    char str[100], selection, q;
menu:

    ofstream myfile;
    myfile.open("history.txt", ios::app);
    cout << "masukkan kata:\t";
    cin >> str;
    myfile << "\n"
           << str;
    myfile.close();

    cout << "\nPilih sak seneng mu wae aku loss kok :\n";
    cout << "1."
         << "\t"
         << "Enkripsi kata.\n";
    cout << "2."
         << "\t"
         << "Deskripsikan kata.\n";
    cout << "3."
         << "\t"
         << "Exit.\n";
    cout << "4."
         << "\t"
         << "History.\n";
    cout << "Pilih salah satu :";
    cin >> x;

    
    //menggunakan switch case 
    switch (x)
    {
    //enkripsi 5 diambah kan dengan nilai ASCII
    case 1:
        for (i = 0; (i < 100 && str[i] != '\0'); i++)
            str[i] = str[i] + 5;    
   

        cout << "\nHasil Enkripsi kata: " << str << endl;

        cout << "Apakah anda ingin mencoba lagi? [Y/N] : ";
        cin >> q;
        if (q == 'Y' || q == 'y')
        {
            goto menu;
        }
        else if (q == 'N' || q == 'n')
        {
            goto finish;
        }
        else
        {
            goto finish;
        }
        cin.get();
        break;

    //deskripsi dengan mengurangi nilai ASCII dengan 5
    case 2:
        for (i = 0; (i < 100 && str[i] != '\0'); i++)
            str[i] = str[i] - 5; //the key for encryption is 3 that is subtracted to ASCII value

        cout << "\nHasil Deskripsi kata: " << str << endl;
        cout << "Apakah anda ingin mencoba lagi? [Y/N] : ";
        cin >> q;
        if (q == 'Y' || q == 'y')
        {
            goto menu;
        }
        else if (q == 'N' || q == 'n')
        {
            goto finish;
        }
        else
        {
            goto finish;
        }
        cin.get();
        break;
    case 3:
        cout << "====================================\n";
        cout << "Goodbye\n";
        cout << "====================================\n";
        break;
    default:
        cout << endl;
        cout << "\nMasukkan pilihan yang benar\n"
             << endl;
        goto menu;
    case 4:
        string hore;
        ifstream myfile("history.txt");
        if (myfile.is_open())
        {
            while (getline(myfile, hore))
            {
                cout << hore << '\n';
            }
            myfile.close();
        }
        cout << "Apakah anda ingin mencoba lagi? [Y/N] : ";
        cin >> q;
        if (q == 'Y' || q == 'y')
        {
            goto menu;
        }
        else if (q == 'N' || q == 'n')
        {
            goto finish;
        }
        else
        {
            goto finish;
        }
        cin.get();
        break;
    }
finish:
    cout << "\nProgram selesai....\n";
    return 0;
}
