#include<iostream>

template< typename T>
class vector{
private:
    T* data{};
    size_t size{};
    T* last{};
    size_t default_size = 8;
public:
    vector(): size{default_size} {
        data = (T*)malloc(sizeof(T)*default_size);
        last = data;
    }
    vector(size_t s): size(s){
        free(data);
        data = (T*)malloc(size * sizeof(T));
        last = data + size;
        for(int i = 0; i < size; ++i){
            data[i] = T{};
        }
    }
    vector(size_t s, T value): size(s){
        free(data);
        data = (T*)malloc(size * sizeof(T));
        last = data + size;
        for(size_t i = 0; i < size; ++i){
            data[i] = value;
        }
    }
    ~vector(){ free(data); data = nullptr ; last = nullptr; size =0;}

    T& operator[](int index) const{
        if(index<0){
            throw std::out_of_range("Index cannot be negative");
        }
        size_t index_s = static_cast<size_t>(index);
        if(index_s >= size){
            throw std::out_of_range("Index out of range");
        }
        return data[index_s];
    }
    void push_back(const T& value){
        if(last == data + size){
            int newSize = size * 2;
            T* newData = (T*)malloc(newSize * sizeof(T));
            for(int i = 0; i < size; ++i){
                newData[i] = data[i];
            }
            free(data);
            data = newData;
            size = newSize;
        }
        *(last++) = value;
    }
    void print() const {
        for (size_t i = 0; i < static_cast<size_t>(last - data); ++i) {
            std::cout << data[i] << " ";
        }
        std::cout << std::endl;
    }
    
};



int main(){

    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.print();

    return 0;
}
