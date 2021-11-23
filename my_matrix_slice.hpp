#pragma once
#ifndef slice_hpp
#include <initializer_list>
#include <my_matrix_help.hpp>
#include <my_vector.hpp>
#include <type_traits>
my_matrix_namespace_begin

    struct slice
{
    using size_type = size_t;

    size_type start;
    size_type length;
    size_type stride;

    constexpr slice() : start(-1), length(-1), stride(1)
    {
    }

    constexpr explicit slice(size_type init_start) : start(init_start), length(-1), stride(1)
    {
    }

    constexpr slice(size_type init_start, size_type init_length, size_type init_stride)
        : start(init_start), length(init_length), stride(init_stride)
    {
    }

    size_type operator()(size_type i) const
    {
        return start + i * stride;
    }
};

template <size_t N>
struct matrix_slice
{
    using size_type = size_t;
    using vector = typename my_vector::vector<size_type>;
    using initializer_list = typename std::initializer_list<size_type>;

    size_type size;
    size_type start;
    vector extents;
    vector strides;

    //matrix_slice() = default;
    //matrix_slice(size_type init_start, initializer_list init_extents_list) {}
    //matrix_slice(size_type init_start, initializer_list init_extents_list, initializer_list init_strides_list){}
    //template <typename... Dims>
    //matrix_slice(Dims... dims)
    //下标计算
    
};

my_matrix_namespace_end
#define slice_hpp
#endif //slice_hpp