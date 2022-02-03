/**
 * ,--.,------. ,----.   ,------.,--.  ,--. 
 * |  ||  .---''  .-.|   |  .---'|  ,'.|  | 
 * |  ||  `--, |  | .---.|  `--, |  |' '  | 
 * |  ||  `---.'  '--'  ||  `---.|  | `   | 
 * `--'`------' `------' `------'`--'  `--' 
 * 
 * This file is generated by iegen on 01/31/2022-10:17.
 * Please do not change it manually.
 */

#include <stdlib.h>
#include <string.h>
#include <cxxabi.h>
#include <memory>
#include "swift/wrappers/containers/c_nested_containers.h"
#include "cxx/containers/nested_containers.hpp"

using namespace iegen::example;

void release_NestedExamples(IEGenCObject cself, bool owner) {
    free(cself.type);
    if (owner) {
        delete static_cast<iegen::example::NestedExamples*>(cself.ptr);
    }
}

IEGenCObject create_NestedExamples(IEGenCErrorObj* _Nonnull err){
    try {
        auto this_object = new iegen::example::NestedExamples();
        return {strdup("iegen::example::NestedExamples"), this_object};
    }
    catch (const std::exception& e) {
        err->err_type = 1;
        err->err_ptr = new std::exception(e);
    }
    catch (...) {
        err->err_type = -1;
    }
    IEGenCObject result {};
    return result;
}

void _func_NestedExamples_setNestedIntVector(IEGenCObject cself, IEGenCDataArray v, IEGenCErrorObj* _Nonnull err){
    std::vector<std::vector<int>> ctocxxv;

    auto data_v = reinterpret_cast<IEGenCDataArray*>(v.data);

    for (size_t _i_v = 0; _i_v < v.size; ++_i_v) {
        auto& value_v = data_v[_i_v];
        std::vector<int> ctocxxvalue_v;

        auto data_value_v = reinterpret_cast<int*>(value_v.data);

        for (size_t _i_value_v = 0; _i_value_v < value_v.size; ++_i_value_v) {
            auto& value_value_v = data_value_v[_i_value_v];
            
            ctocxxvalue_v.emplace_back(value_value_v);
        }
        ctocxxv.emplace_back(ctocxxvalue_v);
    }
  
    
    auto ctocxxcself = static_cast<iegen::example::NestedExamples*>(cself.ptr);
    try {
        ctocxxcself->setNestedIntVector(ctocxxv);
    }
    catch (const std::exception& e) {
        err->err_type = 1;
        err->err_ptr = new std::exception(e);
    }
    catch (...) {
        err->err_type = -1;
    }
}

IEGenCDataArray _func_NestedExamples_getNestedIntVector(IEGenCObject cself, IEGenCErrorObj* _Nonnull err){
    
    auto ctocxxcself = static_cast<iegen::example::NestedExamples*>(cself.ptr);
    try {
        const auto& result = ctocxxcself->getNestedIntVector();
        auto _data_cxxtocresult = new IEGenCDataArray [result.size()];
        IEGenCDataArray cxxtocresult = { _data_cxxtocresult, static_cast<long long>(result.size()) };
        for (int _i_result = 0; _i_result < result.size(); ++_i_result) {
            auto& value_result = result[_i_result];
            auto _data_cxxtocvalue_result = new int [value_result.size()];
            IEGenCDataArray cxxtocvalue_result = { _data_cxxtocvalue_result, static_cast<long long>(value_result.size()) };
            for (int _i_value_result = 0; _i_value_result < value_result.size(); ++_i_value_result) {
                auto& value_value_result = value_result[_i_value_result];
                
                _data_cxxtocvalue_result[_i_value_result] = value_value_result;
            }
            _data_cxxtocresult[_i_result] = cxxtocvalue_result;
        }
        return cxxtocresult;
    }
    catch (const std::exception& e) {
        err->err_type = 1;
        err->err_ptr = new std::exception(e);
    }
    catch (...) {
        err->err_type = -1;
    }
    IEGenCDataArray result {};
    return result;
}

