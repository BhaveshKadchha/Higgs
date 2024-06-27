#pragma once

#ifdef HG_PLATFORM_WINDOWS

extern Higgs::Application* Higgs::CreateApplication();

int main(int argc,char** argv)
{
	auto app = Higgs::CreateApplication();
	app->Run();
	delete app;
}
#endif // HG_PLATFORM_WINDOWS

