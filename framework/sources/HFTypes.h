
/* A 64 bit range type we use pervasively */
typedef struct {
    unsigned long long location;
    unsigned long long length;
} HFRange;

/* A struct used for representing floating point ranges.  This is useful for (for example) showing the range of visible lines.  A double-precision value has 53 significant bits in the mantissa - so we would start to have precision problems at the high end of the range we can represent.  Long double has a 64 bit mantissa on Intel, which means that we would start to run into trouble at the very very end of our range - barely acceptable. */
typedef struct {
    long double location;
    long double length;
} HFFPRange;
