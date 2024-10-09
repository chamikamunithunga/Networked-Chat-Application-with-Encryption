#include <iostream>
#include <memory>

template<typename T>
class CustomAllocator : public std::allocator<T> {
public:
    T* allocate(std::size_t n) {
        std::cout << "Custom allocation of " << n << " elements" << std::endl;
        return std::allocator<T>::allocate(n);
    }

    void deallocate(T* p, std::size_t n) {
        std::cout << "Custom deallocation of " << n << " elements" << std::endl;
        std::allocator<T>::deallocate(p, n);
    }
};


int main() {
    std::vector<int, CustomAllocator<int>> v(10);
    return 0;
}
