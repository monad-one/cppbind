/**
 * ,--.,------. ,----.   ,------.,--.  ,--. 
 * |  ||  .---''  .-.|   |  .---'|  ,'.|  | 
 * |  ||  `--, |  | .---.|  `--, |  |' '  | 
 * |  ||  `---.'  '--'  ||  `---.|  | `   | 
 * `--'`------' `------' `------'`--'  `--' 
 * 
 * This file is generated by iegen on 07/21/2021-18:55.
 * Please do not change it manually.
 */

package exceptionUtils

import kotlin.system.exitProcess

public class ExceptionHandler {
    companion object {
        private var uncaughtExceptionHandler = {errMsg: String -> defaultHandler(errMsg)}

        fun defaultHandler(errMsg: String) {
            println("Uncaught exception is found: ${errMsg}")
            exitProcess(1)
        }

        @JvmStatic
        fun handleUncaughtException(errMsg: String) {
            uncaughtExceptionHandler(errMsg)
        }

        fun setUncaughtExceptionHandler(handler: (String) -> Unit) {
            uncaughtExceptionHandler = {errMsg: String -> handler(errMsg)}
        }

        fun unsetUncaughtExceptionHandler() {
            uncaughtExceptionHandler = {errMsg: String -> defaultHandler(errMsg)}
        }
    }
}
