#include <iostream>

struct Date
{
    int day,
        month,
        year;
};

class Person
{

private:
    std::string surname;
    std::string name;
    Date date;
    char gender;
    const Date today_date = { 12, 12, 2024 };

public:
    // constructor
    Person();
    // set
    void setSurname();
    void setName();
    void setDay();
    void setDay(int d);
    void setMonth();
    void setYear();
    void setGender();
    // func
    bool CorrectSurname();
    bool CorrectName();
    bool CorrectDay();
    bool CorrectMonth();
    bool CorrectYear();
    bool CorrectGender();
    int Age();
    // get
    std::string getSurname();
    std::string getName();
    Date getDate();
    char getGender();
    // destructor
    ~Person() {}
    // operator
    bool operator>(Person f)
    {
        int age = today_date.year - date.year;
        if (date.month > today_date.month)
        {
            age = age + 1;
        }
        else if (date.month == today_date.month && date.day >= today_date.day)
        {
            age = age + 1;
        }
        int age_f = today_date.year - f.date.year;
        if (f.date.month > today_date.month)
        {
            age_f = age_f + 1;
        }
        else if (f.date.month == today_date.month && f.date.day >= today_date.day)
        {
            age_f = age_f + 1;
        }
        if (age > age_f)
        {
            return true;
        }
        return false;
    }
    bool operator<(Person f)
    {
        int age = today_date.year - date.year;
        if (date.month > today_date.month)
        {
            age = age + 1;
        }
        else if (date.month == today_date.month && date.day >= today_date.day)
        {
            age = age + 1;
        }
        int age_f = today_date.year - f.date.year;
        if (f.date.month > today_date.month)
        {
            age_f = age_f + 1;
        }
        else if (f.date.month == today_date.month && f.date.day >= today_date.day)
        {
            age_f = age_f + 1;
        }
        if (age < age_f)
        {
            return true;
        }
        return false;
    }
    void operator<<(Person f)
    {
        std::cout << surname << " " << name[0] << " " << Age() << " " << gender << "\n";
    }
    void operator>>(Person f)
    {
        std::cout << "Введите через пробел фамилию, имя:\n";
        std::cin >> surname >> name;
        setSurname();
        setName();
        std::cout << "Введите дату рождения:\nВведите день:\n";
        setDay();
        std::cout << "Введите месяц:\n";
        setMonth();
        std::cout << "Введите год:\n";
        setYear();
        std::cout << "Введите пол:\n";
        setGender();
    }
    void operator=(Person s)
    {
        surname = s.getSurname();
        name = s.getName();
        date = s.getDate();
        gender = s.getGender();
    }
};

class WorkerWithFixedSalary : public Person
{
private:
    double salary;
    double percentage;
public:
    WorkerWithFixedSalary() : Person::Person()
    {
        std::cout << "Введите оклад:\n";
        setSalary();
        std::cout << "Введите процент премии:\n";
        setPercentage();
    }
    void setSalary();
    void setPercentage();
    double getSalary();
    double getPercentage();
    void operator<<(WorkerWithFixedSalary f)
    {
        std::cout << getSurname() << " " << getName()[0] << " " << Age() << " " << getGender()
            << "\n" << salary << 'р' << ' ' << percentage << '%'
            << "\n" << wage() << 'р' << ' ' << tax() << "р " << cash() << "р\n";
    }
    //functions
    double wage();
    double tax();
    double cash();
};

void WorkerWithFixedSalary::setSalary()
{
    std::cin >> salary;
}

void WorkerWithFixedSalary::setPercentage()
{
    std::cin >> percentage;
}

double WorkerWithFixedSalary::getSalary()
{
    return salary;
}

double WorkerWithFixedSalary::getPercentage()
{
    return percentage;
}

double WorkerWithFixedSalary::wage()
{
    return salary + salary * (percentage / 100.0);
}

double WorkerWithFixedSalary::tax()
{
    return salary * (13.0 / 100.0);
}

double WorkerWithFixedSalary::cash()
{
    return wage() - tax();
}

Person::Person()
{
    std::cout << "Введите через пробел фамилию, имя:\n";
    std::cin >> surname >> name;
    setSurname();
    setName();
    std::cout << "Введите дату рождения\nВведите день:\n";
    setDay();
    std::cout << "Введите месяц:\n";
    setMonth();
    std::cout << "Введите год:\n";
    setYear();
    std::cout << "Введите пол:\n";
    setGender();
}

