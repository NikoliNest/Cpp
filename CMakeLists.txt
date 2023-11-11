cmake_minimum_required(VERSION 3.27)   # У меня установилась 3.28, но обратная совместимость есть.

project(
    fib_5                                # Проект будет называться fib_5
    VERSION 0.1                          # 
    DESCRIPTION "First 5 Fibonacci"      # 5 первых чисел Фибоначчи
    LANGUAGES CXX                         # С++
)
set(CMAKE_CXX_STANDARD 17)               # С++ образца 2017 года.
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_BUILD_TYPE Debug)               # Тип сборки - debug.

add_executable(fib_5)                     # Исполняемый файл будет называться fib_5.exe
# add_library(fib_5)                      # А статическая библиотека называлась бы fib_5.lib
# add_library(fib_5, SHARED)              # А подклчаемая библиотека - fib_5.dll

set(sources
    main.cpp                              # Компилируемый файл - main.cpp
)

target_sources(fib_5 PRIVATE ${sources})  # Передаём сюда ссылку на набор компилируемых файлов.