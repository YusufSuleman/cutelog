#include <stdlib.h>
#include <iostream>
#include <string>

bool lightMode = false;
std::string allErrors;
std::string allInfos;
std::string allWarnings;

double x = 1.0;
double y = 10.0;
double z = 3.0;

void error(const char* message) {
	if (lightMode == false) {
		std::cout << "\u001b[41m\u001b[37;1mERROR  :" << "\u001b[40m\u001b[0m " << message << " \n";
		allErrors = allErrors + "\u001b[41m\u001b[37;1mERROR  :" + "\u001b[40m\u001b[0m " + message + " \n";
	}
	else if (lightMode == true) {
		std::cout << "\u001b[41m\u001b[37;1mERROR  :" << "\u001b[47;1m\u001b[38;5;0m " << message << " \n";
		allErrors = allErrors + "\u001b[41m\u001b[37;1mERROR  :" + "\u001b[47;1m\u001b[38;5;0m " + message + " \n";
	}
}

void errorMultiLine(const char* message) {
	if (lightMode == false) {
		std::cout << "\u001b[41m\u001b[37;1m        " << "\u001b[40m\u001b[0m " << message << " \n";
		allErrors = allErrors + "\u001b[41m\u001b[37;1m        " + "\u001b[40m\u001b[0m " + message + " \n";
	}
	else if (lightMode == true) {
		std::cout << "\u001b[41m\u001b[37;1m        " << "\u001b[47;1m\u001b[38;5;0m " << message << " \n";
		allErrors = allErrors + "\u001b[41m\u001b[37;1m        " + "\u001b[47;1m\u001b[38;5;0m " + message + " \n";
	}
}

void errorXYZ(const double x, const double y, const double z, const char* message) {
	if (lightMode == false) {
		std::cout << "\u001b[41m\u001b[37;1mERROR  :" << "\u001b[40m\u001b[0m " << message << " \n"
			<< "\u001b[41m\u001b[37;1mX:      " << "\u001b[40m\u001b[0m " << x << "\n"
			<< "\u001b[41m\u001b[37;1mY:      " << "\u001b[40m\u001b[0m " << y << "\n"
			<< "\u001b[41m\u001b[37;1mZ:      " << "\u001b[40m\u001b[0m " << z << "\n";
	}
	else if (lightMode == true) {
		std::cout << "\u001b[41m\u001b[37;1mERROR  :" << "\u001b[47;1m\u001b[38;5;0m " << message << " \n"
			<< "\u001b[41m\u001b[37;1mX:      " << "\u001b[47;1m\u001b[38;5m " << x << "\n"
			<< "\u001b[41m\u001b[37;1mY:      " << "\u001b[47;1m\u001b[38;5m " << y << "\n"
			<< "\u001b[41m\u001b[37;1mZ:      " << "\u001b[47;1m\u001b[38;5m " << z << "\n";

	}
}

void info(const char* message)
{
	if (lightMode == false) {
		std::cout << "\u001b[46;1m\u001b[37;1mINFO   :" << "\u001b[40m\u001b[0m " << message << " \n";
		allInfos = allInfos + "\u001b[46;1m\u001b[37;1mINFO   :" + "\u001b[40m\u001b[0m " + message + " \n";
	}
	else if (lightMode == true) {
		std::cout << "\u001b[46;1m\u001b[37;1mINFO   :" << "\u001b[47;1m\u001b[38;5;0m " << message << " \n";
		allInfos = allInfos + "\u001b[46;1m\u001b[37;1mINFO   :" + "\u001b[47;1m\u001b[38;5;0m " + message + " \n";
	}
}

void infoMultiline(const char* message)
{
	if (lightMode == false) {
		std::cout << "\u001b[46;1m\u001b[37;1m        " << "\u001b[40m\u001b[0m " << message << " \n";
		allInfos = allInfos + "\u001b[46;1m\u001b[37;1m        " + "\u001b[40m\u001b[0m " + message + " \n";
	}
	else if (lightMode == true) {
		std::cout << "\u001b[46;1m\u001b[37;1m        " << "\u001b[47;1m\u001b[38;5;0m " << message << " \n";
		allInfos = allInfos + "\u001b[46;1m\u001b[37;1m        " + "\u001b[47;1m\u001b[38;5;0m " + message + " \n";
	}
}

