#include "CmdSetCorrectUV.h"
#include "PrimitivesManager.h"

bool CmdSetCorrectUV::Execute(const std::vector<std::string>& params)
{
	if (params.size() < 1)
	{
		return false;
	}

	bool useCorrectUV = params[0] == "true";
	PrimitivesManager::Get()->SetCorrectUV(useCorrectUV);
	return true;
}
