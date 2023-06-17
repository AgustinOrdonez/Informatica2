#include "classPlane.hpp"

uint16_t Plane::m_quantity = 0;

Plane::Plane() {
    this->m_tuition = "XB218";
    this->m_company = "LATAM";
    this->m_id = m_quantity;
    m_quantity++;
}

Plane::Plane(const String tuition, const String company) :
    m_tuition{tuition},
    m_company{company} { 
        this->m_id = m_quantity;
        m_quantity++;
}

Plane::Plane(const Plane& original) :
    m_tuition{original.m_tuition},
    m_company{original.m_company} { 
        this->m_id = m_quantity;
        m_quantity++;
}

Plane::~Plane() {
    m_quantity--;
}

void Plane::setTuition(const String tuition) {
    this->m_tuition = tuition;
}

void Plane::setCompany(const String company) {
    this->m_company = company;
}

ostream& operator<<(ostream& output, const Plane& plane) {
    output << "Plane #" << plane.m_id << " ~ " << plane.m_tuition << endl
           << "Company: " << plane.m_company << endl;
    return output;
}
