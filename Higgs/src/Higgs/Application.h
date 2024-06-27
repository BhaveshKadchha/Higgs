#pragma once

#include "Core.h"

namespace Higgs {

	class HIGGS_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	Application* CreateApplication();
}