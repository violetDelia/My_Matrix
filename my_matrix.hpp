#pragma once
#ifndef my_matrix_hpp
#define my_matrix_hpp

#include <my_matrix_base.hpp>
#include <my_matrix_help.hpp>
#include <my_matrix_initializer.hpp>
#include <my_matrix_slice.hpp>
//stl
#include <my_vector.hpp>
my_matrix_namespace_begin

    template <typename Ty>
    using vector = my_vector::vector<Ty>;

template <typename Ty, size_t N>
class matrix : matrix_base<Ty, N>
{
private:
    using vector = my_vector::vector<Ty>;
    using value_type = typename vector::value_type;
    using vector_iterator = typename vector::iterator;
    using const_vector_iterator = typename vector::const_iterator;
    using reference = typename vector::reference;
    using const_reference = typename vector::const_reference;
    using size_type = typename vector::size_type;
    using slice = matrix_slice<N>;

private:
    vector elements;
    slice desc;

public:
    constexpr matrix() = default;
    //constexpr matrix(const matrix &&other) = default;
    //constexpr matrix(const matrix &other) = default;
    //constexpr matrix &operator=(const matrix &&other) = default;
    //constexpr matrix &operator=(const matrix &other) = default;
    ~matrix() = default;

    //template <typename U>
    //constexpr matrix(const matrix_ref<U, N> &other_ref)

    //template <typename U>
    //constexpr matrix &operator=(const matrix_ref<U, N> &otehr_ref)

    //template <typename... Exts>
    //constexpr explicit matrix(Exts... exts) : desc{exts}, elements(desc.size){}

    constexpr matrix(const matrix_initializer_list_type<Ty,N> &matrix_init_list)
    {
        std::cout<<"s";
    }

    //constexpr matrix &operator=(matrix_initializer<T, N> matrix_init_list)

public:
    constexpr size_t order()
    {
        return N;
    }

    constexpr size_t extent(size_t n) const
    {
        return desc.extents[n];
    }

    constexpr size_t size()
    {
        return elements.size();
    }

    constexpr const slice &get_slice() const
    {
        return desc;
    }

    constexpr auto date()
    {
        return elements.date();
    }
};

my_matrix_namespace_end

#endif //my_matrix_hpp