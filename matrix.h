//
// Created by rrivas on 29/11/2024.
//

#ifndef NEURAL_NETWORK_MATRIX_H
#define NEURAL_NETWORK_MATRIX_H

template <typename T>
class DynamicMatrix {

public:
    DynamicMatrix(size_t rows, size_t cols) {}
    void reshape(size_t rows, size_t cols) {}
    void resize(size_t rows, size_t cols) {}
};

template <typename T, size_t Rows, size_t Cols>
class StaticMatrix {

};

// Operaciones de Matriz (Operadores del tipo funcion
template<typename T>
DynamicMatrix<T> operator*(DynamicMatrix<T> a, DynamicMatrix<T> b) {

}
template<typename T>
DynamicMatrix<T> operator+(DynamicMatrix<T> a, DynamicMatrix<T> b) {

}

// Function
template<typename T, typename UnaryFunction>
DynamicMatrix<T> apply(DynamicMatrix<T> source, UnaryFunction fun) {

}
#endif //NEURAL_NETWORK_MATRIX_H
