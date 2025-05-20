cmake_minimum_required(VERSION 3.16)
project(sterna_lite LANGUAGES CXX)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_AUTOUIC_SEARCH_PATHS ${CMAKE_SOURCE_DIR}/src)

find_package(Qt6 6.9 REQUIRED COMPONENTS Core Gui Widgets Sql PrintSupport)

file(GLOB_RECURSE HEADERS
    src/*.h
)

file(GLOB_RECURSE SOURCES
    src/*.cpp
)

file(GLOB_RECURSE FORMS
    src/*.ui
)

file(GLOB_RECURSE RESOURCES
    *.qrc
)

include_directories(${CMAKE_SOURCE_DIR}/src)
include_directories(${CMAKE_SOURCE_DIR}/src/AnalitikaArtikli)
include_directories(${CMAKE_SOURCE_DIR}/src/AnalitikaKomintenti)
include_directories(${CMAKE_SOURCE_DIR}/src/Artikli)
include_directories(${CMAKE_SOURCE_DIR}/src/Banki)
include_directories(${CMAKE_SOURCE_DIR}/src/Base)
include_directories(${CMAKE_SOURCE_DIR}/src/DDV)
include_directories(${CMAKE_SOURCE_DIR}/src/DnevenPromet)
include_directories(${CMAKE_SOURCE_DIR}/src/Employee)
include_directories(${CMAKE_SOURCE_DIR}/src/Fakturi)
include_directories(${CMAKE_SOURCE_DIR}/src/FakturiVlezni)
include_directories(${CMAKE_SOURCE_DIR}/src/FinAnalitikaKomintenti)
include_directories(${CMAKE_SOURCE_DIR}/src/FiscalForm)
include_directories(${CMAKE_SOURCE_DIR}/src/Helper)
include_directories(${CMAKE_SOURCE_DIR}/src/Ispratnici)
include_directories(${CMAKE_SOURCE_DIR}/src/Izjava)
include_directories(${CMAKE_SOURCE_DIR}/src/IzlezniFakturi)
include_directories(${CMAKE_SOURCE_DIR}/src/Izvestai)
include_directories(${CMAKE_SOURCE_DIR}/src/Izvod)
include_directories(${CMAKE_SOURCE_DIR}/src/Kalkulacija)
include_directories(${CMAKE_SOURCE_DIR}/src/Kartici)
include_directories(${CMAKE_SOURCE_DIR}/src/Kasa)
include_directories(${CMAKE_SOURCE_DIR}/src/Komintenti)
include_directories(${CMAKE_SOURCE_DIR}/src/Lager)
include_directories(${CMAKE_SOURCE_DIR}/src/Odobrenie)
include_directories(${CMAKE_SOURCE_DIR}/src/OpenDialog)
include_directories(${CMAKE_SOURCE_DIR}/src/Periodicen)
include_directories(${CMAKE_SOURCE_DIR}/src/Popis)
include_directories(${CMAKE_SOURCE_DIR}/src/Poracki)
include_directories(${CMAKE_SOURCE_DIR}/src/Povratnica)
include_directories(${CMAKE_SOURCE_DIR}/src/Priemnica)
include_directories(${CMAKE_SOURCE_DIR}/src/ProFakturi)
include_directories(${CMAKE_SOURCE_DIR}/src/PromaneCeni)
include_directories(${CMAKE_SOURCE_DIR}/src/Search)
include_directories(${CMAKE_SOURCE_DIR}/src/Smetki)

add_executable(${PROJECT_NAME}
    ${HEADERS}
    ${SOURCES}
    ${FORMS}
    ${RESOURCES}
)

target_link_libraries(${PROJECT_NAME} PRIVATE
    Qt6::Core
    Qt6::Gui
    Qt6::Widgets
    Qt6::Sql
    Qt6::PrintSupport
)

install(TARGETS ${PROJECT_NAME} DESTINATION bin)

# Copy Baza.db to the build directory next to the executable
add_custom_command(TARGET ${PROJECT_NAME} POST_BUILD
    COMMAND ${CMAKE_COMMAND} -E copy_if_different
        ${CMAKE_SOURCE_DIR}/Baza.db
        $<TARGET_FILE_DIR:${PROJECT_NAME}>
)

set_target_properties(${PROJECT_NAME} PROPERTIES
    WIN32_EXECUTABLE TRUE
)
