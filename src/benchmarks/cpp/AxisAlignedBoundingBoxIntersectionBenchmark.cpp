#include <float.h>
#include <hayai.hpp>
#include <Ray.h>
#include <BoundingBox.h>


static BoundingBox bBox = BoundingBox(Vector3(0.f, 0.f, 0.f), Vector3(1.0f, 1.0f, 1.0f));
static Ray benchmarkAABBIntersectRay = Ray(Vector3(0.5f, 0.5f, 2.f), Vector3(0.f, 0.f, -1.f), .0f, FLT_MAX, 0.f);
static float tMin, tMax = .0f;

static bool result;

BENCHMARK(BoundingBox, benchmarkAABBIntersect, 100, 1000000) {
    result = bBox.rayBoxIntersection(benchmarkAABBIntersectRay, tMin, tMax);
}
