cmake_minimum_required(VERSION 3.5)

project(jarinDenfant3 VERSION 0.1 LANGUAGES CXX)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Widgets)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Widgets Sql)


cmake_minimum_required(VERSION 3.5)

project(jarinDenfant3 VERSION 0.1 LANGUAGES CXX)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Widgets)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Widgets Sql)

set(MYSQL_INCLUDE_DIR "C:/Program Files/MySQL/MySQL Server 8.0/include")
set(MYSQL_LIBRARY "C:/Program Files/MySQL/MySQL Server 8.0/lib/libmysql.lib")

if(NOT EXISTS ${MYSQL_INCLUDE_DIR} OR NOT EXISTS ${MYSQL_LIBRARY})
    message(FATAL_ERROR "MySQL Connector/C++ not found. Please provide the correct path.")
endif()

include_directories(${MYSQL_INCLUDE_DIR})

set(PROJECT_SOURCES
    main.cpp
    mainwindow.cpp
    mainwindow.h
    mainwindow.ui
    eleve.cpp
    eleve.h
    eleve.ui
    enseignant.cpp
    enseignant.h
    enseignant.ui
    images.qrc
    home.h home.cpp home.ui
)

add_executable(jarinDenfant3
    ${PROJECT_SOURCES}
)

# Link against Qt and MySQL libraries
target_link_libraries(jarinDenfant3 PRIVATE
    Qt${QT_VERSION_MAJOR}::Widgets
    Qt${QT_VERSION_MAJOR}::Sql
    ${MYSQL_LIBRARY}
)







