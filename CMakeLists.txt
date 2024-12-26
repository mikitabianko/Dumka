cmake_minimum_required(VERSION 3.16)

# Название проекта
project(Dumka LANGUAGES CXX)

# Установка стандарта C++
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Поиск всех исходников рекурсивно
file(GLOB_RECURSE SOURCE_FILES src/*.cpp)

# Добавление исполняемого файла
add_executable(${PROJECT_NAME} ${SOURCE_FILES})

# Включение директорий заголовочных файлов
target_include_directories(${PROJECT_NAME} PRIVATE include)

# Добавление флагов компиляции
if (CMAKE_CXX_COMPILER_ID MATCHES "Clang" OR CMAKE_CXX_COMPILER_ID MATCHES "GNU")
    target_compile_options(${PROJECT_NAME} PRIVATE -Wall -Wextra -Wpedantic -Werror)
endif()
