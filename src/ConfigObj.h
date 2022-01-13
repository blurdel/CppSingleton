#ifndef CONFIGOBJ_H_
#define CONFIGOBJ_H_


class ConfigObj {
public:
	int getValue() { return value; }
	void setValue(int i) { value = i; }

	static ConfigObj* getInstance() {
		if (instance == nullptr) {
			instance = new ConfigObj();
		}
		return instance;
	}

	ConfigObj(const ConfigObj&) = delete;
	ConfigObj& operator=(const ConfigObj&) = delete;

private:
	int value;
	static ConfigObj *instance;

	ConfigObj() : value(0) {}
};


#endif
