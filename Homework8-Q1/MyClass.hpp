/*
 * MyClass.hpp
 *
 *  Created on: 21 Mar 2014
 *      Author: rajru_000
 */

#ifndef MYCLASS_HPP_
#define MYCLASS_HPP_

#include <vector> // needed so that vectors can be used

class MyClass {

public: // the public declaration was missing, it is needed to prevent the constructor and destructor from being set as private
	MyClass(int n) : size(n) { data = new double[size];} // constructor needs to take a value "n" and apply it to the private data member "size" , not make size == size
	~MyClass() {delete[] data;}
	MyClass(const MyClass & c) {
		size = c.size;
		data = new double[size];
		for(int i =0;i<size;++i) {
			data[i]=c.data[i];
		}
	}

	void Resize(int n) {
		delete[] data; // we use delete[] to clear out an array of objects , where as we use delete to clear out a single object
		size = n;
		data = new double[n];
	}

	void Fill(const std::vector<double> & vec) {
		int n = vec.size();
		if(size<n) {
			Resize(n); // no function called Reallocate , Resize was needed
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
