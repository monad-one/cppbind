/**
 * ,--.,------. ,----.   ,------.,--.  ,--. 
 * |  ||  .---''  .-.|   |  .---'|  ,'.|  | 
 * |  ||  `--, |  | .---.|  `--, |  |' '  | 
 * |  ||  `---.'  '--'  ||  `---.|  | `   | 
 * `--'`------' `------' `------'`--'  `--' 
 * 
 * This file is generated by iegen on 03/09/2022-07:13.
 * Please do not change it manually.
 */

#ifndef _C_keep_alive_policy_WRAPPER_
#define _C_keep_alive_policy_WRAPPER_

#include "swift/wrappers/c_helpers.h"

#include <stdbool.h>

#if __cplusplus
extern "C" {
#endif
    void release_IegenExample_Child1(IEGenCObject cself, bool owner);

    IEGenCObject create_IegenExample_Child1(char* _Nonnull name, IEGenCObject* _Nonnull err);
    char* _Nonnull _prop_get_IegenExample_Child1_name(IEGenCObject cself, IEGenCObject* _Nonnull err);
    void release_IegenExample_Child3Impl(IEGenCObject cself, bool owner);

    IEGenCObject create_IegenExample_Child3(char* _Nonnull name, IEGenCObject* _Nonnull err);
    char* _Nonnull _prop_get_IegenExample_Child3_name(IEGenCObject cself, IEGenCObject* _Nonnull err);
    void release_IegenExample_Child2(IEGenCObject cself, bool owner);

    IEGenCObject create_IegenExample_Child2(char* _Nonnull name, IEGenCObject* _Nonnull err);
    char* _Nonnull _prop_get_IegenExample_Child2_name(IEGenCObject cself, IEGenCObject* _Nonnull err);
    void release_IegenExample_Parent1(IEGenCObject cself, bool owner);

    IEGenCObject create_IegenExample_Parent1(char* _Nonnull name, IEGenCObject child1, IEGenCObject child2, IEGenCObject _child3, IEGenCObject* _Nonnull err);
    char* _Nonnull _prop_get_IegenExample_Parent1_name(IEGenCObject cself, IEGenCObject* _Nonnull err);
    IEGenCObject _prop_get_IegenExample_Parent1_child1(IEGenCObject cself, IEGenCObject* _Nonnull err);

    void _prop_set_IegenExample_Parent1_child1(IEGenCObject cself, IEGenCObject child1, IEGenCObject* _Nonnull err);

    IEGenCObject _prop_get_IegenExample_Parent1_child2(IEGenCObject cself, IEGenCObject* _Nonnull err);
    IEGenCObject _prop_get_IegenExample_Parent1_child3(IEGenCObject cself);
    void _prop_set_IegenExample_Parent1_child3(IEGenCObject cself, IEGenCObject child3);

    void release_IegenExample_Parent2(IEGenCObject cself, bool owner);

    IEGenCObject create_IegenExample_Parent2(char* _Nonnull name, IEGenCObject* _Nonnull err);
    char* _Nonnull _prop_get_IegenExample_Parent2_name(IEGenCObject cself, IEGenCObject* _Nonnull err);
    IEGenCDataArray _prop_get_IegenExample_Parent2_children1(IEGenCObject cself, IEGenCObject* _Nonnull err);
    void _func_IegenExample_Parent2_addChild1(IEGenCObject cself, IEGenCObject  c, IEGenCObject* _Nonnull err);
    void _func_IegenExample_Parent2_addChildren1(IEGenCObject cself, IEGenCDataArray  c, IEGenCObject* _Nonnull err);
    void _func_IegenExample_Parent2_addChild2(IEGenCObject cself, IEGenCObject  c, IEGenCObject* _Nonnull err);
    void _func_IegenExample_Parent2_addChildren2(IEGenCObject cself, IEGenCDataArray  c, IEGenCObject* _Nonnull err);
    IEGenCDataArray _prop_get_IegenExample_Parent2_children2(IEGenCObject cself, IEGenCObject* _Nonnull err);
#if __cplusplus
}
#endif
#endif /* ifndef _C_keep_alive_policy_WRAPPER_ */
