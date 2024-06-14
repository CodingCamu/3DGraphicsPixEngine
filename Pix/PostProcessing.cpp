#include "PostProcessing.h"
#include <XColors.h>
#include <XEngine.h>

void PostProcessing::DrawPixel(int x, int y)
{
	X::Color color = X::Colors::Black;
	//POSTPROCESSING
	X::DrawPixel(x, y, color);

}