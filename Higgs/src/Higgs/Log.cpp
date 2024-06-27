#include "Log.h"
#include <spdlog/sinks/stdout_color_sinks.h>

namespace Higgs {
	std::shared_ptr<spdlog::logger> Log::s_engineLogger;
	std::shared_ptr<spdlog::logger> Log::s_applicationLogger;

	void Log::Init()
	{
		spdlog::set_pattern("%^[%T] %n: %v%$");
		
		s_engineLogger = spdlog::stdout_color_mt("ENGINE");
		s_engineLogger->set_level(spdlog::level::trace);

		s_applicationLogger = spdlog::stdout_color_mt("APP");
		s_applicationLogger->set_level(spdlog::level::trace);
	}
}