#ifndef STORE_H
#define STORE_H

#include "Product.h"

template <typename T>
class Store {
private:
    Product<T>* inventory;
    int numProducts;

public:
    // Constructor
    Store(int size);
    
    // Destructor
    ~Store();
    
    // Add product to inventory
    void addProduct(const Product<T>& product);
    
    // Other methods for managing inventory
};

#endif
