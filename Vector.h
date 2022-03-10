#pragma once
class Vector
{
	float* vec;      //{1.7f, 2.2f, ...}
	int size;
	int state;   // 0 - нема помилок, 1 - вихід за межі, 2 - не вистачає пам'яті

public:
	int getSize() const { return size; }
	int getState() const { return state; }
	float getVecElem(int index);

	void setSize(int size);
	void setState(int state);
	void setVecElem(int index, float value);
	
	void Init();
	void Init(int size);
	void Init(int size, float value);
	void Display() const;
	void Read();
	float max()const;
	float min() const;
	void SortHight() ;
	void SortLow();
	bool check_memory() { return false; }  //0
	void Free();
};

