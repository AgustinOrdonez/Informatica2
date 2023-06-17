#include "classDeparture.hpp"

int main(void) {

    String destinyTo_SND("Florida");
    String destinyTo_TRD("Chicago");
    Hour timeTo_SND;
    Hour timeTo_TRD(timeTo_SND);
    Departure departure_FST;
    Departure departure_SND(destinyTo_SND, 3, timeTo_SND);
    Departure departure_TRD(destinyTo_TRD, timeTo_TRD);

    return EXIT_SUCCESS;
}
