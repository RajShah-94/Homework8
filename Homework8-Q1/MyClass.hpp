/*
 * MyClass.hpp
 *
 *  Created on: 21 Mar 2014
 *      Author: rajru_000
 */

#ifndef MYCLASS_HPP_
#define MYCLASS_HPP_

class MyClass {
	MyClass(int n) : size(size) { data = new double[size];}
	~MyClass() {delete[] data;}
	MyClass(const MyClass & c) {
		size = c.size;
		data = new double[size];
		for(int i =0;i<size;++i) {
			data[i]=c.data[i];
		}
	}

	void Resize(int n) {
		delete data;
		size = n;
		data = new double[n];
	}

	void Fill(const std::vector<double> & vec) {
		int n = vec.size();
		if(size<n) {
			Reallocate(n);
		}
		for(int i =0;i<n;++i) {
			data[i] = vec[i];
		}
	}

private:
	double * data;
	int size;
};



#endif /* MYCLASS_HPP_ */
