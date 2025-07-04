//////////////////////////////////////////////////////////////////////////
/// Copyright (c) 1988-2025 $organization$
///
/// This software is provided by the author and contributors ``as is'' 
/// and any express or implied warranties, including, but not limited to, 
/// the implied warranties of merchantability and fitness for a particular 
/// purpose are disclaimed. In no event shall the author or contributors 
/// be liable for any direct, indirect, incidental, special, exemplary, 
/// or consequential damages (including, but not limited to, procurement 
/// of substitute goods or services; loss of use, data, or profits; or 
/// business interruption) however caused and on any theory of liability, 
/// whether in contract, strict liability, or tort (including negligence 
/// or otherwise) arising in any way out of the use of this software, 
/// even if advised of the possibility of such damage.
///
///   File: main_opt.hpp
///
/// Author: $author$
///   Date: 7/2/2025
//////////////////////////////////////////////////////////////////////////
#ifndef XOS_APP_CONSOLE_OS_MAIN_OPT_HPP
#define XOS_APP_CONSOLE_OS_MAIN_OPT_HPP

#include "xos/app/console/framework/version/main.hpp"

///////////////////////////////////////////////////////////////////////
#define XOS_APP_CONSOLE_OS_MAIN_OS_OPT "os"
#define XOS_APP_CONSOLE_OS_MAIN_OS_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_OPTIONAL
#define XOS_APP_CONSOLE_OS_MAIN_OS_OPTARG_RESULT 0
#define XOS_APP_CONSOLE_OS_MAIN_OS_OPTARG_WINDOWS_C "w" 
#define XOS_APP_CONSOLE_OS_MAIN_OS_OPTARG_WINDOWS_S "windows" 
#define XOS_APP_CONSOLE_OS_MAIN_OS_OPTARG_MACOSX_C "x" 
#define XOS_APP_CONSOLE_OS_MAIN_OS_OPTARG_MACOSX_S "osx" 
#define XOS_APP_CONSOLE_OS_MAIN_OS_OPTARG_LINUX_C "l" 
#define XOS_APP_CONSOLE_OS_MAIN_OS_OPTARG_LINUX_S "linux" 
#define XOS_APP_CONSOLE_OS_MAIN_OS_OPTARG_POSIX_C "p" 
#define XOS_APP_CONSOLE_OS_MAIN_OS_OPTARG_POSIX_S "posix" 
#define XOS_APP_CONSOLE_OS_MAIN_OS_OPTARG_MACH_C "m" 
#define XOS_APP_CONSOLE_OS_MAIN_OS_OPTARG_MACH_S "mach" 
#define XOS_APP_CONSOLE_OS_MAIN_OS_OPTARG_SOLARIS_C "s" 
#define XOS_APP_CONSOLE_OS_MAIN_OS_OPTARG_SOLARIS_S "solaris" 
#define XOS_APP_CONSOLE_OS_MAIN_OS_OPTARG_OS_C "o" 
#define XOS_APP_CONSOLE_OS_MAIN_OS_OPTARG_OS_S "os" 
#define XOS_APP_CONSOLE_OS_MAIN_OS_OPTARG_NONE_C "n" 
#define XOS_APP_CONSOLE_OS_MAIN_OS_OPTARG_NONE_S "none" 
#define XOS_APP_CONSOLE_OS_MAIN_OS_OPTARG \
    "[{ " "(" XOS_APP_CONSOLE_OS_MAIN_OS_OPTARG_OS_C ")" XOS_APP_CONSOLE_OS_MAIN_OS_OPTARG_OS_S \
    " | " "(" XOS_APP_CONSOLE_OS_MAIN_OS_OPTARG_WINDOWS_C ")" XOS_APP_CONSOLE_OS_MAIN_OS_OPTARG_WINDOWS_S \
    " | " "(" XOS_APP_CONSOLE_OS_MAIN_OS_OPTARG_MACOSX_C ")" XOS_APP_CONSOLE_OS_MAIN_OS_OPTARG_MACOSX_S \
    " | " "(" XOS_APP_CONSOLE_OS_MAIN_OS_OPTARG_LINUX_C ")" XOS_APP_CONSOLE_OS_MAIN_OS_OPTARG_LINUX_S \
    " | " "(" XOS_APP_CONSOLE_OS_MAIN_OS_OPTARG_POSIX_C ")" XOS_APP_CONSOLE_OS_MAIN_OS_OPTARG_POSIX_S \
    " | " "(" XOS_APP_CONSOLE_OS_MAIN_OS_OPTARG_MACH_C ")" XOS_APP_CONSOLE_OS_MAIN_OS_OPTARG_MACH_S \
    " | " "(" XOS_APP_CONSOLE_OS_MAIN_OS_OPTARG_SOLARIS_C ")" XOS_APP_CONSOLE_OS_MAIN_OS_OPTARG_SOLARIS_S \
    " | " "(" XOS_APP_CONSOLE_OS_MAIN_OS_OPTARG_NONE_C ")" XOS_APP_CONSOLE_OS_MAIN_OS_OPTARG_NONE_S \
    " }]" 