void _func_NestedExamples_setNestedIntMap(IEGenCObject cself, IEGenCDataMap m, IEGenCErrorObj* _Nonnull err){
    std::map<int, std::map<int, int>> ctocxxm;

    for (size_t _i_m = 0; _i_m < m.size; ++_i_m) {
        auto ktmp_m = reinterpret_cast<int*>(m.keys)[_i_m];
        auto vtmp_m = reinterpret_cast<IEGenCDataMap*>(m.values)[_i_m];
        
        std::map<int, int> ctocxxvtmp_m;

        for (size_t _i_vtmp_m = 0; _i_vtmp_m < vtmp_m.size; ++_i_vtmp_m) {
            auto ktmp_vtmp_m = reinterpret_cast<int*>(vtmp_m.keys)[_i_vtmp_m];
            auto vtmp_vtmp_m = reinterpret_cast<int*>(vtmp_m.values)[_i_vtmp_m];
            
            
            ctocxxvtmp_m.insert({ ktmp_vtmp_m, vtmp_vtmp_m });
        }
        ctocxxm.insert({ ktmp_m, ctocxxvtmp_m });
    }
  
    
    auto ctocxxcself = static_cast<iegen::example::NestedExamples*>(cself.ptr);
    try {
        ctocxxcself->setNestedIntMap(ctocxxm);
    }
    catch (const std::exception& e) {
        err->err_type = 1;
        err->err_ptr = new std::exception(e);
    }
    catch (...) {
        err->err_type = -1;
    }
}

IEGenCDataMap _func_NestedExamples_getNestedIntMap(IEGenCObject cself, IEGenCErrorObj* _Nonnull err){
    
    auto ctocxxcself = static_cast<iegen::example::NestedExamples*>(cself.ptr);
    try {
        const auto& result = ctocxxcself->getNestedIntMap();
        auto _k_data_cxxtocresult = new int [result.size()];
        auto _v_data_cxxtocresult = new IEGenCDataMap [result.size()];
        IEGenCDataMap cxxtocresult = { _k_data_cxxtocresult, _v_data_cxxtocresult, static_cast<long long>(result.size()) };
        size_t _i_result = 0;
        for (auto& value_result : result) {
            const auto& key_result = value_result.first;
            const auto& val_result = value_result.second;
            {
                
                auto _k_data_cxxtocval_result = new int [val_result.size()];
                auto _v_data_cxxtocval_result = new int [val_result.size()];
                IEGenCDataMap cxxtocval_result = { _k_data_cxxtocval_result, _v_data_cxxtocval_result, static_cast<long long>(val_result.size()) };
                size_t _i_val_result = 0;
                for (auto& value_val_result : val_result) {
                    const auto& key_val_result = value_val_result.first;
                    const auto& val_val_result = value_val_result.second;
                    {
                        
                        
                        _k_data_cxxtocval_result[_i_val_result] = key_val_result;
                        _v_data_cxxtocval_result[_i_val_result] = val_val_result;
                        _i_val_result += 1;
                    }
                }
                _k_data_cxxtocresult[_i_result] = key_result;
                _v_data_cxxtocresult[_i_result] = cxxtocval_result;
                _i_result += 1;
            }
        }
        return cxxtocresult;
    }
    catch (const std::exception& e) {
        err->err_type = 1;
        err->err_ptr = new std::exception(e);
    }
    catch (...) {
        err->err_type = -1;
    }
    IEGenCDataMap result {};
    return result;
}

