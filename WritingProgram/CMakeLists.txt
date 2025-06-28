cmake_minimum_required(VERSION 3.19)
project(WritingProgram LANGUAGES CXX)

find_package(Qt6 6.5 REQUIRED COMPONENTS Core Widgets)

qt_standard_project_setup()

qt_add_executable(WritingProgram
    WIN32 MACOSX_BUNDLE
    main.cpp
    mainwindow.cpp
    mainwindow.h
    mainwindow.ui
    editorform.h editorform.cpp editorform.ui
    texteditor.h texteditor.cpp
    fontselector.h fontselector.cpp
    spacingdialog.h spacingdialog.cpp spacingdialog.ui
    notepad.h notepad.cpp
)

target_include_directories(WritingProgram PRIVATE ${CMAKE_CURRENT_SOURCE_DIR})

target_link_libraries(WritingProgram
    PRIVATE
        Qt::Core
        Qt::Widgets
)

include(GNUInstallDirs)

install(TARGETS WritingProgram
    BUNDLE  DESTINATION .
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
)

qt_generate_deploy_app_script(
    TARGET WritingProgram
    OUTPUT_SCRIPT deploy_script
    NO_UNSUPPORTED_PLATFORM_ERROR
)
install(SCRIPT ${deploy_script})
