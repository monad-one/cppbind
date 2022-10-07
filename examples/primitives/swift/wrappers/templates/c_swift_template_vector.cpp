/**
 *   ______ .______   .______   .______    __  .__   __.  _______  
 *  /      ||   _  \  |   _  \  |   _  \  |  | |  \ |  | |       \ 
 * |  ,----'|  |_)  | |  |_)  | |  |_)  | |  | |   \|  | |  .--.  |
 * |  |     |   ___/  |   ___/  |   _  <  |  | |  . `  | |  |  |  |
 * |  `----.|  |      |  |      |  |_)  | |  | |  |\   | |  '--'  |
 *  \______|| _|      | _|      |______/  |__| |__| \__| |_______/ 
 * 
 * This file is generated by cppbind on 09/30/2022-06:41.
 * Please do not change it manually.
 */

#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <cxxabi.h>
#include <memory>
#include <type_traits>
#include "swift/wrappers/templates/c_swift_template_vector.h"
#include "cxx/templates/vector.hpp"

extern const char* CPPBIND_STD_STDEXCEPTION;

const char* CPPBIND_CPPBIND_EXAMPLE_VECTORINT = "cppbind::example::Vector<int, std::allocator<int>>";
const char* CPPBIND_CPPBIND_EXAMPLE_STRINGSVECTOR = "cppbind::example::Vector<std::string, std::allocator<std::string>>";
const char* CPPBIND_CPPBIND_EXAMPLE_VECTOR = "cppbind::example::Vector<double, std::allocator<double>>";

void release_CppbindExample_VectorInt(CppBindCObject cself, bool owner) {
    using namespace cppbind::example;
    if (owner) {
        delete static_cast<cppbind::example::Vector<int, std::allocator<int>>*>(cself.ptr);
    }
    free(cself.type);
}

CppBindCObject create_CppbindExample_VectorInt(CppBindCObject* _Nonnull cppbind_err) {
    using namespace cppbind::example;
    try {
        auto this_object = new cppbind::example::Vector<int, std::allocator<int>>();
        return {strdup(CPPBIND_CPPBIND_EXAMPLE_VECTORINT), this_object};
    } catch (const std::exception& e) {
        cppbind_err->type = strdup(CPPBIND_STD_STDEXCEPTION);
        cppbind_err->ptr = new std::exception(e);
    } catch (...) {
        cppbind_err->type = strdup("Uncaught Exception");
    }
    CppBindCObject result {};
    return result;
}

CppBindCObject create_CppbindExample_VectorInt1(CppBindCObject vec, CppBindCObject* _Nonnull cppbind_err) {
    using namespace cppbind::example;
    
    auto& ctocxxvec = *static_cast<cppbind::example::Vector<int, std::allocator<int>>*>(vec.ptr);
    try {
        auto this_object = new cppbind::example::Vector<int, std::allocator<int>>(ctocxxvec);
        return {strdup(CPPBIND_CPPBIND_EXAMPLE_VECTORINT), this_object};
    } catch (const std::exception& e) {
        cppbind_err->type = strdup(CPPBIND_STD_STDEXCEPTION);
        cppbind_err->ptr = new std::exception(e);
    } catch (...) {
        cppbind_err->type = strdup("Uncaught Exception");
    }
    CppBindCObject result {};
    return result;
}

void _func_CppbindExample_VectorInt_pushBack(CppBindCObject cself, int value, CppBindCObject* _Nonnull cppbind_err) {
    using namespace cppbind::example;

    auto ctocxxcself = static_cast<cppbind::example::Vector<int, std::allocator<int>>*>(cself.ptr);
    try {
        ctocxxcself->push_back(value);
    } catch (const std::exception& e) {
        cppbind_err->type = strdup(CPPBIND_STD_STDEXCEPTION);
        cppbind_err->ptr = new std::exception(e);
    } catch (...) {
        cppbind_err->type = strdup("Uncaught Exception");
    }
}

void _func_CppbindExample_VectorInt_popBack(CppBindCObject cself, CppBindCObject* _Nonnull cppbind_err) {
    using namespace cppbind::example;
    auto ctocxxcself = static_cast<cppbind::example::Vector<int, std::allocator<int>>*>(cself.ptr);
    try {
        ctocxxcself->pop_back();
    } catch (const std::exception& e) {
        cppbind_err->type = strdup(CPPBIND_STD_STDEXCEPTION);
        cppbind_err->ptr = new std::exception(e);
    } catch (...) {
        cppbind_err->type = strdup("Uncaught Exception");
    }
}


