#ifndef CONVERT_HPP
#define CONVERT_HPP

#include <string>
#include <iostream>

int check_argument_type(std::string std);
void show_result_as_int(int i);
void show_result_as_char(std::string std);
void show_result_as_float(float f);
void show_result_as_double(double d);
void show_result_as_nan();
void show_result_as_inf();
#endif