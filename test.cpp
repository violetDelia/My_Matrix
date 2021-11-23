#include <iostream>
#include <my_matrix.hpp>
int main()
{
    my_mat::matrix_initializer_list_type<double, 1> init = {1, 2, 3};
    my_mat::matrix<double, 1> mat{1, 2, 3};
    std::system("pause");
}