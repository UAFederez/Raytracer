#ifndef RAYTRACE_RAY_H
#define RAYTRACE_RAY_H

#include "Vector.h"

class Ray {
public:
    Ray() { }
    Ray(const Vec3& orig, const Vec3& dir): orig(orig), dir(dir) { }

    inline Vec3 origin()    const { return orig; }
    inline Vec3 direction() const { return dir;  }
    inline Vec3 point_at_t(const float t) const { return orig + (t * dir); }
    Vec3 orig;
    Vec3 dir;
};

#endif
