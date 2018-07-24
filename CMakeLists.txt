#
# For basic cmake file structure see: http://doc.qt.io/qt-5/cmake-manual.html
#
cmake_minimum_required(VERSION 2.8.11)


project(myproject)

# Set up all the directory locations
# This is the directory where Qt was installed
set( qt_distro C:\\Qt\\5.6\\msvc2013_64\\)

# Add the path to the Qt installation/files
set(CMAKE_PREFIX_PATH ${qt_distro})

# Find includes in corresponding build directories
set(CMAKE_INCLUDE_CURRENT_DIR ON)

# Instruct CMake to run moc automatically when needed.
set(CMAKE_AUTOMOC ON)

# Find the Qt libraries for Qt Quick/QML
find_package(Qt5Core CONFIG REQUIRED Qml Quick Gui)
find_package(Qt5Quick)
find_package(Qt5Qml)
find_package(Qt5Gui)

# add the qml.qrc file
qt5_add_resources(qml_QRC src/qml.qrc)

# add source files
set(SOURCE 
	${SOURCE}
	src/main.cpp
)

# Tell CMake to create the helloworld executable
add_executable(helloworld WIN32 ${SOURCE} ${qml_QRC})

# Use the Qml/Quick modules from Qt 5.
target_link_libraries(helloworld Qt5::Qml Qt5::Quick)


# post-build steps
# copy all the Qt support files to the debug/release directories
# You really only need the proper qt redistibution dll's/files, but this copies everything for easier development. Trim files out as needed.
message("Copying required Qt libraries and binaries to output directory....")
add_custom_command(TARGET helloworld POST_BUILD COMMAND ${CMAKE_COMMAND} -E copy_directory ${CMAKE_PREFIX_PATH}\\bin $<TARGET_FILE_DIR:helloworld>)

add_custom_command(TARGET helloworld POST_BUILD COMMAND ${CMAKE_COMMAND} -E copy_directory ${CMAKE_PREFIX_PATH}\\plugins $<TARGET_FILE_DIR:helloworld>)

add_custom_command(TARGET helloworld POST_BUILD COMMAND ${CMAKE_COMMAND} -E copy_directory ${CMAKE_PREFIX_PATH}\\qml $<TARGET_FILE_DIR:helloworld>)
