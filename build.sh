cmake -B build -S src
cmake --build build
ctest --test-dir build --verbose --output-on-failure