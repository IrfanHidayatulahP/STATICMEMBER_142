#include <iostream>
using namespace std;
class buku {
    string judul;

public:
    buku setJudul(string judul) {
        this->judul = judul;
        return *this;                           // ChainFunction
    }
    string getJudul() {
        return this->judul;
    }
} bukunya;


int main()
{
    std::cout << "Hello World!\n";
}
