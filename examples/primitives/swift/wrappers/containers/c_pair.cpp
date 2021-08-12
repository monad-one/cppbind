/**
 * ,--.,------. ,----.   ,------.,--.  ,--. 
 * |  ||  .---''  .-.|   |  .---'|  ,'.|  | 
 * |  ||  `--, |  | .---.|  `--, |  |' '  | 
 * |  ||  `---.'  '--'  ||  `---.|  | `   | 
 * `--'`------' `------' `------'`--'  `--' 
 * 
 * This file is generated by iegen on 08/12/2021-13:32.
 * Please do not change it manually.
 */

#include <string.h>
#include <memory>
#include "swift/wrappers/containers/c_pair.h"
#include "cxx/containers/pair.hpp"

using namespace iegen::example;

void release_PairExamples(void* _Nonnull cself) {
    delete dynamic_cast<iegen::example::PairExamples*>(static_cast<iegen::example::PairExamples*>(cself));
}

void* _Nonnull create_PairExamples(){
    auto this_object = new iegen::example::PairExamples();
    return static_cast<iegen::example::PairExamples*>(this_object);
}

CDataPair _func_PairExamples_sumIntPairs(void* _Nonnull cself, CDataPair p1, CDataPair p2, ErrorObj* _Nonnull err){
    auto first_tmp_p1 = *reinterpret_cast<int*>(p1.first);
    auto second_tmp_p1 = *reinterpret_cast<int*>(p1.second);


    std::pair<int, int> c_to_cxx_p1 { first_tmp_p1, second_tmp_p1 };
  
    auto first_tmp_p2 = *reinterpret_cast<int*>(p2.first);
    auto second_tmp_p2 = *reinterpret_cast<int*>(p2.second);


    std::pair<int, int> c_to_cxx_p2 { first_tmp_p2, second_tmp_p2 };
  
    auto c_to_cxx_cself = dynamic_cast<iegen::example::PairExamples*>(static_cast<iegen::example::PairExamples*>(cself));
    try {
      const auto& result = c_to_cxx_cself->sumIntPairs(c_to_cxx_p1, c_to_cxx_p2);
      auto _first_data_cxx_to_c_result = new int;
    auto _second_data_cxx_to_c_result = new int;
    const auto& first_result = result.first;
    const auto& second_result = result.second;


    *_first_data_cxx_to_c_result = first_result;
    *_second_data_cxx_to_c_result = second_result;
    CDataPair cxx_to_c_result = { _first_data_cxx_to_c_result, _second_data_cxx_to_c_result };
      return cxx_to_c_result;
    }
    catch (const std::exception& e) {
        err->err_type = 1;
        err->err_ptr = new std::exception(e);
    }
    catch (...) {
        err->err_type = -1;
    }
    CDataPair result;
    return result;
}

void _func_PairExamples_setNestedPair(void* _Nonnull cself, CDataPair p, ErrorObj* _Nonnull err){
    auto first_tmp_p = *reinterpret_cast<CDataPair*>(p.first);
    auto second_tmp_p = *reinterpret_cast<CDataPair*>(p.second);
    auto first_tmp_first_tmp_p = *reinterpret_cast<char**>(first_tmp_p.first);
        auto second_tmp_first_tmp_p = *reinterpret_cast<char**>(first_tmp_p.second);
        auto c_to_cxx_first_tmp_first_tmp_p = std::string(first_tmp_first_tmp_p);
            free(first_tmp_first_tmp_p);
        auto c_to_cxx_second_tmp_first_tmp_p = std::string(second_tmp_first_tmp_p);
            free(second_tmp_first_tmp_p);
        std::pair<std::__cxx11::basic_string<char>, std::__cxx11::basic_string<char> > c_to_cxx_first_tmp_p { c_to_cxx_first_tmp_first_tmp_p, c_to_cxx_second_tmp_first_tmp_p };
    auto first_tmp_second_tmp_p = *reinterpret_cast<char**>(second_tmp_p.first);
        auto second_tmp_second_tmp_p = *reinterpret_cast<char**>(second_tmp_p.second);
        auto c_to_cxx_first_tmp_second_tmp_p = std::string(first_tmp_second_tmp_p);
            free(first_tmp_second_tmp_p);
        auto c_to_cxx_second_tmp_second_tmp_p = std::string(second_tmp_second_tmp_p);
            free(second_tmp_second_tmp_p);
        std::pair<std::__cxx11::basic_string<char>, std::__cxx11::basic_string<char> > c_to_cxx_second_tmp_p { c_to_cxx_first_tmp_second_tmp_p, c_to_cxx_second_tmp_second_tmp_p };
    std::pair<std::pair<std::string, std::string>, std::pair<std::string, std::string> > c_to_cxx_p { c_to_cxx_first_tmp_p, c_to_cxx_second_tmp_p };
  
    auto c_to_cxx_cself = dynamic_cast<iegen::example::PairExamples*>(static_cast<iegen::example::PairExamples*>(cself));
    try {
        c_to_cxx_cself->setNestedPair(c_to_cxx_p);
    }
    catch (const std::exception& e) {
        err->err_type = 1;
        err->err_ptr = new std::exception(e);
    }
    catch (...) {
        err->err_type = -1;
    }
}