int _func_CppbindExample_VectorInt__getitem_(CppBindCObject cself,int idx) {
    using namespace cppbind::example;
    auto ctocxxcself = static_cast<cppbind::example::Vector<int, std::allocator<int>>*>(cself.ptr);
    decltype(auto) result = ctocxxcself->operator[](idx);
    
    return result;
}
CppBindCObject _func_CppbindExample_VectorInt__add_(CppBindCObject cself, CppBindCObject rhs, CppBindCObject* _Nonnull cppbind_err) {
    using namespace cppbind::example;
    
    auto& ctocxxrhs = *static_cast<cppbind::example::Vector<int, std::allocator<int>>*>(rhs.ptr);

    auto ctocxxcself = static_cast<cppbind::example::Vector<int, std::allocator<int>>*>(cself.ptr);
    try {
        decltype(auto) result = ctocxxcself->operator+(ctocxxrhs);
        
        char* type_result = strdup(CPPBIND_CPPBIND_EXAMPLE_VECTORINT);
        auto value_ptr_result = new cppbind::example::Vector<int, std::allocator<int>>(result);
        CppBindCObject cxxtocresult = {type_result, value_ptr_result};
        return cxxtocresult;
    } catch (const std::exception& e) {
        cppbind_err->type = strdup(CPPBIND_STD_STDEXCEPTION);
        cppbind_err->ptr = new std::exception(e);
    } catch (...) {
        cppbind_err->type = strdup("Uncaught Exception");
    }
    CppBindCObject result {};
    return result;
}

bool _func_CppbindExample_VectorInt__eq_(CppBindCObject cself, CppBindCObject rhs, CppBindCObject* _Nonnull cppbind_err) {
    using namespace cppbind::example;
    
    auto& ctocxxrhs = *static_cast<cppbind::example::Vector<int, std::allocator<int>>*>(rhs.ptr);

    auto ctocxxcself = static_cast<cppbind::example::Vector<int, std::allocator<int>>*>(cself.ptr);
    try {
        decltype(auto) result = ctocxxcself->operator==(ctocxxrhs);
        
        return result;
    } catch (const std::exception& e) {
        cppbind_err->type = strdup(CPPBIND_STD_STDEXCEPTION);
        cppbind_err->ptr = new std::exception(e);
    } catch (...) {
        cppbind_err->type = strdup("Uncaught Exception");
    }
    bool result {};
    return result;
}

void release_CppbindExample_StringsVector(CppBindCObject cself, bool owner) {
    using namespace cppbind::example;
    if (owner) {
        delete static_cast<cppbind::example::Vector<std::string, std::allocator<std::string>>*>(cself.ptr);
    }
    free(cself.type);
}

CppBindCObject create_CppbindExample_StringsVector(CppBindCObject* _Nonnull cppbind_err) {
    using namespace cppbind::example;
    try {
        auto this_object = new cppbind::example::Vector<std::string, std::allocator<std::string>>();
        return {strdup(CPPBIND_CPPBIND_EXAMPLE_STRINGSVECTOR), this_object};
    } catch (const std::exception& e) {
        cppbind_err->type = strdup(CPPBIND_STD_STDEXCEPTION);
        cppbind_err->ptr = new std::exception(e);
    } catch (...) {
        cppbind_err->type = strdup("Uncaught Exception");
    }
    CppBindCObject result {};
    return result;
}

CppBindCObject create_CppbindExample_StringsVector1(CppBindCObject vec, CppBindCObject* _Nonnull cppbind_err) {
    using namespace cppbind::example;
    
    auto& ctocxxvec = *static_cast<cppbind::example::Vector<std::string, std::allocator<std::string>>*>(vec.ptr);
    try {
        auto this_object = new cppbind::example::Vector<std::string, std::allocator<std::string>>(ctocxxvec);
        return {strdup(CPPBIND_CPPBIND_EXAMPLE_STRINGSVECTOR), this_object};
    } catch (const std::exception& e) {
        cppbind_err->type = strdup(CPPBIND_STD_STDEXCEPTION);
        cppbind_err->ptr = new std::exception(e);
    } catch (...) {
        cppbind_err->type = strdup("Uncaught Exception");
    }
    CppBindCObject result {};
    return result;
}

