@echo off
mkdir build
cd build

cmake -G "Visual Studio 12 Win64" ../
cd ..