void Person::setSurname()
{
    while (!CorrectSurname())
    {
        std::cout << "Введите фамилию, состоящую только из символов латинского алфавита\n";
        std::cin >> surname;
        CorrectSurname();
    }
}

void Person::setName()
{
    while (!CorrectName())
    {
        std::cout << "Введите имя, состоящее только из символов латинского алфавита\n";
        std::cin >> name;
        CorrectName();
    }
}

void Person::setDay()
{
    std::cin >> date.day;
    while (!CorrectDay())
    {
        if (std::cin.fail())
        {
            std::cin.clear();
            std::cin.ignore(32767, '\n');
        }
        std::cout << "Введите день не превышающий 31, состоящий только из цифр:\n";
        std::cin >> date.day;
        CorrectDay();
    }
}

void Person::setDay(int d)
{
    date.day = d;
}

void Person::setMonth()
{
    std::cin >> date.month;
    while (!CorrectMonth())
    {
        if (std::cin.fail())
        {
            std::cin.clear();
            std::cin.ignore(32767, '\n');
        }
        std::cout << "Введите месяц не превышающий 12, состоящий только из цифр:\n";
        std::cin >> date.month;
        CorrectMonth();
    }
}

void Person::setYear()
{
    std::cin >> date.year;
    while (!CorrectYear())
    {
        if (std::cin.fail())
        {
            std::cin.clear();
            std::cin.ignore(32767, '\n');
        }
        std::cout << "Введите год, состоящий только из цифр:\n";
        std::cin >> date.year;
        CorrectYear();
    }
}

void Person::setGender()
{
    std::cin >> gender;
    while (!CorrectGender())
    {
        if (std::cin.fail())
        {
            std::cin.clear();
            std::cin.ignore(32767, '\n');
        }
        std::cout << "Введите пол, состоящий только из символов \'m\' или \'f\':\n";
        std::cin >> gender;
        CorrectGender();
    }
}

bool Person::CorrectSurname()
{
    bool flag = true;
    for (size_t i = 0; i != surname.length(); ++i)
    {
        char c = surname[i];
        if (!isalpha(c))
        {
            flag = false;
            break;
        }
    }
    return flag;
}

bool Person::CorrectName()
{
    bool flag = true;
    for (size_t i = 0; i != name.length(); ++i)
    {
        char c = name[i];
        if (!isalpha(c))
        {
            flag = false;
            break;
        }
    }
    return flag;
}

bool Person::CorrectDay()
{
    bool flag = true;
    if (!date.day || date.day > 31)
    {
        flag = false;
    }
    return flag;
}

bool Person::CorrectMonth()
{
    bool flag = true;
    if (!date.month || date.month > 12)
    {
        flag = false;
    }
    return flag;
}

bool Person::CorrectYear()
{
    bool flag = true;
    if (!date.year)
    {
        flag = false;
    }
    return flag;
}

bool Person::CorrectGender()
{
    bool flag = false;
    if (gender == 'f' || gender == 'm')
    {
        flag = true;
    }
    return flag;
}

int Person::Age()
{
    int age = today_date.year - date.year - 1;
    if (date.month < today_date.month)
    {
        age = age + 1;
    }
    else if (date.month == today_date.month && date.day <= today_date.day)
    {
        age = age + 1;
    }
    return age;
}

void Sort(Person* array, size_t k)
{

    for (size_t i = 0; i != k; ++i)
    {
        int age = array[i].Age();
        int mx = 0;
        int jj = 0;
        for (size_t j = i + 1; j != k; ++j)
        {
            int age1 = array[j].Age();
            if (age1 > mx)
            {
                mx = age1;
                jj = j;
            }
        }
        if (mx > age)
        {
            Person f = array[i];
            array[i] = array[jj];
            array[jj] = f;
        }
    }
}

std::string Person::getSurname()
{
    return surname;
}

std::string Person::getName()
{
    return name;
}

char Person::getGender()
{
    return gender;
}

Date Person::getDate()
{
    return date;
}

int main()
{
    setlocale(LC_ALL, "Rus");
    WorkerWithFixedSalary almaz;
    almaz << almaz;
    return 0;
}