void infoXYZ(const double x, const double y, const double z, const char* message)
{
	if (lightMode == false) {
		std::cout << "\u001b[46;1m\u001b[37;1mINFO   :" << "\u001b[40m\u001b[0m" << message << "\n"
			<< "\u001b[46;1m\u001b[37;1mX:      " << "\u001b[40m\u001b[0m " << x << "\n"
			<< "\u001b[46;1m\u001b[37;1mY:      " << "\u001b[40m\u001b[0m " << y << "\n"
			<< "\u001b[46;1m\u001b[37;1mZ:      " << "\u001b[40m\u001b[0m " << z << "\n";
	}
	else if (lightMode == true) {
		std::cout << "\u001b[46;1m\u001b[37;1m        " << "\u001b[47;1m\u001b[38;5;0m " << message << " \n"
			<< "\u001b[46;1m\u001b[37;1mX:      " << "\u001b[47;1m\u001b[38;5;0m " << x << "\n"
			<< "\u001b[46;1m\u001b[37;1mY:      " << "\u001b[47;1m\u001b[38;5;0m " << y << "\n"
			<< "\u001b[46;1m\u001b[37;1mZ:      " << "\u001b[47;1m\u001b[38;5;0m " << z << "\n";
	}
}

void warning(const char* message) {
	if (lightMode == false) {
		std::cout << "\u001b[43;1m\u001b[37;1mWARNING:" << "\u001b[40m\u001b[0m " << message << " \n";
		allWarnings = allWarnings + "\u001b[43;1m\u001b[37;1mWARNING:" + "\u001b[40m\u001b[0m " + message + " \n";
	}
	else if (lightMode == true) {
		std::cout << "\u001b[43;1m\u001b[37;1mWARNING:" << "\u001b[47;1m\u001b[38;5;0m " << message << " \n";
		allWarnings = allWarnings + "\u001b[43;1m\u001b[37;1mWARNING:" + "\u001b[47;1m\u001b[38;5;0m " + message + " \n";
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

void warningXYZ(const double x, const double y, const double z, const char* message) {
	if (lightMode == false) {
		std::cout << "\u001b[43;1m\u001b[37;1mWARNING:" << "\u001b[40m\u001b[0m " << message << " \n"
			<< "\u001b[43;1m\u001b[37;1mX:      " << "\u001b[40m\u001b[0m " << x << "\n"
			<< "\u001b[43;1m\u001b[37;1mY:      " << "\u001b[40m\u001b[0m " << y << "\n"
			<< "\u001b[43;1m\u001b[37;1mZ:      " << "\u001b[40m\u001b[0m " << z << "\n";

		allWarnings = allWarnings + "\u001b[43;1m\u001b[37;1mWARNING:" + "\u001b[40m\u001b[0m " + message + " \n"
			+ "\u001b[43;1m\u001b[37;1mX:      " + "\u001b[40m\u001b[0m " << x + "\n"
			+ "\u001b[43;1m\u001b[37;1mY:      " + "\u001b[40m\u001b[0m " + y + "\n"
			+ "\u001b[43;1m\u001b[37;1mZ:      " + "\u001b[40m\u001b[0m " + z + "\n";
	}
	else if (lightMode == true) {
		std::cout << "\u001b[43;1m\u001b[37;1mWARNING:" << "\u001b[47;1m\u001b[38;5;0m " << message << " \n"
			<< "\u001b[43;1m\u001b[37;1mX:      " << "\u001b[47;1m\u001b[38;5;0m " << x << "\n"
			<< "\u001b[43;1m\u001b[37;1mY:      " << "\u001b[47;1m\u001b[38;5;0m " << y << "\n"
			<< "\u001b[43;1m\u001b[37;1mZ:      " << "\u001b[47;1m\u001b[38;5;0m " << z << "\n";
	}
}

void toggleToLightMode() {
	warning("Light Mode is not done yet.");
	lightMode = true;
}

void toggleToDarkMode() {
	lightMode = false;
}

void cuteLogSortByType() {
	std::cout << "\u001b[H\u001b[0J";
	std::cout << allErrors << allInfos << allWarnings;
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
	toggleToDarkMode();
	errorXYZ(1.0, 1.0, 1.0, "Dark");
	infoXYZ(1.0, 1.0, 1.0, "Dark");
	warningXYZ(1.0, 1.0, 1.0, "Dark");
	toggleToLightMode();
	errorXYZ(1.0, 1.0, 1.0, "Light");
	infoXYZ(1.0, 1.0, 1.0, "Light");
	warningXYZ(1.0, 1.0, 1.0, "Light");

}


int main() 
{	

}
