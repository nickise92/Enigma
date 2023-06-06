cmake_minimum_required(VERSION 3.25)
project(Enigma C)

set(CMAKE_C_STANDARD 23)

add_executable(Enigma main.c lib/enigma.c lib/enigma.h lib/keyboard.h
        lib/rotor.c lib/rotor.h lib/reflector.c lib/reflector.h lib/keyboard.c lib/misc.c lib/misc.h)