#define XOS_APP_CONSOLE_OS_MAIN_OS_OPTUSE "operating system"
#define XOS_APP_CONSOLE_OS_MAIN_OS_OPTVAL_S "o::"
#define XOS_APP_CONSOLE_OS_MAIN_OS_OPTVAL_C 'o'
#define XOS_APP_CONSOLE_OS_MAIN_OS_OPTION \
   {XOS_APP_CONSOLE_OS_MAIN_OS_OPT, \
    XOS_APP_CONSOLE_OS_MAIN_OS_OPTARG_REQUIRED, \
    XOS_APP_CONSOLE_OS_MAIN_OS_OPTARG_RESULT, \
    XOS_APP_CONSOLE_OS_MAIN_OS_OPTVAL_C}, \

///////////////////////////////////////////////////////////////////////
#define XOS_APP_CONSOLE_OS_MAIN_OPTIONS_CHARS_EXTEND \
   XOS_APP_CONSOLE_OS_MAIN_OS_OPTVAL_S \

#define XOS_APP_CONSOLE_OS_MAIN_OPTIONS_OPTIONS_EXTEND \
   XOS_APP_CONSOLE_OS_MAIN_OS_OPTION \

///////////////////////////////////////////////////////////////////////
#define XOS_APP_CONSOLE_OS_MAIN_OPTIONS_CHARS \
   XOS_APP_CONSOLE_OS_MAIN_OPTIONS_CHARS_EXTEND \
   XOS_APP_CONSOLE_FRAMEWORK_VERSION_MAIN_OPTIONS_CHARS \

#define XOS_APP_CONSOLE_OS_MAIN_OPTIONS_OPTIONS \
   XOS_APP_CONSOLE_OS_MAIN_OPTIONS_OPTIONS_EXTEND \
   XOS_APP_CONSOLE_FRAMEWORK_VERSION_MAIN_OPTIONS_OPTIONS \

///////////////////////////////////////////////////////////////////////
#define XOS_APP_CONSOLE_OS_MAIN_ARGS 0
#define XOS_APP_CONSOLE_OS_MAIN_ARGV 0,

namespace xos {
namespace app {
namespace console {
namespace os {

/// class main_optt
template 
<class TExtends = xos::app::console::framework::version::maint<>,  class TImplements = typename TExtends::implements>

class main_optt: virtual public TImplements, public TExtends {
public:
    typedef TImplements implements;
    typedef TExtends extends;
    typedef main_optt derives;

    typedef typename extends::char_t char_t;
    typedef typename extends::end_char_t end_char_t;
    enum { end_char = extends::end_char };
    typedef typename extends::string_t string_t;
    typedef typename extends::reader_t reader_t;
    typedef typename extends::writer_t writer_t;
    typedef typename extends::file_t file_t;

    typedef typename extends::sequence_char_t sequence_char_t;
    typedef typename extends::char_sequence_t char_sequence_t;
    typedef typename extends::char_seeker_t char_seeker_t;
    typedef typename extends::char_reader_t char_reader_t;
    typedef typename extends::char_writer_t char_writer_t;
    typedef typename extends::reader_string_t reader_string_t;
    typedef typename extends::string_reader_t string_reader_t;

    /// constructor / destructor
    main_optt(): run_(0) {
    }
    virtual ~main_optt() {
    }
private:
    main_optt(const main_optt &copy) {
        throw exception(exception_unexpected);
    }

protected:
    typedef typename extends::in_reader_t in_reader_t;
    typedef typename extends::out_writer_t out_writer_t;
    typedef typename extends::err_writer_t err_writer_t;

