#include<iostream>
#include<string>

using namespace std;

template<class T>
void swap1(T &a,T &b){
	T temp;
	temp = a;
	a = b;
	b = temp;
}

class complex{
public:
	double real;
	double image;
	double aa[10] = {};
	complex(){};
	complex(double real,double image):real(real),image(image){};
	complex add(const complex& other){
		return complex(this->real+ other.real,this->image + other.image);
	}
	double operator[](int i){
		return aa[i];
	}
};

ostream& operator<<(ostream& cout,const complex & other){
	cout<< other.real << " "<<other.image;
	return cout;
}
// template<class T>
// class MyVector{
// public:
// 	typedef value;
// 	typedef* iterator;
// 	typedef& refernce;
// 	MyVector(int len):m_len(len),m_Data(nullptr),begin(nullptr),pos(0){
// 		if(len > 0){
// 			m_Data = new value[len];
// 		}
// }

// 	~MyVector(){
// 		delete []m_Data;
// 	}

//  void push_back(const value& v){
// 	*(start+pos) = v;
// 	pos++;
//  }

//  value pop_back(){
// 	pos--;
// 	return *(start + pos);
//  }
// 	int size(){
// 		return this->m_len;
// 	}
// 	iterator begin(){
// 		return this->start;
// 	}
// 	iterator end(){
// 		return this->(start + pos);
// 	}
// 	value operator[](int n){
// 		if(n > && n < pos){
// 			return *(start + n);
// 		}
// 	}
// protected:
// 	iterator m_Data;
// 	iterator begin;
// 	int m_len;
// 	int pos;

// };

template<class T>
class MyVector{
	public:
	typedef T value;
	typedef T* iterator;
	typedef T& reference;

	MyVector(int len):m_len(len),m_data(nullptr),begin(nullptr),pos(0){
		if(len > 0){
			m_data = new value[len];
		}else{
			cout<< "123" <<endl;
		}
	}
	~MyVector(){
		delete []m_data;
	}
	iterator begin(){
		return this->start;
	}
	iterator end(){
		return this->(start + pos);
	}

	void push_back(const value& t){
		*(start + pos) = t;
		pos++;
	}

	value& operator[](const value & t){
		return *(start + t) ;
	}
	inline value pop_back(){
		--pos;
		return *(start + pos);
	}
	int size(){
		return this->m_len;
	}

	

protected:
	iterator m_data;
	iterator start;
	int pos;
	int m_len;

};

int main(){
	int a = 10;
	cout<< a << endl;
	complex p(3,4);
	cout<< p << endl;
	
	return 0;

}