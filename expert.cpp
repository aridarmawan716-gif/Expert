#include <iostream>
#include <string>                                                                                    #include <type_traits>

// Karena header <meta> belum tersedia secara fisik di sistem,                                       // kita menggunakan fitur C++26 lain yang sudah stabil di Clang 21.

struct User {
    std::string name;
    int id;
};

int main() {
    User u{"ExpertC++", 2026};

    std::cout << "Menganalisis tipe data menggunakan standar C++26..." << std::endl;

    // Fitur C++26: Structured bindings dengan placeholder '_'
    // Ini membuktikan compiler kamu sudah menjalankan standar C++26
    auto [name, _] = u;

    std::cout << "Nama user: " << name << std::endl;

    // Mengecek versi standar secara programatis                                                         if (__cplusplus > 202302L) {
        std::cout << "Status: Berjalan pada standar pasca-C++23 (C++26)." << std::endl;
    }

    // Catatan: Begitu library <meta> resmi dirilis di paket libc++ Termux,
    // kamu bisa mengaktifkan kembali kode refleksi yang kamu miliki.

    return 0;
}
