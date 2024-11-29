//
// Created by rrivas on 29/11/2024.
//

#ifndef NEURAL_NETWORK_LAYER_H
#define NEURAL_NETWORK_LAYER_H

#include "matrix.h"
#include <functional>
#include <string>

template <typename T>
class layer {
    size_t n_in;
    size_t n;
    DynamicMatrix<T> w_;
    DynamicMatrix<T> b_;
    DynamicMatrix<T> x_;
    std::function<T(T)> activation_function;

    void load_weights(const std::string& file_name) {

    }
    void load_bias(const std::string& file_name) {

    }
public:
    layer(
            size_t n,
            size_t n_in,
            const std::string& params_path, // "../parameters/layer_1/"
            std::function<T(T)> activation_function) {}
    DynamicMatrix<T> forward(DynamicMatrix<T> x) {
        auto y = w*x + b;
        return apply(y, activation_function);
    }
};

#endif //NEURAL_NETWORK_LAYER_H
