#include <hayai.hpp>
#include <Triangle.h>
#include <Ray.h>
#include <float.h>

static Triangle t = Triangle(Vector3(0.f, 0.f, 1.f), Vector3(.0f, 1.f, 1.f), Vector3(1.f, 0.f, 1.f), 0, 0);
static Ray ray = Ray(Vector3(0.2f, 0.2f, 0.f), Vector3(0.f, 0.f, 1.f), .0f, FLT_MAX, .0f);
static float u, v = .0f;

static float result;

BENCHMARK(Triangle, benchmarkMoellerTrumboreTriangleIntersect, 100, 1000000) {
    result = t.intersectRay(&ray, u, v);
}