    //////////////////////////////////////////////////////////////////////////
    /// run
    int (derives::*run_)(int argc, char_t** argv, char_t** env);
    virtual int run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if ((run_)) {
            LOGGER_IS_LOGGED_INFO("(!(err = (this->*run_)(argc, argv, env)))...");
            if (!(err = (this->*run_)(argc, argv, env))) {
                LOGGER_IS_LOGGED_INFO("...(!(" << err << " = (this->*run_)(argc, argv, env)))");
            } else {
                LOGGER_IS_LOGGED_INFO("...failed on (!(" << err << " = (this->*run_)(argc, argv, env)))");
            }
        } else {
            LOGGER_IS_LOGGED_INFO("(!(err = extends::run(argc, argv, env)))...");
            if (!(err = extends::run(argc, argv, env))) {
                LOGGER_IS_LOGGED_INFO("...(!(" << err << " = extends::run(argc, argv, env)))");
            } else {
                LOGGER_IS_LOGGED_INFO("...failed on (!(err" << err << " = extends::run(argc, argv, env)))");
            }
        }
        return err;
    }

    //////////////////////////////////////////////////////////////////////////
    /// ...windows_run
    virtual int windows_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int before_windows_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int after_windows_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int all_windows_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_windows_run(argc, argv, env))) {
            int err2 = 0;
            err = windows_run(argc, argv, env);
            if ((err2 = after_windows_run(argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }
    virtual int set_windows_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        run_ = &derives::all_windows_run;
        return err;
    }
    virtual int windows_run_set(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int unset_windows_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        run_ = 0;
        return err;
    }
    virtual int windows_run_unset(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    //////////////////////////////////////////////////////////////////////////
    /// ...osx_run
    virtual int osx_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int before_osx_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int after_osx_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int all_osx_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_osx_run(argc, argv, env))) {
            int err2 = 0;
            err = osx_run(argc, argv, env);
            if ((err2 = after_osx_run(argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }
    virtual int set_osx_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        run_ = &derives::all_osx_run;
        return err;
    }
    virtual int osx_run_set(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int unset_osx_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        run_ = 0;
        return err;
    }
    virtual int osx_run_unset(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    //////////////////////////////////////////////////////////////////////////
    /// ...solaris_run
    virtual int solaris_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int before_solaris_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int after_solaris_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int all_solaris_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_solaris_run(argc, argv, env))) {
            int err2 = 0;
            err = solaris_run(argc, argv, env);
            if ((err2 = after_solaris_run(argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }
    virtual int set_solaris_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        run_ = &derives::all_solaris_run;
        return err;
    }
    virtual int solaris_run_set(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int unset_solaris_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        run_ = 0;
        return err;
    }
    virtual int solaris_run_unset(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    //////////////////////////////////////////////////////////////////////////
    /// ...mach_run
    virtual int mach_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int before_mach_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int after_mach_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int all_mach_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_mach_run(argc, argv, env))) {
            int err2 = 0;
            err = mach_run(argc, argv, env);
            if ((err2 = after_mach_run(argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }
    virtual int set_mach_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        run_ = &derives::all_mach_run;
        return err;
    }
    virtual int mach_run_set(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int unset_mach_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        run_ = 0;
        return err;
    }
    virtual int mach_run_unset(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    //////////////////////////////////////////////////////////////////////////
    /// ...linux_run
    virtual int linux_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int before_linux_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int after_linux_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int all_linux_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_linux_run(argc, argv, env))) {
            int err2 = 0;
            err = linux_run(argc, argv, env);
            if ((err2 = after_linux_run(argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }
    virtual int set_linux_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        run_ = &derives::all_linux_run;
        return err;
    }
    virtual int linux_run_set(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int unset_linux_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        run_ = 0;
        return err;
    }
    virtual int linux_run_unset(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    //////////////////////////////////////////////////////////////////////////
    /// ...posix_run
    virtual int posix_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int before_posix_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int after_posix_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int all_posix_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_posix_run(argc, argv, env))) {
            int err2 = 0;
            err = posix_run(argc, argv, env);
            if ((err2 = after_posix_run(argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }
    virtual int set_posix_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        run_ = &derives::all_posix_run;
        return err;
    }
    virtual int posix_run_set(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int unset_posix_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        run_ = 0;
        return err;
    }
    virtual int posix_run_unset(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    //////////////////////////////////////////////////////////////////////////
    /// ...os_run
    virtual int os_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int before_os_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int after_os_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int all_os_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_os_run(argc, argv, env))) {
            int err2 = 0;
            err = os_run(argc, argv, env);
            if ((err2 = after_os_run(argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }
    virtual int set_os_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        run_ = &derives::all_os_run;
        return err;
    }
    virtual int os_run_set(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int unset_os_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        run_ = 0;
        return err;
    }
    virtual int os_run_unset(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    //////////////////////////////////////////////////////////////////////////
    /// ...none_run
    virtual int none_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int before_none_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int after_none_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int all_none_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_none_run(argc, argv, env))) {
            int err2 = 0;
            err = none_run(argc, argv, env);
            if ((err2 = after_none_run(argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }
    virtual int set_none_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        run_ = &derives::all_none_run;
        return err;
    }
    virtual int none_run_set(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int unset_none_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        run_ = 0;
        return err;
    }
    virtual int none_run_unset(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    //////////////////////////////////////////////////////////////////////////

    //////////////////////////////////////////////////////////////////////////
    /// ...windows_os_option...
    virtual int on_set_windows_os_option
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
        } else {
        }
        return err;
    }
    virtual int on_windows_os_option_set
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
            if (!(err = set_windows_run(argc, argv, env))) {
                if (!(err = windows_run_set(argc, argv, env))) {
                } else {
                }
            } else {
            }
        } else {
        }
        return err;
    }
    virtual int on_windows_os_option
    (int optval, const char_t* optarg, const char_t* optname,
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
            if (!(err = on_set_windows_os_option(optarg, optind, argc, argv, env))) {
                if (!(err = on_windows_os_option_set(optarg, optind, argc, argv, env))) {
                } else {
                }
            } else {
            }
        } else {
        }
        return err;
    }
    //////////////////////////////////////////////////////////////////////////
    /// ...osx_os_option...
    virtual int on_set_osx_os_option
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
        } else {
        }
        return err;
    }
    virtual int on_osx_os_option_set
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
            if (!(err = set_osx_run(argc, argv, env))) {
                if (!(err = osx_run_set(argc, argv, env))) {
                } else {
                }
            } else {
            }
        } else {
        }
        return err;
    }
    virtual int on_osx_os_option
    (int optval, const char_t* optarg, const char_t* optname,
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
            if (!(err = on_set_osx_os_option(optarg, optind, argc, argv, env))) {
                if (!(err = on_osx_os_option_set(optarg, optind, argc, argv, env))) {
                } else {
                }
            } else {
            }
        } else {
        }
        return err;
    }
    //////////////////////////////////////////////////////////////////////////
    /// ...linux_os_option...
    virtual int on_set_linux_os_option
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
        } else {
        }
        return err;
    }
    virtual int on_linux_os_option_set
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
            if (!(err = set_linux_run(argc, argv, env))) {
                if (!(err = linux_run_set(argc, argv, env))) {
                } else {
                }
            } else {
            }
        } else {
        }
        return err;
    }
    virtual int on_linux_os_option
    (int optval, const char_t* optarg, const char_t* optname,
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
            if (!(err = on_set_linux_os_option(optarg, optind, argc, argv, env))) {
                if (!(err = on_linux_os_option_set(optarg, optind, argc, argv, env))) {
                } else {
                }
            } else {
            }
        } else {
        }
        return err;
    }
    //////////////////////////////////////////////////////////////////////////
    /// ...posix_os_option...
    virtual int on_set_posix_os_option
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
        } else {
        }
        return err;
    }
    virtual int on_posix_os_option_set
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
            if (!(err = set_posix_run(argc, argv, env))) {
                if (!(err = posix_run_set(argc, argv, env))) {
                } else {
                }
            } else {
            }
        } else {
        }
        return err;
    }
    virtual int on_posix_os_option
    (int optval, const char_t* optarg, const char_t* optname,
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
            if (!(err = on_set_posix_os_option(optarg, optind, argc, argv, env))) {
                if (!(err = on_posix_os_option_set(optarg, optind, argc, argv, env))) {
                } else {
                }
            } else {
            }
        } else {
        }
        return err;
    }
    //////////////////////////////////////////////////////////////////////////
    /// ...mach_os_option...
    virtual int on_set_mach_os_option
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
        } else {
        }
        return err;
    }
    virtual int on_mach_os_option_set
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
            if (!(err = set_mach_run(argc, argv, env))) {
                if (!(err = mach_run_set(argc, argv, env))) {
                } else {
                }
            } else {
            }
        } else {
        }
        return err;
    }
    virtual int on_mach_os_option
    (int optval, const char_t* optarg, const char_t* optname,
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
            if (!(err = on_set_mach_os_option(optarg, optind, argc, argv, env))) {
                if (!(err = on_mach_os_option_set(optarg, optind, argc, argv, env))) {
                } else {
                }
            } else {
            }
        } else {
        }
        return err;
    }
    //////////////////////////////////////////////////////////////////////////
    /// ...solaris_os_option...
    virtual int on_set_solaris_os_option
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
        } else {
        }
        return err;
    }
    virtual int on_solaris_os_option_set
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
            if (!(err = set_solaris_run(argc, argv, env))) {
                if (!(err = solaris_run_set(argc, argv, env))) {
                } else {
                }
            } else {
            }
        } else {
        }
        return err;
    }
    virtual int on_solaris_os_option
    (int optval, const char_t* optarg, const char_t* optname,
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
            if (!(err = on_set_solaris_os_option(optarg, optind, argc, argv, env))) {
                if (!(err = on_solaris_os_option_set(optarg, optind, argc, argv, env))) {
                } else {
                }
            } else {
            }
        } else {
        }
        return err;
    }
    //////////////////////////////////////////////////////////////////////////
    /// ...this_os_option...
    virtual int on_set_this_os_option
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
        } else {
        }
        return err;
    }
    virtual int on_this_os_option_set
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
            if (!(err = set_os_run(argc, argv, env))) {
                if (!(err = os_run_set(argc, argv, env))) {
                } else {
                }
            } else {
            }
        } else {
        }
        return err;
    }
    virtual int on_this_os_option
    (int optval, const char_t* optarg, const char_t* optname,
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
            if (!(err = on_set_this_os_option(optarg, optind, argc, argv, env))) {
                if (!(err = on_this_os_option_set(optarg, optind, argc, argv, env))) {
                } else {
                }
            } else {
            }
        } else {
        }
        return err;
    }
    //////////////////////////////////////////////////////////////////////////
    /// ...no_os_option...
    virtual int on_set_no_os_option
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
        } else {
        }
        return err;
    }
    virtual int on_no_os_option_set
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
            if (!(err = set_none_run(argc, argv, env))) {
                if (!(err = none_run_set(argc, argv, env))) {
                } else {
                }
            } else {
            }
        } else {
        }
        return err;
    }
    virtual int on_no_os_option
    (int optval, const char_t* optarg, const char_t* optname,
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
            if (!(err = on_set_no_os_option(optarg, optind, argc, argv, env))) {
                if (!(err = on_no_os_option_set(optarg, optind, argc, argv, env))) {
                } else {
                }
            } else {
            }
        } else {
        }
        return err;
    }
    //////////////////////////////////////////////////////////////////////////
    /// ...os_option...
    virtual int on_get_os_option
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
        } else {
        }
        return err;
    }
    virtual int on_os_option_get
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
        } else {
        }
        return err;
    }
    virtual int on_os_option
    (int optval, const char_t* optarg, const char_t* optname,
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
            string_t arg(optarg);
            if ((!arg.compare(XOS_APP_CONSOLE_OS_MAIN_OS_OPTARG_WINDOWS_C)) 
                || (!arg.compare(XOS_APP_CONSOLE_OS_MAIN_OS_OPTARG_WINDOWS_S))) {
                err = on_windows_os_option
                (optval, optarg, optname, optind, argc, argv, env);
            } else {
                if ((!arg.compare(XOS_APP_CONSOLE_OS_MAIN_OS_OPTARG_MACOSX_C)) 
                    || (!arg.compare(XOS_APP_CONSOLE_OS_MAIN_OS_OPTARG_MACOSX_S))) {
                    err = on_osx_os_option
                    (optval, optarg, optname, optind, argc, argv, env);
                } else {
                    if ((!arg.compare(XOS_APP_CONSOLE_OS_MAIN_OS_OPTARG_LINUX_C)) 
                        || (!arg.compare(XOS_APP_CONSOLE_OS_MAIN_OS_OPTARG_LINUX_S))) {
                        err = on_linux_os_option
                        (optval, optarg, optname, optind, argc, argv, env);
                    } else {
                        if ((!arg.compare(XOS_APP_CONSOLE_OS_MAIN_OS_OPTARG_POSIX_C)) 
                            || (!arg.compare(XOS_APP_CONSOLE_OS_MAIN_OS_OPTARG_POSIX_S))) {
                            err = on_posix_os_option
                            (optval, optarg, optname, optind, argc, argv, env);
                        } else {
                            if ((!arg.compare(XOS_APP_CONSOLE_OS_MAIN_OS_OPTARG_MACH_C)) 
                                || (!arg.compare(XOS_APP_CONSOLE_OS_MAIN_OS_OPTARG_MACH_S))) {
                                err = on_mach_os_option
                                (optval, optarg, optname, optind, argc, argv, env);
                            } else {
                                if ((!arg.compare(XOS_APP_CONSOLE_OS_MAIN_OS_OPTARG_SOLARIS_C)) 
                                    || (!arg.compare(XOS_APP_CONSOLE_OS_MAIN_OS_OPTARG_SOLARIS_S))) {
                                    err = on_solaris_os_option
                                    (optval, optarg, optname, optind, argc, argv, env);
                                } else {
                                    if ((!arg.compare(XOS_APP_CONSOLE_OS_MAIN_OS_OPTARG_OS_C)) 
                                        || (!arg.compare(XOS_APP_CONSOLE_OS_MAIN_OS_OPTARG_OS_S))) {
                                        err = on_this_os_option
                                        (optval, optarg, optname, optind, argc, argv, env);
                                    } else {
                                        if ((!arg.compare(XOS_APP_CONSOLE_OS_MAIN_OS_OPTARG_NONE_C)) 
                                            || (!arg.compare(XOS_APP_CONSOLE_OS_MAIN_OS_OPTARG_NONE_S))) {
                                            err = on_no_os_option
                                            (optval, optarg, optname, optind, argc, argv, env);
                                        } else {
                                            if (!(err = on_get_os_option(optarg, optind, argc, argv, env))) {
                                                if (!(err = on_os_option_get(optarg, optind, argc, argv, env))) {
                                                } else {
                                                }
                                            } else {
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        } else {
            if (!(err = on_get_os_option(optarg, optind, argc, argv, env))) {
                if (!(err = on_os_option_get(optarg, optind, argc, argv, env))) {
                } else {
                }
            } else {
            }
        }
        return err;
    }
    virtual const char_t* os_option_usage(const char_t*& optarg, const struct option* longopt) {
        const char_t* chars = XOS_APP_CONSOLE_OS_MAIN_OS_OPTUSE;
        optarg = XOS_APP_CONSOLE_OS_MAIN_OS_OPTARG;
        return chars;
    }
    //////////////////////////////////////////////////////////////////////////

    //////////////////////////////////////////////////////////////////////////
    /// on_option
    virtual int on_option
    (int optval, const char_t* optarg, const char_t* optname,
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        switch(optval) {

        case XOS_APP_CONSOLE_OS_MAIN_OS_OPTVAL_C:
            err = this->on_os_option(optval, optarg, optname, optind, argc, argv, env);
            break;

        default:
            err = extends::on_option(optval, optarg, optname, optind, argc, argv, env);
        }
        return err;
    }
    //////////////////////////////////////////////////////////////////////////
    /// option_usage
    virtual const char_t* option_usage(const char_t*& optarg, const struct option* longopt) {
        const char_t* chars = "";
        switch(longopt->val) {

        case XOS_APP_CONSOLE_OS_MAIN_OS_OPTVAL_C:
            chars = this->os_option_usage(optarg, longopt);
            break;

        default:
            chars = extends::option_usage(optarg, longopt);
            break;
        }
        return chars;
    }
    //////////////////////////////////////////////////////////////////////////
    /// options
    virtual const char_t* options(const struct option*& longopts) {
        static const char_t* chars = XOS_APP_CONSOLE_OS_MAIN_OPTIONS_CHARS;
        static struct option optstruct[]= {
            XOS_APP_CONSOLE_OS_MAIN_OPTIONS_OPTIONS
            {0, 0, 0, 0}};
        longopts = optstruct;
        return chars;
    }
    /// arguments
    virtual const char_t* arguments(const char_t**& argv) {
        static const char_t* _args = XOS_APP_CONSOLE_OS_MAIN_ARGS;
        static const char_t* _argv[] = {
            XOS_APP_CONSOLE_OS_MAIN_ARGV
            0};
        argv = _argv;
        return _args;
    }
    //////////////////////////////////////////////////////////////////////////

    //////////////////////////////////////////////////////////////////////////
protected:
}; /// class main_optt 
typedef main_optt<> main_opt;

} /// namespace os 
} /// namespace console 
} /// namespace app 
} /// namespace xos 

#endif /// ndef XOS_APP_CONSOLE_OS_MAIN_OPT_HPP
