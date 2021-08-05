#pragma once
#include <iostream>

bool lightMode = false;

void error(const char* message);
void errorMultiLine(const char* message);
void errorXYZ(const double x, const double y, const double z, const char* message);
void info(const char* message);
void infoMultiline(const char* message);
void infoXYZ(const double x, const double y, const double z, const char* message);
void warning(const char* message);
void warningMultline(const char* message);
void warningXYZ(const double x, const double y, const double z, const char* message);
void cuteLogExample();