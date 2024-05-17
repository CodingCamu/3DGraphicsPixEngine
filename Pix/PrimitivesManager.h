#pragma once

#include "Vertex.h"

enum class Topology
{
	Point,
	Line,
	Triangle
};

<<<<<<< HEAD
enum class CullMode
{
	None,
	Front,
	Back
};

=======
>>>>>>> 8f95618 (Assigment 2, 3 and 4)
class PrimitivesManager
{
public:
	static PrimitivesManager* Get();

	~PrimitivesManager();

<<<<<<< HEAD
	void OnNewFrame();
	void SetCullMode(CullMode mode);
=======
>>>>>>> 8f95618 (Assigment 2, 3 and 4)
	bool BeginDraw(Topology topology, bool applyTransform = false);
	void AddVertex(const Vertex& vertex);
	bool EndDraw();

private:
	PrimitivesManager();

	std::vector<Vertex> mVertexBuffer;
	Topology mTopology = Topology::Triangle;
<<<<<<< HEAD
	CullMode mCullMode = CullMode::None;
=======
>>>>>>> 8f95618 (Assigment 2, 3 and 4)
	bool mDrawBegin = false;
	bool mApplyTransform = false;
};