void _func_NestedExamples_mixedExampleWithManyArgs(IEGenCObject cself, IEGenCDataArray v1, IEGenCDataArray v2, IEGenCDataMap m1, IEGenCDataMap m2, IEGenCErrorObj* _Nonnull err){
    std::vector<std::vector<int>> ctocxxv1;

    auto data_v1 = reinterpret_cast<IEGenCDataArray*>(v1.data);

    for (size_t _i_v1 = 0; _i_v1 < v1.size; ++_i_v1) {
        auto& value_v1 = data_v1[_i_v1];
        std::vector<int> ctocxxvalue_v1;

        auto data_value_v1 = reinterpret_cast<int*>(value_v1.data);

        for (size_t _i_value_v1 = 0; _i_value_v1 < value_v1.size; ++_i_value_v1) {
            auto& value_value_v1 = data_value_v1[_i_value_v1];
            
            ctocxxvalue_v1.emplace_back(value_value_v1);
        }
        ctocxxv1.emplace_back(ctocxxvalue_v1);
    }
  
    std::vector<std::vector<int>> ctocxxv2;

    auto data_v2 = reinterpret_cast<IEGenCDataArray*>(v2.data);

    for (size_t _i_v2 = 0; _i_v2 < v2.size; ++_i_v2) {
        auto& value_v2 = data_v2[_i_v2];
        std::vector<int> ctocxxvalue_v2;

        auto data_value_v2 = reinterpret_cast<int*>(value_v2.data);

        for (size_t _i_value_v2 = 0; _i_value_v2 < value_v2.size; ++_i_value_v2) {
            auto& value_value_v2 = data_value_v2[_i_value_v2];
            
            ctocxxvalue_v2.emplace_back(value_value_v2);
        }
        ctocxxv2.emplace_back(ctocxxvalue_v2);
    }
  
    std::map<int, std::map<int, int>> ctocxxm1;

    for (size_t _i_m1 = 0; _i_m1 < m1.size; ++_i_m1) {
        auto ktmp_m1 = reinterpret_cast<int*>(m1.keys)[_i_m1];
        auto vtmp_m1 = reinterpret_cast<IEGenCDataMap*>(m1.values)[_i_m1];
        
        std::map<int, int> ctocxxvtmp_m1;

        for (size_t _i_vtmp_m1 = 0; _i_vtmp_m1 < vtmp_m1.size; ++_i_vtmp_m1) {
            auto ktmp_vtmp_m1 = reinterpret_cast<int*>(vtmp_m1.keys)[_i_vtmp_m1];
            auto vtmp_vtmp_m1 = reinterpret_cast<int*>(vtmp_m1.values)[_i_vtmp_m1];
            
            
            ctocxxvtmp_m1.insert({ ktmp_vtmp_m1, vtmp_vtmp_m1 });
        }
        ctocxxm1.insert({ ktmp_m1, ctocxxvtmp_m1 });
    }
  
    std::map<int, std::map<int, int>> ctocxxm2;

    for (size_t _i_m2 = 0; _i_m2 < m2.size; ++_i_m2) {
        auto ktmp_m2 = reinterpret_cast<int*>(m2.keys)[_i_m2];
        auto vtmp_m2 = reinterpret_cast<IEGenCDataMap*>(m2.values)[_i_m2];
        
        std::map<int, int> ctocxxvtmp_m2;

        for (size_t _i_vtmp_m2 = 0; _i_vtmp_m2 < vtmp_m2.size; ++_i_vtmp_m2) {
            auto ktmp_vtmp_m2 = reinterpret_cast<int*>(vtmp_m2.keys)[_i_vtmp_m2];
            auto vtmp_vtmp_m2 = reinterpret_cast<int*>(vtmp_m2.values)[_i_vtmp_m2];
            
            
            ctocxxvtmp_m2.insert({ ktmp_vtmp_m2, vtmp_vtmp_m2 });
        }
        ctocxxm2.insert({ ktmp_m2, ctocxxvtmp_m2 });
    }
  
    
    auto ctocxxcself = static_cast<iegen::example::NestedExamples*>(cself.ptr);
    try {
        ctocxxcself->mixedExampleWithManyArgs(ctocxxv1, ctocxxv2, ctocxxm1, ctocxxm2);
    }
    catch (const std::exception& e) {
        err->err_type = 1;
        err->err_ptr = new std::exception(e);
    }
    catch (...) {
        err->err_type = -1;
    }
}