void _func_CppbindExample_StringsVector_pushBack(CppBindCObject cself, char* _Nonnull value, CppBindCObject* _Nonnull cppbind_err) {
    using namespace cppbind::example;
    auto ctocxxvalue = std::string(value);
    free(value);

    auto ctocxxcself = static_cast<cppbind::example::Vector<std::string, std::allocator<std::string>>*>(cself.ptr);
    try {
        ctocxxcself->push_back(ctocxxvalue);
    } catch (const std::exception& e) {
        cppbind_err->type = strdup(CPPBIND_STD_STDEXCEPTION);
        cppbind_err->ptr = new std::exception(e);
    } catch (...) {
        cppbind_err->type = strdup("Uncaught Exception");
    }
}

void _func_CppbindExample_StringsVector_popBack(CppBindCObject cself, CppBindCObject* _Nonnull cppbind_err) {
    using namespace cppbind::example;
    auto ctocxxcself = static_cast<cppbind::example::Vector<std::string, std::allocator<std::string>>*>(cself.ptr);
    try {
        ctocxxcself->pop_back();
    } catch (const std::exception& e) {
        cppbind_err->type = strdup(CPPBIND_STD_STDEXCEPTION);
        cppbind_err->ptr = new std::exception(e);
    } catch (...) {
        cppbind_err->type = strdup("Uncaught Exception");
    }
}


char* _Nonnull _func_CppbindExample_StringsVector__getitem_(CppBindCObject cself,int idx) {
    using namespace cppbind::example;
    auto ctocxxcself = static_cast<cppbind::example::Vector<std::string, std::allocator<std::string>>*>(cself.ptr);
    decltype(auto) result = ctocxxcself->operator[](idx);
    auto cxxtocresult = strdup(result.data());
    return cxxtocresult;
}
CppBindCObject _func_CppbindExample_StringsVector__add_(CppBindCObject cself, CppBindCObject rhs, CppBindCObject* _Nonnull cppbind_err) {
    using namespace cppbind::example;
    
    auto& ctocxxrhs = *static_cast<cppbind::example::Vector<std::string, std::allocator<std::string>>*>(rhs.ptr);

    auto ctocxxcself = static_cast<cppbind::example::Vector<std::string, std::allocator<std::string>>*>(cself.ptr);
    try {
        decltype(auto) result = ctocxxcself->operator+(ctocxxrhs);
        
        char* type_result = strdup(CPPBIND_CPPBIND_EXAMPLE_STRINGSVECTOR);
        auto value_ptr_result = new cppbind::example::Vector<std::string, std::allocator<std::string>>(result);
        CppBindCObject cxxtocresult = {type_result, value_ptr_result};
        return cxxtocresult;
    } catch (const std::exception& e) {
        cppbind_err->type = strdup(CPPBIND_STD_STDEXCEPTION);
        cppbind_err->ptr = new std::exception(e);
    } catch (...) {
        cppbind_err->type = strdup("Uncaught Exception");
    }
    CppBindCObject result {};
    return result;
}

bool _func_CppbindExample_StringsVector__eq_(CppBindCObject cself, CppBindCObject rhs, CppBindCObject* _Nonnull cppbind_err) {
    using namespace cppbind::example;
    
    auto& ctocxxrhs = *static_cast<cppbind::example::Vector<std::string, std::allocator<std::string>>*>(rhs.ptr);

    auto ctocxxcself = static_cast<cppbind::example::Vector<std::string, std::allocator<std::string>>*>(cself.ptr);
    try {
        decltype(auto) result = ctocxxcself->operator==(ctocxxrhs);
        
        return result;
    } catch (const std::exception& e) {
        cppbind_err->type = strdup(CPPBIND_STD_STDEXCEPTION);
        cppbind_err->ptr = new std::exception(e);
    } catch (...) {
        cppbind_err->type = strdup("Uncaught Exception");
    }
    bool result {};
    return result;
}

void release_CppbindExample_Vector(CppBindCObject cself, bool owner) {
    using namespace cppbind::example;
    if (owner) {
        delete static_cast<cppbind::example::Vector<double, std::allocator<double>>*>(cself.ptr);
    }
    free(cself.type);
}

CppBindCObject create_CppbindExample_Vector(CppBindCObject* _Nonnull cppbind_err) {
    using namespace cppbind::example;
    try {
        auto this_object = new cppbind::example::Vector<double, std::allocator<double>>();
        return {strdup(CPPBIND_CPPBIND_EXAMPLE_VECTOR), this_object};
    } catch (const std::exception& e) {
        cppbind_err->type = strdup(CPPBIND_STD_STDEXCEPTION);
        cppbind_err->ptr = new std::exception(e);
    } catch (...) {
        cppbind_err->type = strdup("Uncaught Exception");
    }
    CppBindCObject result {};
    return result;
}

