#pragma once

#include "Core.h"
#include "spdlog/spdlog.h"

namespace Higgs {
	class HIGGS_API Log
	{
	public: 
		static void Init();
		inline static std::shared_ptr<spdlog::logger>& GetEngineLogger() { return s_engineLogger; }
		inline static std::shared_ptr<spdlog::logger>& GetApplicationLogger() { return s_applicationLogger; }

	private:
		static std::shared_ptr<spdlog::logger> s_engineLogger;
		static std::shared_ptr<spdlog::logger> s_applicationLogger;
	};
}

#define HG_ENGINE_TRACE(...) Higgs::Log::GetEngineLogger()->trace(__VA_ARGS__);
#define HG_ENGINE_INFO(...) Higgs::Log::GetEngineLogger()->info(__VA_ARGS__);
#define HG_ENGINE_WARN(...) Higgs::Log::GetEngineLogger()->warn(__VA_ARGS__);
#define HG_ENGINE_ERROR(...) Higgs::Log::GetEngineLogger()->error(__VA_ARGS__);
//#define HG_ENGINE_FATAL(...) Higgs::Log::GetEngineLogger()->fatal(__VA_ARGS__);

#define HG_TRACE(...) Higgs::Log::GetApplicationLogger()->trace(__VA_ARGS__);
#define HG_INFO(...) Higgs::Log::GetApplicationLogger()->info(__VA_ARGS__);
#define HG_WARN(...) Higgs::Log::GetApplicationLogger()->warn(__VA_ARGS__);
#define HG_ERROR(...) Higgs::Log::GetApplicationLogger()->error(__VA_ARGS__);
//#define HG_FATAL(...) Higgs::Log::GetApplicationLogger()->fatal(__VA_ARGS__);