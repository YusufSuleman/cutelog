#pragma once
#include <iostream>

bool lightMode = false;

void error(const char* message);
void errorMultiLine(const char* message);
void info(const char* message);
void infoMultiline(const char* message);
void warning(const char* message);
void warningMultline(const char* message);
void cuteLogExample();