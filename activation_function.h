//
// Created by rrivas on 29/11/2024.
//

#ifndef NEURAL_NETWORK_ACTIVATION_FUNCTION_H
#define NEURAL_NETWORK_ACTIVATION_FUNCTION_H

template <typename T>
struct Sigmoid {
    T operator() (T value) { /* */ }
    T derivate(T value) { /* */ }
};

template <typename T>
struct Relu {
    T operator() (T value) { /* */ }
    T derivate(T value) { /* */ }
};

template <typename T>
struct SoftMax {
    T operator() (T value) { /* */ }
    T derivate(T value) { /* */ }
};

#endif //NEURAL_NETWORK_ACTIVATION_FUNCTION_H