void _func_NestedExamples_setVectorOfIntMaps(IEGenCObject cself, IEGenCDataArray v, IEGenCErrorObj* _Nonnull err){
    std::vector<std::map<int, int>> ctocxxv;

    auto data_v = reinterpret_cast<IEGenCDataMap*>(v.data);

    for (size_t _i_v = 0; _i_v < v.size; ++_i_v) {
        auto& value_v = data_v[_i_v];
        std::map<int, int> ctocxxvalue_v;

        for (size_t _i_value_v = 0; _i_value_v < value_v.size; ++_i_value_v) {
            auto ktmp_value_v = reinterpret_cast<int*>(value_v.keys)[_i_value_v];
            auto vtmp_value_v = reinterpret_cast<int*>(value_v.values)[_i_value_v];
            
            
            ctocxxvalue_v.insert({ ktmp_value_v, vtmp_value_v });
        }
        ctocxxv.emplace_back(ctocxxvalue_v);
    }
  
    
    auto ctocxxcself = static_cast<iegen::example::NestedExamples*>(cself.ptr);
    try {
        ctocxxcself->setVectorOfIntMaps(ctocxxv);
    }
    catch (const std::exception& e) {
        err->err_type = 1;
        err->err_ptr = new std::exception(e);
    }
    catch (...) {
        err->err_type = -1;
    }
}

IEGenCDataArray _func_NestedExamples_getVectorOfIntMaps(IEGenCObject cself, IEGenCErrorObj* _Nonnull err){
    
    auto ctocxxcself = static_cast<iegen::example::NestedExamples*>(cself.ptr);
    try {
        const auto& result = ctocxxcself->getVectorOfIntMaps();
        auto _data_cxxtocresult = new IEGenCDataMap [result.size()];
        IEGenCDataArray cxxtocresult = { _data_cxxtocresult, static_cast<long long>(result.size()) };
        for (int _i_result = 0; _i_result < result.size(); ++_i_result) {
            auto& value_result = result[_i_result];
            auto _k_data_cxxtocvalue_result = new int [value_result.size()];
            auto _v_data_cxxtocvalue_result = new int [value_result.size()];
            IEGenCDataMap cxxtocvalue_result = { _k_data_cxxtocvalue_result, _v_data_cxxtocvalue_result, static_cast<long long>(value_result.size()) };
            size_t _i_value_result = 0;
            for (auto& value_value_result : value_result) {
                const auto& key_value_result = value_value_result.first;
                const auto& val_value_result = value_value_result.second;
                {
                    
                    
                    _k_data_cxxtocvalue_result[_i_value_result] = key_value_result;
                    _v_data_cxxtocvalue_result[_i_value_result] = val_value_result;
                    _i_value_result += 1;
                }
            }
            _data_cxxtocresult[_i_result] = cxxtocvalue_result;
        }
        return cxxtocresult;
    }
    catch (const std::exception& e) {
        err->err_type = 1;
        err->err_ptr = new std::exception(e);
    }
    catch (...) {
        err->err_type = -1;
    }
    IEGenCDataArray result {};
    return result;
}

void _func_NestedExamples_setMapOfIntVectors(IEGenCObject cself, IEGenCDataMap m, IEGenCErrorObj* _Nonnull err){
    std::map<int, std::vector<int>> ctocxxm;

    for (size_t _i_m = 0; _i_m < m.size; ++_i_m) {
        auto ktmp_m = reinterpret_cast<int*>(m.keys)[_i_m];
        auto vtmp_m = reinterpret_cast<IEGenCDataArray*>(m.values)[_i_m];
        
        std::vector<int> ctocxxvtmp_m;

        auto data_vtmp_m = reinterpret_cast<int*>(vtmp_m.data);

        for (size_t _i_vtmp_m = 0; _i_vtmp_m < vtmp_m.size; ++_i_vtmp_m) {
            auto& value_vtmp_m = data_vtmp_m[_i_vtmp_m];
            
            ctocxxvtmp_m.emplace_back(value_vtmp_m);
        }
        ctocxxm.insert({ ktmp_m, ctocxxvtmp_m });
    }
  
    
    auto ctocxxcself = static_cast<iegen::example::NestedExamples*>(cself.ptr);
    try {
        ctocxxcself->setMapOfIntVectors(ctocxxm);
    }
    catch (const std::exception& e) {
        err->err_type = 1;
        err->err_ptr = new std::exception(e);
    }
    catch (...) {
        err->err_type = -1;
    }
}

