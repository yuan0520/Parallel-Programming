#ifndef _KMEANS_H_
#define _KMEANS_H_

#include <stdint.h>

// K-Means point holding a single image channel
struct Point {
	uint8_t x;   // R
	uint8_t y;   // G
	uint8_t z;   // B
	int cluster; // the cluster id
};

// K-Means cluster centeral points
struct Cluster {
	uint8_t x;   // R
	uint8_t y;   // G
	uint8_t z;   // B
	size_t size; // the number of points in the cluster
	int* points; // the point ids in the cluster
};

#endif // _KMEANS_H_
