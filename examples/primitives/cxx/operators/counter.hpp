#ifndef counter_h
#define counter_h

namespace iegen::example {
// [example]
/**
 * An example for with overloaded methods.
 * __API__
 * action: gen_class
 * package: operators
 */
class Counter {
public:
    /**
     * Counter constructor.
     * __API__
     * action: gen_constructor
     * throws: no_throw
     */
	Counter(int count) : _count(count) {}

	Counter(const Counter& c) {
	    _count = c.count();
	}

    /**
     * Getter for count.
     * __API__
     * action: gen_getter
     * throws: no_throw
     */
	int count() const {
	    return _count;
	}

    /**
     * Plus operator
     * __API__
     * action: gen_method
     * throws: no_throw
     */
    Counter operator+(const Counter& counter) {
        return Counter(_count + counter.count());
    }

    /**
     * Comparison operator for kotlin
     * __API__
     * kotlin.action: gen_method
     * kotlin.is_operator: True
     * kotlin.name: compareTo
     * throws: no_throw
     */
    int compareTo(const Counter& counter) {
        if (_count > counter.count()) return 1;
        else if (_count < counter.count()) return -1;
        else return 0;
    }

    /**
     * __API__
     * python.action: gen_method
     * swift.action: gen_method
     * throws: no_throw
     */
    bool operator>(const Counter& counter) {
        return _count > counter.count();
    }

    /**
     * __API__
     * python.action: gen_method
     * swift.action: gen_method
     * throws: no_throw
     */
    Counter& operator +=(const Counter& counter) {
        this->_count += counter.count();
        return *this;
    }
private:
	int _count;
};
// [example]
}
#endif