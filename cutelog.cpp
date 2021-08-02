#include <stdlib.h>
#include <iostream>

bool lightMode = false;

void error(const char* message) {
	if (lightMode == false) {
		std::cout << "\u001b[41m\u001b[37;1mERROR  :" << "\u001b[40m\u001b[0m " << message << " \n";
	}
	else if (lightMode == true) {
		std::cout << "\u001b[41m\u001b[37;1mERROR  :" << "\u001b[47;1m\u001b[38;5;0m " << message << " \n";
	}
}

void errorMultiLine(const char* message) {
	if (lightMode == false) {
		std::cout << "\u001b[41m\u001b[37;1m        " << "\u001b[40m\u001b[0m " << message << " \n";
	}
	else if (lightMode == true) {
		std::cout << "\u001b[41m\u001b[37;1m        " << "\u001b[47;1m\u001b[38;5;0m " << message << " \n";
	}
}

void infoMultiline(const char* message)
{
	if (lightMode == false) {
		std::cout << "\u001b[46;1m\u001b[37;1m        " << "\u001b[40m\u001b[0m " << message << " \n";
	}
	else if (lightMode == true) {
		std::cout << "\u001b[46;1m\u001b[37;1m        " << "\u001b[47;1m\u001b[38;5;0m " << message << " \n";
	}
}

void info(const char* message)
{
	if (lightMode == false) {
		std::cout << "\u001b[46;1m\u001b[37;1mINFO   :" << "\u001b[40m\u001b[0m " << message << " \n";
	}
	else if (lightMode == true) {
		std::cout << "\u001b[46;1m\u001b[37;1mINFO   :" << "\u001b[47;1m\u001b[38;5;0m " << message << " \n";
	}
}

void warning(const char* message) {
	if (lightMode == false) {
		std::cout << "\u001b[43;1m\u001b[37;1mWARNING:" << "\u001b[40m\u001b[0m " << message << " \n";
	}
	else if (lightMode == true) {
		std::cout << "\u001b[43;1m\u001b[37;1mWARNING:" << "\u001b[47;1m\u001b[38;5;0m " << message << " \n";
	}
}

void warningMultline(const char* message) {
	if (lightMode == false) {
		std::cout << "\u001b[43;1m\u001b[37;1m        " << "\u001b[40m\u001b[0m " << message << " \n";
	}
	else if (lightMode == true) {
		std::cout << "\u001b[43;1m\u001b[37;1m        " << "\u001b[47;1m\u001b[38;5;0m " << message << " \n";
	}
}
void toggleToLightMode() {
	lightMode = true;
}

void toggleToDarkMode() {
	lightMode = false;
}

void cuteLogExample() {
	error("Dark");
	info("Dark");
	warning("Dark");
	toggleToLightMode();
	error("Light");
	info("Light");
	warning("Light");;
	toggleToDarkMode();
	error("Dark");
	errorMultiLine("Dark");
	info("Dark");
	infoMultiline("Dark");
	warning("Dark");
	warningMultline("Dark");
	toggleToLightMode();
	error("Light");
	errorMultiLine("Light");
	info("Light");
	infoMultiline("Light");
	warning("Light");
	warningMultline("Light");
}


int main() 
{
	cuteLogExample();
}
