    libs.clear();
    ldflags.clear();
    rpaths.clear();
    dependency_las.clear();
    libs.push_back( "-lz" );
    libs.push_back( "-lQtGui" );
    libs.push_back( "-lQtNetwork" );
    libs.push_back( "-lQtCore" );
    libs.push_back( "-lpthread" );
    ldflags.push_back( "-L/home/kassuskley/Desktop/khedma/internship/julich/assignment/report/cubelib-install/lib" );
    ldflags.push_back( "-L/usr/lib64" );
    rpaths.push_back( "-R/home/kassuskley/Desktop/khedma/internship/julich/assignment/report/cubelib-install/lib" );
    rpaths.push_back( "-R/usr/lib64" );
    dependency_las.push_back( "libcube4" );
    if ( la_objects->find( "libcube4gui" ) == la_objects->end() )
    {
        (*la_objects)[ "libcube4gui" ] =
            la_object( "libcube4gui",
                       "/home/kassuskley/Desktop/khedma/internship/julich/assignment/report/cubegui-4.4-TP3/build-frontend",
                       "/home/kassuskley/Desktop/khedma/internship/julich/assignment/report/cubegui-install/lib",
                       libs,
                       ldflags,
                       rpaths,
                       dependency_las );
    }

    libs.clear();
    ldflags.clear();
    rpaths.clear();
    dependency_las.clear();
    libs.push_back( "-lz" );
    if ( la_objects->find( "libcube4" ) == la_objects->end() )
    {
        (*la_objects)[ "libcube4" ] =
            la_object( "libcube4",
                       "/home/kassuskley/Desktop/khedma/internship/julich/assignment/report/cubelib-install/lib",
                       "/home/kassuskley/Desktop/khedma/internship/julich/assignment/report/cubelib-install/lib",
                       libs,
                       ldflags,
                       rpaths,
                       dependency_las );
    }

    libs.clear();
    ldflags.clear();
    rpaths.clear();
    dependency_las.clear();
    libs.push_back( "-lz" );
    libs.push_back( "-lQtGui" );
    libs.push_back( "-lQtNetwork" );
    libs.push_back( "-lQtCore" );
    libs.push_back( "-lpthread" );
    ldflags.push_back( "-L/usr/lib64" );
    ldflags.push_back( "-L/home/kassuskley/Desktop/khedma/internship/julich/assignment/report/cubelib-install/lib" );
    rpaths.push_back( "-R/usr/lib64" );
    rpaths.push_back( "-R/home/kassuskley/Desktop/khedma/internship/julich/assignment/report/cubelib-install/lib" );
    dependency_las.push_back( "libcube4gui" );
    dependency_las.push_back( "libcube4" );
    if ( la_objects->find( "libgraphwidgetcommon-plugin" ) == la_objects->end() )
    {
        (*la_objects)[ "libgraphwidgetcommon-plugin" ] =
            la_object( "libgraphwidgetcommon-plugin",
                       "/home/kassuskley/Desktop/khedma/internship/julich/assignment/report/cubegui-4.4-TP3/build-frontend",
                       "/home/kassuskley/Desktop/khedma/internship/julich/assignment/report/cubegui-install/lib",
                       libs,
                       ldflags,
                       rpaths,
                       dependency_las );
    }

    libs.clear();
    ldflags.clear();
    rpaths.clear();
    dependency_las.clear();
    libs.push_back( "-lz" );
    libs.push_back( "-lQtGui" );
    libs.push_back( "-lQtNetwork" );
    libs.push_back( "-lQtCore" );
    libs.push_back( "-lpthread" );
    ldflags.push_back( "-L/home/kassuskley/Desktop/khedma/internship/julich/assignment/report/cubelib-install/lib" );
    ldflags.push_back( "-L/usr/lib64" );
    rpaths.push_back( "-R/home/kassuskley/Desktop/khedma/internship/julich/assignment/report/cubelib-install/lib" );
    rpaths.push_back( "-R/usr/lib64" );
    dependency_las.push_back( "libcube4" );
    if ( la_objects->find( "libcube4gui" ) == la_objects->end() )
    {
        (*la_objects)[ "libcube4gui" ] =
            la_object( "libcube4gui",
                       "/home/kassuskley/Desktop/khedma/internship/julich/assignment/report/cubegui-4.4-TP3/build-frontend",
                       "/home/kassuskley/Desktop/khedma/internship/julich/assignment/report/cubegui-install/lib",
                       libs,
                       ldflags,
                       rpaths,
                       dependency_las );
    }

    libs.clear();
    ldflags.clear();
    rpaths.clear();
    dependency_las.clear();
    libs.push_back( "-lz" );
    if ( la_objects->find( "libcube4" ) == la_objects->end() )
    {
        (*la_objects)[ "libcube4" ] =
            la_object( "libcube4",
                       "/home/kassuskley/Desktop/khedma/internship/julich/assignment/report/cubelib-install/lib",
                       "/home/kassuskley/Desktop/khedma/internship/julich/assignment/report/cubelib-install/lib",
                       libs,
                       ldflags,
                       rpaths,
                       dependency_las );
    }

    libs.clear();
    ldflags.clear();
    rpaths.clear();
    dependency_las.clear();
    libs.push_back( "-lz" );
    if ( la_objects->find( "libcube4" ) == la_objects->end() )
    {
        (*la_objects)[ "libcube4" ] =
            la_object( "libcube4",
                       "/home/kassuskley/Desktop/khedma/internship/julich/assignment/report/cubelib-install/lib",
                       "/home/kassuskley/Desktop/khedma/internship/julich/assignment/report/cubelib-install/lib",
                       libs,
                       ldflags,
                       rpaths,
                       dependency_las );
    }

