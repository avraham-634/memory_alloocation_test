#include <iostream>
#include <array>
class IntAllocatorBase {
	public:
		int* allocate(int size){
		    return new int[size];
		    //or return (int*)malloc(size*sizeof(int));
		}
		
		void deallocate(int* ptr, int size){
		    for (size_t i = 0; i<size; i++){
		        delete (ptr+i);
		    }
		    // or delete [] ptr;
		    ptr = NULL;
		}
	private:
		std::array<int,100> m_buffer;

	};