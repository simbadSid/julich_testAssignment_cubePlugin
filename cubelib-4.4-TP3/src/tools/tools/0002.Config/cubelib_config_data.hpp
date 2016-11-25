/****************************************************************************
**  CUBE        http://www.scalasca.org/                                   **
*****************************************************************************
**  Copyright (c) 1998-2016                                                **
**  Forschungszentrum Juelich GmbH, Juelich Supercomputing Centre          **
**                                                                         **
**  Copyright (c) 2009-2015                                                **
**  German Research School for Simulation Sciences GmbH,                   **
**  Laboratory for Parallel Programming                                    **
**                                                                         **
**  This software may be modified and distributed under the terms of       **
**  a BSD-style license.  See the COPYING file in the package base         **
**  directory for details.                                                 **
****************************************************************************/



/**
 * @file
 *
 * Declares classes for the representation and analysis of library dependencies
 */

#ifndef CUBELIB_CONFIG_DATA_HPP
#define CUBELIB_CONFIG_DATA_HPP

#include <map>
#include <deque>
#include <string>


/**
 * A class to store and analyze the dependencies from libraries. To generate
 * the dependecies, the .la files are parsed and initialization code is
 * generated by vendor/common/build-config/generate-library-dependecies.sh
 */
class cubelib_config_data
{
    // ------------------------------------- Public types
public:

    /**
     * Internal class to represent teh content of one .la file.
     */
    class la_object
    {
public:
        /**
         * Empty contructor. Needed to allow copies of STL containers containing this
         * class
         */
        la_object( void );

        /**
         * Copy constructor.
         */
        la_object( const la_object& source );

        /**
         * Regular constructor.
         */
        la_object( const std::string&             lib_name,
                   const std::string&             build_dir,
                   const std::string&             install_dir,
                   const std::deque<std::string>& libs,
                   const std::deque<std::string>& ldflags,
                   const std::deque<std::string>& rpaths,
                   const std::deque<std::string>& dependency_las );

        /**
         * Destructor.
         */
        virtual
        ~la_object();
public:
        std::string             m_lib_name;
        std::string             m_build_dir;
        std::string             m_install_dir;
        std::deque<std::string> m_libs;
        std::deque<std::string> m_ldflags;
        std::deque<std::string> m_rpath;
        std::deque<std::string> m_dependency_las;
    };


    /**
     * Constructs the library dependecies
     */
    cubelib_config_data( void );

    /**
     * Destructor
     */
    virtual
    ~cubelib_config_data();

    /**
     * Returns the string containing the @a input_libs and its dependencies.
     * @param input_libs  A list of libraries, that should be linked.
     */
    std::string
    GetLibraries( const std::deque<std::string>& inputLibs );

    /**
     * Returns the string containing the library path flags for the @a input_libs and
     * its dependencies.
     * @param libs     A list of library names.
     */
    std::string
    GetLDFlags( const std::deque<std::string>& libs );

    /**
     * Returns the string containing the rpath flags for the @a libs and
     * its dependencies.
     * @param libs      A list of library names.
     */
    std::string
    GetRpathFlags( const std::deque<std::string>& libs );

    /**
     * Construct rpath construction flags
     */
    void
    prepare_rpath_flags( void );

    /*
     * Returns @a pathList without system path entries.
     */
    std::deque<std::string>
    remove_system_path( const std::deque<std::string>& pathList );

    /**
     * Add content of the environment variable LD_RUN_PATH as -rpath argument
     */
    std::string
    append_ld_run_path_to_rpath( const std::string& rpath );

    /** Make string with compiler or linker flags compatible to CUDA
     *  compiler requirements.
     *
     *  @param str              String to be processed.
     *
     *  @return Returns string with compiler or linker flags that can be
     *          passes to CUDA compiler.
     */
    std::string
    prepare_string( const std::string& str );

    /**
     * Calculates the dependencies for a given set of libraries.
     * @param libs      A list of library names.
     * @param frontend  Specifies whether the data for the frontend or
     *                  for the backend is requested. Pass true, if you
     *                  need frontend data. Pass false is you want
     *                  backend data.
     */
    std::deque<std::string>
    get_dependencies( const std::deque<std::string>& libs );

    // ------------------------------------- Public members
public:

    std::string m_rpath_head;
    std::string m_rpath_delimiter;
    std::string m_rpath_tail;

    std::string m_cc;
    std::string m_cxx;
    std::string m_cppflags;
    std::string m_incldir;
    bool        m_use_rpath_flag;
    std::string m_rpath_flag_cc;
    std::string m_wl_flag;
    std::string m_aix_libpath;
    std::string m_sys_lib_dlsearch_path;

    std::map< std::string, la_object> m_la_objects;
};



cubelib_config_data*
cubelib_config_get_frontend_data( void );


#endif /* CUBELIB_CONFIG_DATA_HPP */
