#include <iostream>
#include <cstring>  
#include <iomanip> 

class Buffer {
private:
    size_t size;
    unsigned char* data;

public:
 
    Buffer() : size(0), data(nullptr) {
        std::cout << "Buffer vide créé." << std::endl;
    }

    Buffer(size_t n) : size(n) {
        data = new unsigned char[size];
        std::memset(data, 0, size);
        std::cout << "Buffer de " << size << " octet(s) créé." << std::endl;
    }

    Buffer(const Buffer& other) : size(other.size) {
        if (size > 0) {
            data = new unsigned char[size];
            std::memcpy(data, other.data, size);
        } else {
            data = nullptr;
        }
        std::cout << "Buffer copié (" << size << " octet(s))." << std::endl;
    }

    void fill(unsigned char value) {
        if (data) std::memset(data, value, size);
    }

    void printHex() const {
        if (!data) {
            std::cout << "(buffer vide)" << std::endl;
            return;
        }
        for (size_t i = 0; i < size; ++i)
            std::cout << std::hex << std::uppercase
                      << std::setw(2) << std::setfill('0')
                      << (int)data[i] << " ";
        std::cout << std::dec << std::endl;
    }

   
    size_t getSize() const { return size; }

    
    ~Buffer() {
        if (data) {
            std::cout << "Destruction du buffer de " << size << " octet(s)." << std::endl;
            delete[] data;
        } else {
            std::cout << "Destruction d’un buffer vide." << std::endl;
        }
    }
};

int main() {
 
    Buffer b1;
    b1.printHex();

    Buffer b2(8);
    b2.fill(0xAA);
    b2.printHex();


   
    Buffer b3(b2);
    b3.printHex();


    return 0;
}