IEGenCDataMap _func_NestedExamples_getMapOfIntVectors(IEGenCObject cself, IEGenCErrorObj* _Nonnull err){
    
    auto ctocxxcself = static_cast<iegen::example::NestedExamples*>(cself.ptr);
    try {
        const auto& result = ctocxxcself->getMapOfIntVectors();
        auto _k_data_cxxtocresult = new int [result.size()];
        auto _v_data_cxxtocresult = new IEGenCDataArray [result.size()];
        IEGenCDataMap cxxtocresult = { _k_data_cxxtocresult, _v_data_cxxtocresult, static_cast<long long>(result.size()) };
        size_t _i_result = 0;
        for (auto& value_result : result) {
            const auto& key_result = value_result.first;
            const auto& val_result = value_result.second;
            {
                
                auto _data_cxxtocval_result = new int [val_result.size()];
                IEGenCDataArray cxxtocval_result = { _data_cxxtocval_result, static_cast<long long>(val_result.size()) };
                for (int _i_val_result = 0; _i_val_result < val_result.size(); ++_i_val_result) {
                    auto& value_val_result = val_result[_i_val_result];
                    
                    _data_cxxtocval_result[_i_val_result] = value_val_result;
                }
                _k_data_cxxtocresult[_i_result] = key_result;
                _v_data_cxxtocresult[_i_result] = cxxtocval_result;
                _i_result += 1;
            }
        }
        return cxxtocresult;
    }
    catch (const std::exception& e) {
        err->err_type = 1;
        err->err_ptr = new std::exception(e);
    }
    catch (...) {
        err->err_type = -1;
    }
    IEGenCDataMap result {};
    return result;
}

void _func_NestedExamples_setComplexStringVector(IEGenCObject cself, IEGenCDataArray v, IEGenCErrorObj* _Nonnull err){
    std::vector<std::vector<std::vector<std::string>>> ctocxxv;

    auto data_v = reinterpret_cast<IEGenCDataArray*>(v.data);

    for (size_t _i_v = 0; _i_v < v.size; ++_i_v) {
        auto& value_v = data_v[_i_v];
        std::vector<std::vector<std::string>> ctocxxvalue_v;

        auto data_value_v = reinterpret_cast<IEGenCDataArray*>(value_v.data);

        for (size_t _i_value_v = 0; _i_value_v < value_v.size; ++_i_value_v) {
            auto& value_value_v = data_value_v[_i_value_v];
            std::vector<std::string> ctocxxvalue_value_v;

            auto data_value_value_v = reinterpret_cast<char**>(value_value_v.data);

            for (size_t _i_value_value_v = 0; _i_value_value_v < value_value_v.size; ++_i_value_value_v) {
                auto& value_value_value_v = data_value_value_v[_i_value_value_v];
                auto ctocxxvalue_value_value_v = std::string(value_value_value_v);
                free(value_value_value_v);
                ctocxxvalue_value_v.emplace_back(ctocxxvalue_value_value_v);
            }
            ctocxxvalue_v.emplace_back(ctocxxvalue_value_v);
        }
        ctocxxv.emplace_back(ctocxxvalue_v);
    }
  
    
    auto ctocxxcself = static_cast<iegen::example::NestedExamples*>(cself.ptr);
    try {
        ctocxxcself->setComplexStringVector(ctocxxv);
    }
    catch (const std::exception& e) {
        err->err_type = 1;
        err->err_ptr = new std::exception(e);
    }
    catch (...) {
        err->err_type = -1;
    }
}

