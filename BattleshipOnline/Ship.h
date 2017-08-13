#pragma once
#include <vector>
#include <iostream>

using namespace std;

class Ship {
private:
	int length;
	bool** positions;
public:
	Ship(int length, bool** positions) : length(length) {
		this->positions = new bool*[length];
		for (int i = 0; i < length; ++i) {
			this->positions[i] = positions[i];
		}
	}
	~Ship() {
		delete[] this->positions;
	}
	void Hit() {

	}
#pragma region Getters
	int GetLength() {
		return this->length;
	}
	bool* GetShipPartsAt(int index) const {
		return this->positions[index];
	}
	int GetCountAlive() {
		int alive = 0;
		for (int i = 0; i < this->length; ++i) {
			alive += (int)this->positions[i];
		}
	}
	int GetCountDestroyed() {
		int destroyed = this->length;
		for (int i = this->length; i > 0; --i) {
			destroyed -= (int)this->positions[i];
		}
	}
#pragma endregion
};

