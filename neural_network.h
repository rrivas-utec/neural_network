//
// Created by rrivas on 29/11/2024.
//

#ifndef NEURAL_NETWORK_NEURAL_NETWORK_H
#define NEURAL_NETWORK_NEURAL_NETWORK_H

#include "matrix.h"
#include "activation_function.h"
#include "layer.h"
#include <vector>

template <typename T>
class neural_network {
    DynamicMatrix<T> in_;
    std::vector<layer<T>> hidden_layers_;
    DynamicMatrix<T> out_;
public:
    neural_network() = default;
    void add_layer(size_t n, size_t n_in, const std::string& params_path, std::function<T(T)> fa) {
        hidden_layers.emplace_back(n, n_in, params_path, fa);

    }

    void load_in(const std::string& path) {

    }

    size_t max_estimation(DynamicMatrix<T> m) {

    }
    
    size_t predition (const std::string& path) {
        load_in(path);
        auto out = in_;
        for (auto& layer: hidden_layers_) {
            out = layer.forward(out);
        }
        return max_estimation(out);
    }
};

#endif //NEURAL_NETWORK_NEURAL_NETWORK_H
