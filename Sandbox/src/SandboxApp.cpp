#include "Higgs.h"

class  Sandbox : public Higgs::Application
{
public:
	Sandbox()
	{}
	~Sandbox()
	{}
};


Higgs::Application* Higgs::CreateApplication()
{
	return new Sandbox();
}