IEGenCDataArray _func_NestedExamples_getComplexStringVector(IEGenCObject cself, IEGenCErrorObj* _Nonnull err){
    
    auto ctocxxcself = static_cast<iegen::example::NestedExamples*>(cself.ptr);
    try {
        const auto& result = ctocxxcself->getComplexStringVector();
        auto _data_cxxtocresult = new IEGenCDataArray [result.size()];
        IEGenCDataArray cxxtocresult = { _data_cxxtocresult, static_cast<long long>(result.size()) };
        for (int _i_result = 0; _i_result < result.size(); ++_i_result) {
            auto& value_result = result[_i_result];
            auto _data_cxxtocvalue_result = new IEGenCDataArray [value_result.size()];
            IEGenCDataArray cxxtocvalue_result = { _data_cxxtocvalue_result, static_cast<long long>(value_result.size()) };
            for (int _i_value_result = 0; _i_value_result < value_result.size(); ++_i_value_result) {
                auto& value_value_result = value_result[_i_value_result];
                auto _data_cxxtocvalue_value_result = new char* [value_value_result.size()];
                IEGenCDataArray cxxtocvalue_value_result = { _data_cxxtocvalue_value_result, static_cast<long long>(value_value_result.size()) };
                for (int _i_value_value_result = 0; _i_value_value_result < value_value_result.size(); ++_i_value_value_result) {
                    auto& value_value_value_result = value_value_result[_i_value_value_result];
                    auto cxxtocvalue_value_value_result = strdup(value_value_value_result.data());
                    _data_cxxtocvalue_value_result[_i_value_value_result] = cxxtocvalue_value_value_result;
                }
                _data_cxxtocvalue_result[_i_value_result] = cxxtocvalue_value_result;
            }
            _data_cxxtocresult[_i_result] = cxxtocvalue_result;
        }
        return cxxtocresult;
    }
    catch (const std::exception& e) {
        err->err_type = 1;
        err->err_ptr = new std::exception(e);
    }
    catch (...) {
        err->err_type = -1;
    }
    IEGenCDataArray result {};
    return result;
}

void _func_NestedExamples_setComplexStringMap(IEGenCObject cself, IEGenCDataMap m, IEGenCErrorObj* _Nonnull err){
    std::map<std::string, std::map<std::string, std::map<std::string, std::string>>> ctocxxm;

    for (size_t _i_m = 0; _i_m < m.size; ++_i_m) {
        auto ktmp_m = reinterpret_cast<char**>(m.keys)[_i_m];
        auto vtmp_m = reinterpret_cast<IEGenCDataMap*>(m.values)[_i_m];
        auto ctocxxktmp_m = std::string(ktmp_m);
        free(ktmp_m);
        std::map<std::string, std::map<std::string, std::string>> ctocxxvtmp_m;

        for (size_t _i_vtmp_m = 0; _i_vtmp_m < vtmp_m.size; ++_i_vtmp_m) {
            auto ktmp_vtmp_m = reinterpret_cast<char**>(vtmp_m.keys)[_i_vtmp_m];
            auto vtmp_vtmp_m = reinterpret_cast<IEGenCDataMap*>(vtmp_m.values)[_i_vtmp_m];
            auto ctocxxktmp_vtmp_m = std::string(ktmp_vtmp_m);
            free(ktmp_vtmp_m);
            std::map<std::string, std::string> ctocxxvtmp_vtmp_m;

            for (size_t _i_vtmp_vtmp_m = 0; _i_vtmp_vtmp_m < vtmp_vtmp_m.size; ++_i_vtmp_vtmp_m) {
                auto ktmp_vtmp_vtmp_m = reinterpret_cast<char**>(vtmp_vtmp_m.keys)[_i_vtmp_vtmp_m];
                auto vtmp_vtmp_vtmp_m = reinterpret_cast<char**>(vtmp_vtmp_m.values)[_i_vtmp_vtmp_m];
                auto ctocxxktmp_vtmp_vtmp_m = std::string(ktmp_vtmp_vtmp_m);
                free(ktmp_vtmp_vtmp_m);
                auto ctocxxvtmp_vtmp_vtmp_m = std::string(vtmp_vtmp_vtmp_m);
                free(vtmp_vtmp_vtmp_m);
                ctocxxvtmp_vtmp_m.insert({ ctocxxktmp_vtmp_vtmp_m, ctocxxvtmp_vtmp_vtmp_m });
            }
            ctocxxvtmp_m.insert({ ctocxxktmp_vtmp_m, ctocxxvtmp_vtmp_m });
        }
        ctocxxm.insert({ ctocxxktmp_m, ctocxxvtmp_m });
    }
  
    
    auto ctocxxcself = static_cast<iegen::example::NestedExamples*>(cself.ptr);
    try {
        ctocxxcself->setComplexStringMap(ctocxxm);
    }
    catch (const std::exception& e) {
        err->err_type = 1;
        err->err_ptr = new std::exception(e);
    }
    catch (...) {
        err->err_type = -1;
    }
}

