#pragma once

#include "Application.h"

#ifdef RV_PLATFORM_WINDOWS

extern Raven::Application* Raven::CreateApplication();

int main(int argc, char** argv)
{
	Raven::Log::Init();

	RV_CORE_WARN("Log Init!");
	bool a = true;
	RV_INFO("Secondary Logger online: {0}", a);

	auto app = Raven::CreateApplication();
	app->Run();
	delete app;
}

#endif // RV_PLATFORM_WINDOWS
