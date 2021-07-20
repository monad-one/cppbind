/**
 * ,--.,------. ,----.   ,------.,--.  ,--. 
 * |  ||  .---''  .-.|   |  .---'|  ,'.|  | 
 * |  ||  `--, |  | .---.|  `--, |  |' '  | 
 * |  ||  `---.'  '--'  ||  `---.|  | `   | 
 * `--'`------' `------' `------'`--'  `--' 
 * 
 * This file is generated by iegen on 07/20/2021-11:30.
 * Please do not change it manually.
 */

#include <string.h>
#include <memory>
#include "swift/wrappers/inheritance/c_rhombus.h"
#include "cxx/inheritance/rhombus.hpp"
#include "cxx/inheritance/parallelogram.hpp"
using namespace iegen::example;

void release_Rhombus(void* _Nonnull cself){
    delete dynamic_cast<iegen::example::Rhombus*>(static_cast<iegen::example::Parallelogram*>(cself));
}

void* _Nonnull create_Rhombus(double diagonal1, double diagonal2){
    
    
    auto this_object = new iegen::example::Rhombus(diagonal1, diagonal2);
    return static_cast<iegen::example::Parallelogram*>(this_object);
}