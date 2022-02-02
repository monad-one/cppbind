/**
 * ,--.,------. ,----.   ,------.,--.  ,--. 
 * |  ||  .---''  .-.|   |  .---'|  ,'.|  | 
 * |  ||  `--, |  | .---.|  `--, |  |' '  | 
 * |  ||  `---.'  '--'  ||  `---.|  | `   | 
 * `--'`------' `------' `------'`--'  `--' 
 * 
 * This file is generated by iegen on 02/02/2022-10:55.
 * Please do not change it manually.
 */

#include <iostream>
#include <string.h>
#include <cxxabi.h>
#include <memory>
#include <type_traits>
#include "swift/wrappers/enums/c_frame.h"
#include "cxx/enums/frame.hpp"
#include "cxx/enums/color.hpp"

using namespace iegen::example;

void release_Frame(CObject cself, bool owner) {
    delete cself.type;
    if (owner) {
        delete static_cast<iegen::example::Frame*>(cself.ptr);
    }
}

CObject create_Frame(ErrorObj* _Nonnull err){
    try {
        auto this_object = new iegen::example::Frame();
        return {strdup("iegen::example::Frame"), this_object};
    }
    catch (const std::exception& e) {
        err->err_type = 1;
        err->err_ptr = new std::exception(e);
    }
    catch (...) {
        err->err_type = -1;
    }
    CObject result{};
    return result;
}
unsigned int _prop_get_Frame_backgroundColor(CObject cself){
    auto ctocxxcself = static_cast<iegen::example::Frame*>(cself.ptr);
    const auto& result = ctocxxcself->backgroundColor;
    unsigned int cxxtocresult = (unsigned int)result;
    return cxxtocresult;
}
void _prop_set_Frame_backgroundColor(CObject cself, unsigned int backgroundColor){
    
    auto ctocxxcself = static_cast<iegen::example::Frame*>(cself.ptr);
    auto ctocxxbackgroundColor = (iegen::example::Color)backgroundColor;
    ctocxxcself->backgroundColor = ctocxxbackgroundColor;
}

unsigned int _prop_get_Frame_backgroundColorShade(CObject cself){
    auto ctocxxcself = static_cast<iegen::example::Frame*>(cself.ptr);
    const auto& result = ctocxxcself->backgroundColorShade;
    unsigned int cxxtocresult = (unsigned int)result;
    return cxxtocresult;
}
void _prop_set_Frame_backgroundColorShade(CObject cself, unsigned int backgroundColorShade){
    
    auto ctocxxcself = static_cast<iegen::example::Frame*>(cself.ptr);
    auto ctocxxbackgroundColorShade = (iegen::example::ColorShade)backgroundColorShade;
    ctocxxcself->backgroundColorShade = ctocxxbackgroundColorShade;
}

