cmake_minimum_required(VERSION 3.22)
project(SchuelyManagement C)

set(CMAKE_C_STANDARD 99)

include_directories("include")

add_executable(SchuelyManagement source/main.c source/utils.c source/kbinput.c source/fileLib.c source/Funktionen.c source/strings.c include/strings.h source/daten_ausgeben.c include/daten_ausgeben.h source/Profil_bearbeiten.c include/Profil_bearbeiten.h)
