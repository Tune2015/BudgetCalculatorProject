#ifndef APPLYDISCOUNT_H
#define APPLYDISCOUNT_H

#include "Product.h"

template <typename T>
void applyDiscount(Product<T>& p, double percentage) {
    T discount = p.price * (percentage / 100);
    p.setPrice(p.price - discount);
}

#endif
