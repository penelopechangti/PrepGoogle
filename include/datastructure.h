#ifndef PREP_GOOGLE_DATASTRUCTURE_H
#define PREP_GOOGLE_DATASTRUCTURE_H

const int MAX_NUM_ELEMENTS = 100;

class DataStructure
{
public:
    DataStructure();
	virtual void write() const;
    virtual bool insert(int value);
    virtual void sort() = 0;
    virtual bool suppress(int value);
    virtual int find(int value);
protected:
    int table_[MAX_NUM_ELEMENTS];
    int num_elements_;
};

#endif // PREP_GOOGLE_DATASTRUCTURE_H
