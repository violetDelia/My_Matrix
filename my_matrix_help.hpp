#pragma once
#ifndef My_Matrix_help_hpp
#define My_Matrix_help_hpp

#include <cstddef>

#define My_Matrix_namespace my_mat
#define M_mat My_Matrix_namespace::
#define My_Matrix_namespace_begin \
    namespace My_Matrix_namespace \
    {
#define My_Matrix_namespace_end }

My_Matrix_namespace_begin

    //using ::size_t;
    using size_t = ::size_t;
My_Matrix_namespace_end

#endif //My_Matrix_help_hpp