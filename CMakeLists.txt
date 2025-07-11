cmake_minimum_required(VERSION 3.31)
project(chapter_02)

set(CMAKE_CXX_STANDARD 23)

add_executable(chapter_02 src/main.cpp
        src/User.cpp
        include/User.h
        src/Admin.cpp
        include/Admin.h
        src/ATM.cpp
        include/ATM.h
        src/UserUI.cpp
        include/UserUI.h
        src/AdminUI.cpp
        include/AdminUI.h
)
