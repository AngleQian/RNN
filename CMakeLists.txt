cmake_minimum_required(VERSION 3.9)
project(RNN)

set(CMAKE_CXX_STANDARD 11)

add_executable(RNN main.cpp
        src/Neuron.cpp
        include/Neuron.hpp
        src/Layer.cpp
        include/Layer.hpp
        src/Network.cpp
        include/Network.hpp
        src/Utils.cpp
        include/Utils.hpp
        src/DataProcessing.cpp
        include/DataProcessing.hpp
        src/Client.cpp
        include/Client.hpp
        )

