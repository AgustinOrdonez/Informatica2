#include "classHour.hpp"

static bool checkTime(const char *strTime);

Hour::Hour() {
    this->m_hour = 0;
    this->m_minutes = 0;
}

Hour::Hour(const Hour& original) :
    m_hour{original.m_hour},
    m_minutes{original.m_minutes} { }

Hour::~Hour() { }

void Hour::setTime() {
    cin >> *this;
}

// Pre-increase overload operator
Hour& Hour::operator++() {
    if (this->m_minutes == 59) {
        this->m_minutes = 0;
        this->m_hour++;
    } else this->m_minutes++;
    return (*this);
}

// Pos-increase overload operator
Hour Hour::operator++(int foo) {
    Hour aux(*this);
    if (this->m_minutes == 59) {
        this->m_minutes = 0;
        if (this->m_hour == 23) this->m_hour = 0;
        else this->m_hour++;
    } else this->m_minutes++;
    return aux;
}

static bool checkTime(const char *strTime) {
    if (strlen(strTime) + 1 != MAX_TIME_LENGTH) return EXIT_FAILURE;
    if (!((strTime[0] >= '0' && strTime[0] <= '2') &&
        (strTime[1] >= '0' && strTime[1] <= '9'))) return EXIT_FAILURE;
    if (strTime[2] != ':') return EXIT_FAILURE;
    if (!((strTime[3] >= '0' && strTime[3] <= '5') &&
        (strTime[4] >= '0' && strTime[4] <= '9'))) return EXIT_FAILURE;
    if (strTime[0] == '2' && (strTime[1] >= '4' && strTime[1] <= '9')) return EXIT_FAILURE;
    return EXIT_SUCCESS;
}

bool splitTime(const char *strTime, Hour& time) {
    char *token, storage[MAX_TIME_LENGTH];
    strncpy(storage, strTime, MAX_TIME_LENGTH);
	token = strtok(storage, ":");
	if (token != NULL) time.m_hour = atoi(token);
    else return EXIT_FAILURE;
	token = strtok(NULL, ":");
	if (token != NULL) time.m_minutes = atoi(token);
    else return EXIT_FAILURE;
    return EXIT_SUCCESS;
}

ostream& operator<<(ostream& output, const Hour& time) {
    char strBuffer[MAX_TIME_LENGTH];
    sprintf(strBuffer, "%02hu:%02hu", time.m_hour, time.m_minutes);
    output << "Time: " << strBuffer;
    return output;
}

istream& operator>>(istream& input, Hour& time) {
    char strTime[MAX_TIME_LENGTH];
    cout << "Insert time [hh:mm]: ";
    input >> strTime;
    input.ignore(); // Ignore any additional characters after reading the string
    input.clear(); // Restore the state of the input
    if (checkTime(strTime)) {
        cout << "ERROR: Time invalid" << endl;
        operator>>(input, time);
    }
    if (splitTime(strTime, time)) {
        cout << "ERROR: There was a problem saving time" << endl;
        operator>>(input, time);
    }
    return input;
}