cmake_minimum_required(VERSION 4.2)
project(Assignments C)

set(CMAKE_C_STANDARD 11)

add_executable(Assignments main.c
        "01_PartA Conditional Statements/01_if.c"
        "01_PartA Conditional Statements/02_if.c"
        "01_PartA Conditional Statements/03_if.c"
        "01_PartA Conditional Statements/05_if.c"
        "01_PartA Conditional Statements/04_if.c"
        "01_PartA Conditional Statements/06_if.c"
        "01_PartA Conditional Statements/07_if.c"
        "01_PartA Conditional Statements/08_switch-case.c"
        "01_PartA Conditional Statements/08_2switch-case.c"
        "01_PartA Conditional Statements/10_Calculator-switch-case.c"
        "01_PartA Conditional Statements/11_triangle.c"
        "01_PartA Conditional Statements/12_temperature.c")
