#pragma once

#include "Application.h"

#ifdef RV_PLATFORM_WINDOWS

extern Raven::Application* Raven::CreateApplication();

int main(int argc, char** argv)
{
	auto app = Raven::CreateApplication();
	app->Run();
	delete app;
}

#endif // RV_PLATFORM_WINDOWS
