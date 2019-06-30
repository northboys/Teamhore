//Simple C++ program to encrypt and decrypt a string

#include <iostream>
using namespace std;

int main()
{
    int i, x;
    char str[100];

    cout << "masukkan kata:\t";
    cin >> str;

    cout << "\nPlease choose following options:\n";
    cout << "1."
         << "\t"
         << "Enkripsi kata.\n";
    cout << "2."
         << "\t"
         << "Deskripsikan kata.\n";
    cout << "3."
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
        break;

    //second case for decrypting a string
    case 2:
        for (i = 0; (i < 100 && str[i] != '\0'); i++)
            str[i] = str[i] - 2; //the key for encryption is 3 that is subtracted to ASCII value

        cout << "\nHasil Deskripsi kata: " << str << endl;
        break;
    case 3:
        for (i = 0; (i < 100 && str[i] != '\0'); i++)
            str[i] = str[i] - 2; //the key for encryption is 3 that is subtracted to ASCII value

        cout << "\nHistory: " << str << endl;
        break;
    case 4:
        for (i = 0; (i < 100 && str[i] != '\0'); i++)
            str[i] = str[i] - 2; //the key for encryption is 3 that is subtracted to ASCII value

        cout << "\nHistory: " << str << endl;
        break;

    default:
        cout << "\nInvalid Input !!!\n";
    }
    return 0;
}
