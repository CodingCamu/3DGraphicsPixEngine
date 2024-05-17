#include "Graphics.h"

#include "Viewport.h"
#include "Clipper.h"
#include "Camera.h"
#include "MatrixStack.h"
<<<<<<< HEAD
#include "PrimitivesManager.h"
#include "DepthBuffer.h"
=======
>>>>>>> 8f95618 (Assigment 2, 3 and 4)

void Graphics::NewFrame()
{
	Viewport::Get()->OnNewFrame();
	Clipper::Get()->OnNewFrame();
	Camera::Get()->OnNewFrame();
	MatrixStack::Get()->OnNewFrame();
<<<<<<< HEAD
	PrimitivesManager::Get()->OnNewFrame();
	DepthBuffer::Get()->OnNewFrame();
=======
>>>>>>> 8f95618 (Assigment 2, 3 and 4)
}