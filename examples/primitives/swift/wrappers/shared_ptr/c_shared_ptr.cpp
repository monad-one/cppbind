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
#include "swift/wrappers/shared_ptr/c_shared_ptr.h"
#include "cxx/shared_ptr/shared_ptr.hpp"

using namespace Example;

void release_Example_Car(IEGenCObject cself, bool owner) {
    if (owner) {
        delete static_cast<std::shared_ptr<Example::Car>*>(cself.ptr);
    }
    free(cself.type);
}

IEGenCObject create_Example_Car(int cost, IEGenCObject* _Nonnull err) {
    try {
        auto this_object = new Example::Car(cost);
        return {strdup("Example::Car"), new std::shared_ptr<Example::Car>(this_object)};
    } catch (const std::exception& e) {
        err->type = strdup("std::exception");
        err->ptr = new std::exception(e);
    } catch (...) {
        err->type = strdup("Uncaught Exception");
    }
    IEGenCObject result {};
    return result;
}

int _prop_get_Example_Car_cost(IEGenCObject cself, IEGenCObject* _Nonnull err) {
    std::shared_ptr<Example::Car> ctocxxcself;
    ctocxxcself = *static_cast<std::shared_ptr<Example::Car>*>(cself.ptr);
    try {
        const auto& result = ctocxxcself->cost();
        
        return result;
    } catch (const std::exception& e) {
        err->type = strdup("std::exception");
        err->ptr = new std::exception(e);
    } catch (...) {
        err->type = strdup("Uncaught Exception");
    }
    int result {};
    return result;
}

void _func_Example_Car_setCostWithCarSharedPtr(IEGenCObject cself, IEGenCObject sp, IEGenCObject* _Nonnull err) {
    
    std::shared_ptr<Example::Car> ctocxxsp;
    ctocxxsp = *static_cast<std::shared_ptr<Example::Car>*>(sp.ptr);
  
    
    std::shared_ptr<Example::Car> ctocxxcself;
    ctocxxcself = *static_cast<std::shared_ptr<Example::Car>*>(cself.ptr);
    try {
        ctocxxcself->setCostWithCarSharedPtr(ctocxxsp);
    } catch (const std::exception& e) {
        err->type = strdup("std::exception");
        err->ptr = new std::exception(e);
    } catch (...) {
        err->type = strdup("Uncaught Exception");
    }
}

void _func_Example_Car_setCostWithCar(IEGenCObject cself, IEGenCObject sp, IEGenCObject* _Nonnull err) {
    
    std::shared_ptr<Example::Car> ctocxxsp_shared_ptr;
    ctocxxsp_shared_ptr = *static_cast<std::shared_ptr<Example::Car>*>(sp.ptr);
    auto& ctocxxsp = *ctocxxsp_shared_ptr.get();
  
    
    std::shared_ptr<Example::Car> ctocxxcself;
    ctocxxcself = *static_cast<std::shared_ptr<Example::Car>*>(cself.ptr);
    try {
        ctocxxcself->setCostWithCar(ctocxxsp);
    } catch (const std::exception& e) {
        err->type = strdup("std::exception");
        err->ptr = new std::exception(e);
    } catch (...) {
        err->type = strdup("Uncaught Exception");
    }
}

void _func_Example_Car_setCostWithCarConstSharedPtr(IEGenCObject cself, IEGenCObject sp, IEGenCObject* _Nonnull err) {
    
    std::shared_ptr<const Example::Car> ctocxxsp;
    ctocxxsp = *static_cast<std::shared_ptr<const Example::Car>*>(sp.ptr);
  
    
    std::shared_ptr<Example::Car> ctocxxcself;
    ctocxxcself = *static_cast<std::shared_ptr<Example::Car>*>(cself.ptr);
    try {
        ctocxxcself->setCostWithCarConstSharedPtr(ctocxxsp);
    } catch (const std::exception& e) {
        err->type = strdup("std::exception");
        err->ptr = new std::exception(e);
    } catch (...) {
        err->type = strdup("Uncaught Exception");
    }
}

IEGenCObject _func_Example_Car_makeConstSharedPtr(IEGenCObject cself, IEGenCObject sp, IEGenCObject* _Nonnull err) {
    
    std::shared_ptr<Example::Car> ctocxxsp;
    ctocxxsp = *static_cast<std::shared_ptr<Example::Car>*>(sp.ptr);
  
    
    std::shared_ptr<Example::Car> ctocxxcself;
    ctocxxcself = *static_cast<std::shared_ptr<Example::Car>*>(cself.ptr);
    try {
        const auto& result = ctocxxcself->makeConstSharedPtr(ctocxxsp);
        
        char* type_result = nullptr;
        void* cxxtocresult_ptr = nullptr;
        cxxtocresult_ptr = new std::shared_ptr<const Example::Car>(std::const_pointer_cast<Example::Car>(result));
        IEGenCObject cxxtocresult = {type_result, cxxtocresult_ptr};
        return cxxtocresult;
    } catch (const std::exception& e) {
        err->type = strdup("std::exception");
        err->ptr = new std::exception(e);
    } catch (...) {
        err->type = strdup("Uncaught Exception");
    }
    IEGenCObject result {};
    return result;
}

