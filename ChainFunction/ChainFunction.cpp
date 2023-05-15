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


int main() {
    // bukunya.setJudul("Matematika");
    //cout << bukunya.getJudul();
    cout << bukunya.setJudul("Matematika").getJudul();          //chain Function calls
    return 0;
}
