#pragma once
#ifndef my_matrix_initializer_hpp
#define my_matrix_initializer_hpp
#include <initializer_list>
#include <my_matrix_help.hpp>
my_matrix_namespace_begin

    template <typename Ty, size_t N>
    struct matrix_initializer_list
{
    using type = std::initializer_list<typename matrix_initializer_list<Ty, N - 1>::type>;
};

template <typename Ty>
struct matrix_initializer_list<Ty, 1>
{
    using type = std::initializer_list<Ty>;
};

template <typename Ty>
struct matrix_initializer_list<Ty, 0>;

template <typename Ty, size_t N>
using matrix_initializer_list_type = typename matrix_initializer_list<Ty, N>::type;

my_matrix_namespace_end
#endif //my_matrix_initializer_hpp