void _func_Example_Car_setCostWithCarRef(IEGenCObject cself, IEGenCObject sp, IEGenCObject* _Nonnull err) {
    
    std::shared_ptr<Example::Car> ctocxxsp_shared_ptr;
    ctocxxsp_shared_ptr = *static_cast<std::shared_ptr<Example::Car>*>(sp.ptr);
    auto& ctocxxsp = *ctocxxsp_shared_ptr.get();
  
    
    std::shared_ptr<Example::Car> ctocxxcself;
    ctocxxcself = *static_cast<std::shared_ptr<Example::Car>*>(cself.ptr);
    try {
        ctocxxcself->setCostWithCarRef(ctocxxsp);
    } catch (const std::exception& e) {
        err->type = strdup("std::exception");
        err->ptr = new std::exception(e);
    } catch (...) {
        err->type = strdup("Uncaught Exception");
    }
}

void _func_Example_Car_setCostWithCarPtr(IEGenCObject cself, IEGenCObject sp, IEGenCObject* _Nonnull err) {
    
    std::shared_ptr<Example::Car> ctocxxsp_shared_ptr;
    ctocxxsp_shared_ptr = *static_cast<std::shared_ptr<Example::Car>*>(sp.ptr);
    auto ctocxxsp = ctocxxsp_shared_ptr.get();
  
    
    std::shared_ptr<Example::Car> ctocxxcself;
    ctocxxcself = *static_cast<std::shared_ptr<Example::Car>*>(cself.ptr);
    try {
        ctocxxcself->setCostWithCarPtr(ctocxxsp);
    } catch (const std::exception& e) {
        err->type = strdup("std::exception");
        err->ptr = new std::exception(e);
    } catch (...) {
        err->type = strdup("Uncaught Exception");
    }
}

IEGenCObject _func_Example_Car_getNewCarSharedPtr(IEGenCObject cself, IEGenCObject* _Nonnull err) {
    
    std::shared_ptr<Example::Car> ctocxxcself;
    ctocxxcself = *static_cast<std::shared_ptr<Example::Car>*>(cself.ptr);
    try {
        const auto& result = ctocxxcself->getNewCarSharedPtr();
        
        char* type_result = nullptr;
        void* cxxtocresult_ptr = nullptr;
        cxxtocresult_ptr = new std::shared_ptr<Example::Car>(std::const_pointer_cast<Example::Car>(result));
        IEGenCObject cxxtocresult = {type_result, cxxtocresult_ptr};
        return cxxtocresult;
    } catch (const std::exception& e) {
        err->type = strdup("std::exception");
        err->ptr = new std::exception(e);
    } catch (...) {
        err->type = strdup("Uncaught Exception");
    }
    IEGenCObject result {};
    return result;
}

void release_Example_CarUsage(IEGenCObject cself, bool owner) {
    if (owner) {
        delete static_cast<Example::CarUsage*>(cself.ptr);
    }
    free(cself.type);
}

IEGenCObject create_Example_CarUsage(IEGenCObject car, IEGenCObject* _Nonnull err) {
    
    std::shared_ptr<Example::Car> ctocxxcar_shared_ptr;
    ctocxxcar_shared_ptr = *static_cast<std::shared_ptr<Example::Car>*>(car.ptr);
    auto ctocxxcar = ctocxxcar_shared_ptr.get();
    try {
        auto this_object = new Example::CarUsage(ctocxxcar);
        return {strdup("Example::CarUsage"), this_object};
    } catch (const std::exception& e) {
        err->type = strdup("std::exception");
        err->ptr = new std::exception(e);
    } catch (...) {
        err->type = strdup("Uncaught Exception");
    }
    IEGenCObject result {};
    return result;
}

IEGenCObject _func_Example_CarUsage_getCar(IEGenCObject cself, IEGenCObject* _Nonnull err) {
    
    auto ctocxxcself = static_cast<Example::CarUsage*>(cself.ptr);
    try {
        const auto& result = ctocxxcself->getCar();
        
        std::shared_ptr<Example::Car> result_shared_ptr = std::make_shared<Example::Car>(result);
        char* type_result_shared_ptr = nullptr;
        void* cxxtocresult_ptr = nullptr;
        cxxtocresult_ptr = new std::shared_ptr<Example::Car>(std::const_pointer_cast<Example::Car>(result_shared_ptr));
        IEGenCObject cxxtocresult = {type_result_shared_ptr, cxxtocresult_ptr};
        return cxxtocresult;
    } catch (const std::exception& e) {
        err->type = strdup("std::exception");
        err->ptr = new std::exception(e);
    } catch (...) {
        err->type = strdup("Uncaught Exception");
    }
    IEGenCObject result {};
    return result;
}

