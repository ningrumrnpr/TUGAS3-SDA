#include <iostream>

using namespace std;

//komponen
struct Mahasiswa{
 string nama, fakultas, jurusan;
 Mahasiswa *next;

};

int main(){ 
    
    Mahasiswa *node1, *node2, *node3, *node4;

    node1 = new Mahasiswa();
    node2 = new Mahasiswa();
    node3 = new Mahasiswa();
    node4 = new Mahasiswa();
    
    node1->nama = "Rahayu";
    node1->fakultas = "teknik";
    node1->jurusan = "SI";
    node1->next = node2;

    node2->nama = "Ningrum";
    node2->fakultas = "teknik";
    node2->jurusan = "mesin";
    node2->next = node3;

    node3->nama = "Puspa";
    node3->fakultas = "teknik";
    node3->jurusan = "informatika";
    node3->next = node4;
    
    node4->nama = "Ridha";
    node4->fakultas = "teknik";
    node4->jurusan = "informatika";
    node4->next = NULL;

    Mahasiswa *cur;
    cur = node1;
    while( cur != NULL ) {
        cout << "Nama Mahasiswa :" << cur->nama << endl;
        cout << "Fakultas Mahasiswa :" << cur->fakultas << endl;
        cout << "Jurusan Mahasiswa  :" << cur->jurusan << endl;

        cur = cur->next;

    }


}
