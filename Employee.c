typedef struct Employee {
    char* _firstName;
    char* _lastName;
    float _salary;

    void Employee(char* firstName, char* lastName, float salary);
    char* getFirstName();
    void setFirstName(char* firstName);
    char* getLastName();
    void setLastName(char* lastName);
    float getSalary();
    void setSalary(float salary);
} Employee;

void Employee.Employee(char* firstName, char* lastName, float salary) {
    _firstName = firstName;
    _lastName = lastName;
    _salary = salary;
}

    char* getFirstName() {
	return _firstName;
    }

    void setFirstName(char* firstName) {
	_firstName = firstName;
    }

    char* getLastName() {
	return _lastName;
    }

    void setLastName(char* lastName) {
	_lastName = lastName;
    }

    float getSalary() {
	return _salary;
    }

    void setSalary(float salary) {
	_salary = salary;
    }
int main() {
    return 0;
}
