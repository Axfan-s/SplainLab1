#pragma once
#include <iostream>
#include <functional>
#include "math.h"
#include <cmath>
using func = std::function<double(double)>;
using namespace std;
double functiona(double x) {
	if ((x >= -1) && (x <= 0)) {
		return x * x * x + 3 * x * x;
	}
	if ((x > 0) && (x <= 1)) {
		return -x * x * x + 3 * x * x;
	}
}
double functiona1(double x) {
	if ((x >= -1) && (x <= 0)) {
		return 3 * x * x + 6 * x;
	}
	if ((x > 0) && (x <= 1)) {
		return -3 * x * x + 6 * x;
	}
}
double functiona2(double x) {
	if ((x >= -1) && (x <= 0)) {
		return 6 * x + 6;
	}
	if ((x > 0) && (x <= 1)) {
		return -6 * x + 6;
	}
}
double functionb(double x) {
	return sin(x) * sin(x) / x;
}
double functionb1(double x) {
	return (x * sin(2 * x) - sin(x) * sin(x)) / (x*x);
}
double functionc(double x) {
	return sin(x) * sin(x) / x+cos(10*x);
}
double functionc1(double x) {
	return (x * sin(2 * x) - sin(x) * sin(x)) / (x * x)-10*sin(10*x);
}
double functiond(double x) {
	return sqrt(1+x*x*x*x);
}
double functiond1(double x) {
	return (2*x*x*x) / sqrt(1 + x * x * x * x);
}
double functione(double x) {
	return sqrt(1 + x * x * x * x)+cos(10 * x);
}
double functione1(double x) {
	
	return 2*x*x*x/sqrt(1 + x * x * x * x) -10*sin(10 * x);
}
double functionf(double x) {
	double y = 1 + x*x;
	return cbrt(y);
}
double functionf1(double x) {
	double y = (1 + x * x)*(1 + x * x);
	return 2*x/(3*cbrt(y));
}
double functiong(double x) {
	double y = 1 + x * x;
	return cbrt(y)+cos(10*x);
}
double functiong1(double x) {
	double y = (1 + x * x) * (1 + x * x);
	return 2 * x / (3 * cbrt(y))-10*sin(10*x);
}


double* f(int n, const func& q, double a, double b) {
	double* f;
	f = new double[n + 1];
	for (int i = 0; i < n + 1; i++) {
		double x = a + (b - a) * i * 1. / n;
		f[i] = q(x);
	}
	return f;
	delete[] f;
}
double* f1(int n, const func& q, double a, double b) {
	double* f;
	f = new double[n + 1];
	for (int i = 0; i < n + 1; i++) {
		double x = a + (b - a) * i * 1. / n;
		f[i] = q(x);
	}
	return f;
	delete[] f;
}
double* f2(int n, const func& q, double a, double b) {
	double* f;
	f = new double[n + 1];
	for (int i = 0; i < n + 1; i++) {
		double x = a + (b - a) * i * 1. / n;
		f[i] = q(x);
	}
	return f;
	delete[] f;
}

double* c(int n, const func& q, double a, double b, double m1, double m2) {
	double* c;
	c = new double[n];
	c[0] = m1;
	c[n] = m2;
	double* A;
	A = new double[n];
	double h = (b - a) * 1. / n;
	for (int i = 1; i < n; i++) {
		A[i] = h;
	}
	double* B;
	B = new double[n];
	for (int i = 1; i < n; i++) {
		B[i] = h;
	}
	double* C;
	C = new double[n];
	for (int i = 1; i < n; i++) {
		C[i] = -4 * h;
	}
	double* g = f(n, q, a, b);
	double* fi;
	fi = new double[n];
	for (int i = 1; i < n; i++) {
		fi[i] = -(6. / h) * (g[i - 1] - 2 * g[i] + g[i + 1]);
	}
	double* alfa;
	alfa = new double[n];
	alfa[1] = 0;
	for (int i = 1; i < n; i++) {
		alfa[i + 1] = B[i] * 1. / (C[i] - A[i] * alfa[i]);
	}
	double* beta;
	beta = new double[n];
	beta[1] = 0;
	for (int i = 1; i < n; i++) {
		beta[i + 1] = (fi[i] + beta[i] * A[i]) * 1. / (C[i] - A[i] * alfa[i]);
	}
	delete[] A;
	delete[] B;
	delete[] C;
	delete[] fi;
	for (int i = n - 1; i >= 0; i--) {
		c[i] = c[i + 1] * alfa[i + 1] + beta[i + 1];
	}

	return c;
	delete[] c;
	delete[] alfa;
	delete[] beta;
}
double* d(int n, const func& q, double a, double b, double m1, double m2) {
	double* c1 = c(n, q, a, b, m1, m2);
	double h = (b - a) * 1. / n;
	double* d;
	d = new double[n];
	for (int i = 1; i < n + 1; i++) {
		d[i] = (c1[i] - c1[i - 1]) * 1. / h;
	}
	return d;
	delete[] d;
}
double* b(int n, const func& q, double a, double b1, double m1, double m2) {
	double* b;
	b = new double[n];
	double* f1 = f(n, q, a, b1);
	double* c1 = c(n, q, a, b1, m1, m2);
	double h = (b1 - a) * 1. / n;
	for (int i = 1; i < n + 1; i++) {
		b[i] = (f1[i] - f1[i - 1]) * 1. / h + c1[i] * h * 1. / 3 + c1[i - 1] * h * 1. / 6;
	}
	return b;
	delete[] b;
}