IEGenCDataMap _func_NestedExamples_getComplexStringMap(IEGenCObject cself, IEGenCErrorObj* _Nonnull err){
    
    auto ctocxxcself = static_cast<iegen::example::NestedExamples*>(cself.ptr);
    try {
        const auto& result = ctocxxcself->getComplexStringMap();
        auto _k_data_cxxtocresult = new char* [result.size()];
        auto _v_data_cxxtocresult = new IEGenCDataMap [result.size()];
        IEGenCDataMap cxxtocresult = { _k_data_cxxtocresult, _v_data_cxxtocresult, static_cast<long long>(result.size()) };
        size_t _i_result = 0;
        for (auto& value_result : result) {
            const auto& key_result = value_result.first;
            const auto& val_result = value_result.second;
            {
                auto cxxtockey_result = strdup(key_result.data());
                auto _k_data_cxxtocval_result = new char* [val_result.size()];
                auto _v_data_cxxtocval_result = new IEGenCDataMap [val_result.size()];
                IEGenCDataMap cxxtocval_result = { _k_data_cxxtocval_result, _v_data_cxxtocval_result, static_cast<long long>(val_result.size()) };
                size_t _i_val_result = 0;
                for (auto& value_val_result : val_result) {
                    const auto& key_val_result = value_val_result.first;
                    const auto& val_val_result = value_val_result.second;
                    {
                        auto cxxtockey_val_result = strdup(key_val_result.data());
                        auto _k_data_cxxtocval_val_result = new char* [val_val_result.size()];
                        auto _v_data_cxxtocval_val_result = new char* [val_val_result.size()];
                        IEGenCDataMap cxxtocval_val_result = { _k_data_cxxtocval_val_result, _v_data_cxxtocval_val_result, static_cast<long long>(val_val_result.size()) };
                        size_t _i_val_val_result = 0;
                        for (auto& value_val_val_result : val_val_result) {
                            const auto& key_val_val_result = value_val_val_result.first;
                            const auto& val_val_val_result = value_val_val_result.second;
                            {
                                auto cxxtockey_val_val_result = strdup(key_val_val_result.data());
                                auto cxxtocval_val_val_result = strdup(val_val_val_result.data());
                                _k_data_cxxtocval_val_result[_i_val_val_result] = cxxtockey_val_val_result;
                                _v_data_cxxtocval_val_result[_i_val_val_result] = cxxtocval_val_val_result;
                                _i_val_val_result += 1;
                            }
                        }
                        _k_data_cxxtocval_result[_i_val_result] = cxxtockey_val_result;
                        _v_data_cxxtocval_result[_i_val_result] = cxxtocval_val_result;
                        _i_val_result += 1;
                    }
                }
                _k_data_cxxtocresult[_i_result] = cxxtockey_result;
                _v_data_cxxtocresult[_i_result] = cxxtocval_result;
                _i_result += 1;
            }
        }
        return cxxtocresult;
    }
    catch (const std::exception& e) {
        err->err_type = 1;
        err->err_ptr = new std::exception(e);
    }
    catch (...) {
        err->err_type = -1;
    }
    IEGenCDataMap result {};
    return result;
}
