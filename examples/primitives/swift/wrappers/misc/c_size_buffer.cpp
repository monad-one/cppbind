/**
 * ,--.,------. ,----.   ,------.,--.  ,--. 
 * |  ||  .---''  .-.|   |  .---'|  ,'.|  | 
 * |  ||  `--, |  | .---.|  `--, |  |' '  | 
 * |  ||  `---.'  '--'  ||  `---.|  | `   | 
 * `--'`------' `------' `------'`--'  `--' 
 * 
 * This file is generated by iegen on 03/15/2022-07:19.
 * Please do not change it manually.
 */

#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <cxxabi.h>
#include <memory>
#include <type_traits>
#include "swift/wrappers/misc/c_size_buffer.h"
#include "cxx/misc/size_buffer.hpp"

using namespace iegen::example;

void release_IegenExample_SizeUsage(IEGenCObject cself, bool owner) {
    if (owner) {
        delete static_cast<iegen::example::SizeUsage*>(cself.ptr);
    }
    free(cself.type);
}

IEGenCDataPair _func_IegenExample_SizeUsage_multiplyBy(IEGenCDataPair size, int n, IEGenCObject* _Nonnull err) {
    auto& first_tmp_size = *reinterpret_cast<float*>(size.first);
    auto& second_tmp_size = *reinterpret_cast<float*>(size.second);
    SizeF ctocxxsize { first_tmp_size, second_tmp_size };
  
  
    try {
        const auto& result = iegen::example::SizeUsage::multiplyBy(ctocxxsize, n);
        auto _first_data_cxxtocresult = new float;
        auto _second_data_cxxtocresult = new float;
        *_first_data_cxxtocresult = result.width;
        *_second_data_cxxtocresult = result.height;
        IEGenCDataPair cxxtocresult = { _first_data_cxxtocresult, _second_data_cxxtocresult };
        return cxxtocresult;
    } catch (const std::exception& e) {
        err->type = strdup("std::exception");
        err->ptr = new std::exception(e);
    } catch (...) {
        err->type = strdup("Uncaught Exception");
    }
    IEGenCDataPair result {};
    return result;
}

IEGenCDataPair _func_IegenExample_SizeUsage_doubleSizeF_1(IEGenCObject* _Nonnull err) {
    try {
        const auto& result = iegen::example::SizeUsage::doubleSizeF();
        auto _first_data_cxxtocresult = new float;
        auto _second_data_cxxtocresult = new float;
        *_first_data_cxxtocresult = result.width;
        *_second_data_cxxtocresult = result.height;
        IEGenCDataPair cxxtocresult = { _first_data_cxxtocresult, _second_data_cxxtocresult };
        return cxxtocresult;
    } catch (const std::exception& e) {
        err->type = strdup("std::exception");
        err->ptr = new std::exception(e);
    } catch (...) {
        err->type = strdup("Uncaught Exception");
    }
    IEGenCDataPair result {};
    return result;
}

IEGenCDataPair _func_IegenExample_SizeUsage_doubleSizeF(IEGenCDataPair resolution, IEGenCObject* _Nonnull err) {
    auto& first_tmp_resolution = *reinterpret_cast<float*>(resolution.first);
    auto& second_tmp_resolution = *reinterpret_cast<float*>(resolution.second);
    const SizeF & ctocxxresolution { first_tmp_resolution, second_tmp_resolution };
  
    try {
        const auto& result = iegen::example::SizeUsage::doubleSizeF(ctocxxresolution);
        auto _first_data_cxxtocresult = new float;
        auto _second_data_cxxtocresult = new float;
        *_first_data_cxxtocresult = result.width;
        *_second_data_cxxtocresult = result.height;
        IEGenCDataPair cxxtocresult = { _first_data_cxxtocresult, _second_data_cxxtocresult };
        return cxxtocresult;
    } catch (const std::exception& e) {
        err->type = strdup("std::exception");
        err->ptr = new std::exception(e);
    } catch (...) {
        err->type = strdup("Uncaught Exception");
    }
    IEGenCDataPair result {};
    return result;
}

