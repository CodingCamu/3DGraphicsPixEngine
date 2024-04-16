#pragma once

#include "Command.h"

class CmdBeginDraw : public Command
{
public:
	const char* GetName() override
	{
		return "BeginDraw";
	}

	const char* GetDescription() override
	{
		return
			"BeginDraw(topology)\n"
			"\n"
			"- Begins Draw.\n";
		"- Stores topology"
	}

	bool Execute(const std::vector<std::string>& params) override;
};
