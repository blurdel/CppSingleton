#ifndef S_H_
#define S_H_


class S {
public:
	int getValue() { return value; }
	void setValue(int i) { value = i; }

	static S& getInstance() {
		static S instance; // Guaranteed to be destroyed, instantiated on first use
		return instance;
	}

	S(const S&) = delete;
	S& operator=(const S&) = delete;

private:
	int value;

	S() : value(0) {}

};


#endif