CDataPair _func_PairExamples_getNestedPair(void* _Nonnull cself, ErrorObj* _Nonnull err){
    auto c_to_cxx_cself = dynamic_cast<iegen::example::PairExamples*>(static_cast<iegen::example::PairExamples*>(cself));
    try {
      const auto& result = c_to_cxx_cself->getNestedPair();
      auto _first_data_cxx_to_c_result = new CDataPair;
    auto _second_data_cxx_to_c_result = new CDataPair;
    const auto& first_result = result.first;
    const auto& second_result = result.second;
    auto _first_data_cxx_to_c_first_result = new char*;
        auto _second_data_cxx_to_c_first_result = new char*;
        const auto& first_first_result = first_result.first;
        const auto& second_first_result = first_result.second;
        auto cxx_to_c_first_first_result = strdup(first_first_result.c_str()); 
        auto cxx_to_c_second_first_result = strdup(second_first_result.c_str()); 
        *_first_data_cxx_to_c_first_result = cxx_to_c_first_first_result;
        *_second_data_cxx_to_c_first_result = cxx_to_c_second_first_result;
        CDataPair cxx_to_c_first_result = { _first_data_cxx_to_c_first_result, _second_data_cxx_to_c_first_result };
    auto _first_data_cxx_to_c_second_result = new char*;
        auto _second_data_cxx_to_c_second_result = new char*;
        const auto& first_second_result = second_result.first;
        const auto& second_second_result = second_result.second;
        auto cxx_to_c_first_second_result = strdup(first_second_result.c_str()); 
        auto cxx_to_c_second_second_result = strdup(second_second_result.c_str()); 
        *_first_data_cxx_to_c_second_result = cxx_to_c_first_second_result;
        *_second_data_cxx_to_c_second_result = cxx_to_c_second_second_result;
        CDataPair cxx_to_c_second_result = { _first_data_cxx_to_c_second_result, _second_data_cxx_to_c_second_result };
    *_first_data_cxx_to_c_result = cxx_to_c_first_result;
    *_second_data_cxx_to_c_result = cxx_to_c_second_result;
    CDataPair cxx_to_c_result = { _first_data_cxx_to_c_result, _second_data_cxx_to_c_result };
      return cxx_to_c_result;
    }
    catch (const std::exception& e) {
        err->err_type = 1;
        err->err_ptr = new std::exception(e);
    }
    catch (...) {
        err->err_type = -1;
    }
    CDataPair result;
    return result;
}

CDataPair _func_PairExamples_getStringPair(void* _Nonnull cself, ErrorObj* _Nonnull err){
    auto c_to_cxx_cself = dynamic_cast<iegen::example::PairExamples*>(static_cast<iegen::example::PairExamples*>(cself));
    try {
      const auto& result = c_to_cxx_cself->getStringPair();
      auto _first_data_cxx_to_c_result = new char*;
    auto _second_data_cxx_to_c_result = new char*;
    const auto& first_result = result.first;
    const auto& second_result = result.second;
    auto cxx_to_c_first_result = strdup(first_result.c_str()); 
    auto cxx_to_c_second_result = strdup(second_result.c_str()); 
    *_first_data_cxx_to_c_result = cxx_to_c_first_result;
    *_second_data_cxx_to_c_result = cxx_to_c_second_result;
    CDataPair cxx_to_c_result = { _first_data_cxx_to_c_result, _second_data_cxx_to_c_result };
      return cxx_to_c_result;
    }
    catch (const std::exception& e) {
        err->err_type = 1;
        err->err_ptr = new std::exception(e);
    }
    catch (...) {
        err->err_type = -1;
    }
    CDataPair result;
    return result;
}