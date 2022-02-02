/**
 * ,--.,------. ,----.   ,------.,--.  ,--. 
 * |  ||  .---''  .-.|   |  .---'|  ,'.|  | 
 * |  ||  `--, |  | .---.|  `--, |  |' '  | 
 * |  ||  `---.'  '--'  ||  `---.|  | `   | 
 * `--'`------' `------' `------'`--'  `--' 
 * 
 * This file is generated by iegen on 01/31/2022-08:51.
 * Please do not change it manually.
 */

#ifndef _C_student_WRAPPER_
#define _C_student_WRAPPER_

#include "swift/wrappers/c_helpers.h"

#include <stdbool.h>

#if __cplusplus
extern "C" {
#endif
    void release_Student(IEGenCObject cself, bool owner);

    IEGenCObject create_Student(char* _Nonnull st_name, IEGenCErrorObj* _Nonnull err);

    IEGenCObject create_Student_1(IEGenCDataArray teachers, IEGenCErrorObj* _Nonnull err);
    void _func_Student_addTeacher(IEGenCObject cself, IEGenCObject  t, IEGenCErrorObj* _Nonnull err);
    IEGenCDataArray _func_Student_teachers(IEGenCObject cself, IEGenCErrorObj* _Nonnull err);
    char* _Nonnull _prop_get_Student_name(IEGenCObject cself);
    void _prop_set_Student_name(IEGenCObject cself, char* _Nonnull name);

#if __cplusplus
}
#endif
#endif /* ifndef _C_student_WRAPPER_ */
