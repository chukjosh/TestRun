#include <QCoreApplication>
// #include <studio.h>     // this is fo C
#include <iostream>     // this is for Cpp
#include <windows.h>    // this is the Windows SDK header libray

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    // Set up code that uses the Qt event loop here.
    // Call QCoreApplication::quit() or QCoreApplication::exit() to quit the application.
    // A not very useful example would be including
    // #include <QTimer>
    // near the top of the file and calling
    // QTimer::singleShot(5000, &a, &QCoreApplication::quit);
    // which quits the application after 5 seconds.

    // If you do not need a running Qt event loop, remove the call
    // to QCoreApplication::exec() or use the Non-Qt Plain C++ Application template.

    printf("Windows SDK is available in C code!\n");
    std::cout <<"Windows SDK is available in Cpp code!"<< std::endl;

    return 0;

    return QCoreApplication::exec();
}
