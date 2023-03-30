#pragma once
#include "Splaines.h"
double S(double x, double xi, double a, double b, double c, double d) {
	return d * (x - xi) * (x - xi) * (x - xi) * 1. / 6 + c * (x - xi) * (x - xi) * 1. / 2 + b * (x - xi) + a;
}
double S1(double x, double xi, double a, double b, double c, double d) {
	return d * (x - xi) * (x - xi) * 1. / 2 + c * (x - xi) + b;
}
double S2(double x, double xi, double a, double b, double c, double d) {
	return d * (x - xi) + c;
}
double** GrS(int gradation, int n, const func& q, double as, double bs, double m1, double m2) {
	double* a = f(n, q, as, bs);
	double* g1;
	double* b1 = b(n, q, as, bs, m1, m2);
	double* c1 = c(n, q, as, bs, m1, m2);
	double* d1 = d(n, q, as, bs, m1, m2);
	g1 = new double[n + 1];
	double* g2;
	g2 = new double[n * gradation + 1];
	double* s;
	s = new double[n * gradation + 1];
	double* s1;
	s1 = new double[n * gradation + 1];
	double* s2;
	s2 = new double[n * gradation + 1];
	double** SS = new double* [3];
	for (int i = 0; i < 3; i++)
		SS[i] = new double[n * gradation + 1];

	for (int i = 0; i < n + 1; i++) {
		g1[i] = as + (bs - as) * 1. * i / n;
	}
	for (int j = 0; j < n * gradation + 1; j++) {
		g2[j] = as + (bs - as) * 1. * j / (n * gradation);
		int k;
		if (j * 1. / gradation != 1)
			k = j / gradation + 1;
		else
			k = j / gradation;
		s[j] = S(g2[j], g1[k], a[k], b1[k], c1[k], d1[k]);
		double l = s[j];
		s1[j] = S1(g2[j], g1[k], a[k], b1[k], c1[k], d1[k]);
		s2[j] = S2(g2[j], g1[k], a[k], b1[k], c1[k], d1[k]);
	}

	for (int j = 0; j < n * gradation + 1; j++) {
		SS[0][j] = s[j];
		SS[1][j] = s1[j];
		SS[2][j] = s2[j];
	}

	return SS;
	delete[] g1;
	delete[] g2;
	delete[] s;
}