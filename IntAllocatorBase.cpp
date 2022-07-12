class IntAllocatorBase {
	public:
		virtual int* allocate(size_t size) = 0;
		
		virtual void deallocate(int* ptr, size_t size) = 0;
	private:
		std::array<int, 100> m_buffer;

        void insert(int val){
            // allocate new data memory with size +1
            ptr = allocate(m_buffer.size+1);
            //copy the data of the old array to the new array
            for (int i = 0; i < m_buffer.size; i++):
                ptr[i] = m_buffer[i];
            //insert the new elem
            ptr[m_buffer.size] = val;
            //deallocate the old array
            deallocate(m_buffer, m_buffer.size);
            //assign the new array data to the m_buffer
            m_buffer = ptr;
        }

        void remove(int val){
            // allocate new data memory with size -1
            ptr = allocate(m_buffer.size-1);
            for (int i,j = 0; i < m_buffer.size;i++):{
                //copy the data of the old array to the new array
                //only the elem to remove
                if (m_buffer[i] != val):
                    //while the curent elem different of val,
                    //then copy to the new arr and up 'j' index
                    ptr[j] = m_buffer[i];
                    j+=1
                //else don't copy and don't up j; but up i
            }
            //deallocate the old array
            deallocate(m_buffer, m_buffer.size);
            //assign the new array data to the m_buffer
            m_buffer = ptr;
        }

        void empty(){
            deallocate(m_buffer, m_buffer.size);
            m_buffer = allocate(0);
        }
	};