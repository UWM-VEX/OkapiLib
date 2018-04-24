/**
 * @author Mikhail Semenov
 * @author Benjamin Jurke
 * @author Ryan Benasutti, WPI
 *
 * This code is a modified version of Benjamin Jurke's work in 2015. You can read his blog post
 * here:
 * https://benjaminjurke.com/content/articles/2015/compile-time-numerical-unit-dimension-checking/
 *
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/.
 */
#ifndef _OKAPI_QVOLUME_HPP_
#define _OKAPI_QVOLUME_HPP_

#include "okapi/units/QArea.hpp"
#include "okapi/units/QLength.hpp"
#include "okapi/units/RQuantity.hpp"

QUANTITY_TYPE(0, 3, 0, 0, QVolume)

constexpr QVolume kilometer3 = kilometer2 * kilometer;
constexpr QVolume meter3 = meter2 * meter;
constexpr QVolume decimeter3 = decimeter2 * decimeter;
constexpr QVolume litre = decimeter3;
constexpr QVolume centimeter3 = centimeter2 * centimeter;
constexpr QVolume millimeter3 = millimeter2 * millimeter;
constexpr QVolume inch3 = inch2 * inch;
constexpr QVolume foot3 = foot2 * foot;
constexpr QVolume mile3 = mile2 * mile;

#endif