#include "Store.h"

template <typename T>
Store<T>::Store(int size) {
    inventory = new Product<T>[size];
    numProducts = 0;
}

template <typename T>
Store<T>::~Store() {
    delete[] inventory;
}

template <typename T>
void Store<T>::addProduct(const Product<T>& product) {
    inventory[numProducts++] = product;
}

// Instantiate template functions
template class Store<double>;
