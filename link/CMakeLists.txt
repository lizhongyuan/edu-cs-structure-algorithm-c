cmake_minimum_required(VERSION 3.13)

project(main)

include_directories("./*")

add_executable(main main.c node.h node.c link_list.c link_list.h)