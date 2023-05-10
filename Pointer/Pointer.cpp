#include <iostream>
using namespace std;
class mahasiswa {
public:
    int main;
    void showNim();
};

void mahasiswa::showNim(); {
    cout << "No Induk = " << nim << endl;
}
int main()
{
    mahasiswa mhs(1);
    mhs.showNim();
}