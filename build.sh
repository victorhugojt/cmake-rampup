cmake -B build -S .
cmake --build build
ctest --test-dir build --verbose --output-on-failure