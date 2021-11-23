#pragma once
#ifndef my_matrix_ref_hpp
#define my_matrix_ref_hpp
#include <my_matrix_help.hpp>
#include <my_matrix_slice.hpp>
my_matrix_namespace_begin template <typename Ty, size_t N>
class matrix_ref
{
private:
    using slice = matrix_slice<N>;

private:
    slice desc;
    Ty *elements_pointer;

public:
    my_matrix_ref(const slice &init_desc, Ty *init_ptr) 
    : desc(init_desc), elements_pointer(init_ptr) 
    {}
};

my_matrix_namespace_end
#endif //my_matrix_ref_hpp