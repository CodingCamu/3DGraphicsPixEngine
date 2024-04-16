#pragma once

#include "CmdBeginDraw.h"
#include "PrimitivesManager.h"



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
			"- Begins Draw.\n"
		"- Stores topology";
	}

	bool CmdBeginDraw::Execute(const std::vector<std::string>& params) override;
};
