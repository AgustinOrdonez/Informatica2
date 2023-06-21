#ifndef _CLASS_PLANE_HPP_
#define _CLASS_PLANE_HPP_

#include "classString.hpp"

class Plane {
    private:
        String m_tuition; // Example: XB218
        String m_company; // Exmple: Austral or LATAM
        uint16_t m_id;
        static uint16_t m_quantity;
    public:
        Plane();
        Plane(const String tuition, const String company);
        Plane(const Plane& original);
        ~Plane();

        void setTuition(const String tuition);
        void setCompany(const String company); 
        String getTuition() const { return this->m_tuition; }
        String getCompany() const { return this->m_company; }
        uint16_t getIdentification() const { return this->m_id; }
        uint16_t getQuantity() const { return m_quantity; }
        Plane getPlane() const { return (*this); }

        friend ostream& operator<<(ostream& output, const Plane& plane);
};

#endif // _CLASS_PLANE_HPP_