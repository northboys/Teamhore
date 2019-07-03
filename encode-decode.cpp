//Simple C++ program to encrypt and decrypt a string

#include <iostream>
#include <fstream>
#include <string>
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

    cout << "\nPlease choose following options:\n";
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

    //using switch case statements
    switch (x)
    {
    //first case for encrypting a string
    case 1:
        for (i = 0; (i < 100 && str[i] != '\0'); i++)
            str[i] = str[i] + 2; //the key for encryption is 3 that is added to ASCII value

        cout << "\nHasil Enkripsi kata: " << str << endl;

        std::cout << "Apakah anda ingin mencoba lagi? [Y/N] : ";
        std::cin >> q;
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

    //second case for decrypting a string
    case 2:
        for (i = 0; (i < 100 && str[i] != '\0'); i++)
            str[i] = str[i] - 2; //the key for encryption is 3 that is subtracted to ASCII value

        cout << "\nHasil Deskripsi kata: " << str << endl;
        std::cout << "Apakah anda ingin mencoba lagi? [Y/N] : ";
        std::cin >> q;
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
    case 4:
        string line;
        ifstream myfile("history.txt");
        if (myfile.is_open())
        {
            while (getline(myfile, line))
            {
                cout << line << '\n';
            }
            myfile.close();
        }
        std::cout << "Apakah anda ingin mencoba lagi? [Y/N] : ";
        std::cin >> q;
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
