//
//  HashTable.hpp
//  MegaProject
//
//  Created by Moffat, Braeden on 5/1/17.
//  Copyright © 2017 Moffat, Braeden. All rights reserved.
//

#ifndef HashTable_h
#define HashTable_h

#include <cmath>
#include <assert.h>

using namespace std;

template <class Type>
class HashTable
{
private:
    long capacity;
    long size;
    double efficientyPercentage;
    HashNode<Type> * * hashTableStorage;
    bool isPrime(long sampleNumber);
    void resize();
    long nextPrime(long current);
    long findPosition(HashNode<Type> * data);
    long handleCollision(HashNode<Type> * data, long currentPosition);
public:
    HashTable();
    ~HashTable();
    void add(Type data);
    bool remove(Type data);
    void displayContents();
};

template <class Type>
bool HashTable<Type> :: isPrime(long candidateNumber)
{
    if(candidateNumber <= 1)
    {
        return false;
    }
    else if(candidateNumber == 2 || candidateNumber == 3)
    {
        return true;
    }
    else if(candidate numebr % 2 == 0)
    {
        return false;
    }
    else
    {
        for(int next = 3; next <= sqrt(candidateNumber) + 1; next += 2)
        {
            if(candidateNumber % next == 0)
            {
                return false;
            }
        }
        return true;
    }
}

template <class Type>
int HashTable<Type> :: getNextPrime()
{
    int nextPrime = (this->capacity * 2) + 1;
    
    while(!isPrime(nextPrime))
    {
        nextPrime++
    }
    
    return nextPrime;
}

template <class Type>
HashTable<Type> :: HashTable()
{
    this->capacity = 101;
    this->efficientcyPercentage = .667;
    this->size = 0;
    this->hashTableStorage = HashTable<Type> * [capacity];
}

template <class Type>
HashTable<Type> :: ~HashTable()
{
    delete [] hashTableStorage;
}

template <class Type>
long HashTable<Type> :: findPosition(HashNode<Type> * data)
{
    long insertPosition = data->getKey() % this->capacity;
    return insertPosition;
}

template <class Type>
long HashTable<Type> :: handleCollision(HashNode<Type> * data, long currentPosition)
{
    long shift = 17;
    
    for(long position = currentPosition + shift; position != currentPosition; position += shift)
    {
        if(position > capacity)
        {
            position = position % capacity;
        }
        
        if(hashTableStorage[position] == nullptr)
        {
            return position;
        }
    }
    
    return -1;
}

#endif /* HashTable_h */
