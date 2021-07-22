#pragma once

#include <vector>
#include "Core\Primitives\Point.h"

// Implementation of Voronoi diagram calculation and related utility functions.
namespace jmk {

	// Compute the voronoi diagram nively using halfplane intersection
	void constructVoronoiDiagram_halfplaneIntersection(std::vector<Point2d>&);

	// Compute the voronoi diagram using fortune's algorithm
	void constructVoronoiDiagram_fortunes(std::vector<Point2d>);
}