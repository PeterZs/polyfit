#pragma once

// -----------
#define POLYVEC_REGULARIZE 1
#define POLYVEC_INCLUDE_CONSTANT_TANGENTS_TO_FIT_ATTEMPTS 1

// -----------
#define PV_MIDPOINT_EDGE_LENGTH 2

// -----------
#define PV_FLAT_ANGLE_MIN PF_RAD(175)

// -----------
#define PV_REGULARITY_CONTINUATION_MIN_INTERSECT_T .95
#define PV_REGULARITY_CONTINUATION_MIN_SEPARATION 2

#define PV_REGULARITY_CONTINUATION_NO_DEVIATION_ANGLE PF_RAD(18)
#define PV_REGULARITY_CONTINUATION_MAX_NEIGHBORHOOD 2
#define PV_REGULARITY_CONTINUATION_NEIGHBORHOOD_ENTRIES (1 + 2 * PV_REGULARITY_CONTINUATION_MAX_NEIGHBORHOOD)

// -----------
#define PV_REGULARITY_PARALLEL_MIN_SEPARATION 2 
#define PV_REGULARITY_PARALLEL_MAX_DEVIATION_ANGLE PF_RAD(18)
#define PV_REGULARITY_MAX_ALIGNMENT_DISTANCE 1.01

// -----------
#define PV_MEASURE_HAUSDORFF_SAMPLING_RATE .025