CppBindCObject create_CppbindExample_Vector1(CppBindCObject vec, CppBindCObject* _Nonnull cppbind_err) {
    using namespace cppbind::example;
    
    auto& ctocxxvec = *static_cast<cppbind::example::Vector<double, std::allocator<double>>*>(vec.ptr);
    try {
        auto this_object = new cppbind::example::Vector<double, std::allocator<double>>(ctocxxvec);
        return {strdup(CPPBIND_CPPBIND_EXAMPLE_VECTOR), this_object};
    } catch (const std::exception& e) {
        cppbind_err->type = strdup(CPPBIND_STD_STDEXCEPTION);
        cppbind_err->ptr = new std::exception(e);
    } catch (...) {
        cppbind_err->type = strdup("Uncaught Exception");
    }
    CppBindCObject result {};
    return result;
}

void _func_CppbindExample_Vector_pushBack(CppBindCObject cself, double value, CppBindCObject* _Nonnull cppbind_err) {
    using namespace cppbind::example;

    auto ctocxxcself = static_cast<cppbind::example::Vector<double, std::allocator<double>>*>(cself.ptr);
    try {
        ctocxxcself->push_back(value);
    } catch (const std::exception& e) {
        cppbind_err->type = strdup(CPPBIND_STD_STDEXCEPTION);
        cppbind_err->ptr = new std::exception(e);
    } catch (...) {
        cppbind_err->type = strdup("Uncaught Exception");
    }
}

void _func_CppbindExample_Vector_popBack(CppBindCObject cself, CppBindCObject* _Nonnull cppbind_err) {
    using namespace cppbind::example;
    auto ctocxxcself = static_cast<cppbind::example::Vector<double, std::allocator<double>>*>(cself.ptr);
    try {
        ctocxxcself->pop_back();
    } catch (const std::exception& e) {
        cppbind_err->type = strdup(CPPBIND_STD_STDEXCEPTION);
        cppbind_err->ptr = new std::exception(e);
    } catch (...) {
        cppbind_err->type = strdup("Uncaught Exception");
    }
}


double _func_CppbindExample_Vector__getitem_(CppBindCObject cself,int idx) {
    using namespace cppbind::example;
    auto ctocxxcself = static_cast<cppbind::example::Vector<double, std::allocator<double>>*>(cself.ptr);
    decltype(auto) result = ctocxxcself->operator[](idx);
    
    return result;
}
CppBindCObject _func_CppbindExample_Vector__add_(CppBindCObject cself, CppBindCObject rhs, CppBindCObject* _Nonnull cppbind_err) {
    using namespace cppbind::example;
    
    auto& ctocxxrhs = *static_cast<cppbind::example::Vector<double, std::allocator<double>>*>(rhs.ptr);

    auto ctocxxcself = static_cast<cppbind::example::Vector<double, std::allocator<double>>*>(cself.ptr);
    try {
        decltype(auto) result = ctocxxcself->operator+(ctocxxrhs);
        
        char* type_result = strdup(CPPBIND_CPPBIND_EXAMPLE_VECTOR);
        auto value_ptr_result = new cppbind::example::Vector<double, std::allocator<double>>(result);
        CppBindCObject cxxtocresult = {type_result, value_ptr_result};
        return cxxtocresult;
    } catch (const std::exception& e) {
        cppbind_err->type = strdup(CPPBIND_STD_STDEXCEPTION);
        cppbind_err->ptr = new std::exception(e);
    } catch (...) {
        cppbind_err->type = strdup("Uncaught Exception");
    }
    CppBindCObject result {};
    return result;
}

bool _func_CppbindExample_Vector__eq_(CppBindCObject cself, CppBindCObject rhs, CppBindCObject* _Nonnull cppbind_err) {
    using namespace cppbind::example;
    
    auto& ctocxxrhs = *static_cast<cppbind::example::Vector<double, std::allocator<double>>*>(rhs.ptr);

    auto ctocxxcself = static_cast<cppbind::example::Vector<double, std::allocator<double>>*>(cself.ptr);
    try {
        decltype(auto) result = ctocxxcself->operator==(ctocxxrhs);
        
        return result;
    } catch (const std::exception& e) {
        cppbind_err->type = strdup(CPPBIND_STD_STDEXCEPTION);
        cppbind_err->ptr = new std::exception(e);
    } catch (...) {
        cppbind_err->type = strdup("Uncaught Exception");
    }
    bool result {};
    return result;
}

