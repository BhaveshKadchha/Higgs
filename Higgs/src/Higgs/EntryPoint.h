#pragma once

#ifdef HG_PLATFORM_WINDOWS

extern Higgs::Application* Higgs::CreateApplication();

int main(int argc,char** argv)
{
	Higgs::Log::Init();
	HG_ENGINE_WARN("Init Log!");
	HG_INFO("Application Hello! Vars={0}",1);

	auto app = Higgs::CreateApplication();
	app->Run();
	delete app;
}
#endif