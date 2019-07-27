/****************************************************************************//*
 * Copyright (C) 2019 Marek M. Cel
 *
 * Permission is hereby granted, free of charge, to any person obtaining
 * a copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom
 * the Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included
 * in all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
 * OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL
 * THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS
 * IN THE SOFTWARE.
 ******************************************************************************/
#ifndef CGI_MERCATOR_H
#define CGI_MERCATOR_H

////////////////////////////////////////////////////////////////////////////////

namespace cgi
{

/**
 * @brief Mercator coordinates computation class.
 */
class Mercator
{
public:

    static const double maxX;   ///< [m] maximum Mercator x-coordinate for longitude 180 deg
    static const double maxY;   ///< [m] maximum Mercator y-coordinate for latitude 85 deg

    /**
     * @brief Computes geographic latitude.
     * @param y [m] Mercator y-coordinate
     * @return geographic latitude [rad]
     */
    static double getLat( double y );

    /**
     * @brief Computes geographic longitude.
     * @param x [m] Mercator x-coordinate
     * @return geographic longitude [rad]
     */
    static double getLon( double x );

    /**
     * @brief Computes Mercator x-coordinate.
     * @param lon [rad] geographic longitude
     * @return Mercator x-coordinate [m]
     */
    static double getX( double lon );

    /**
     * @brief Computes Mercator y-coordinate.
     * @param lat [rad] geographic latitude
     * @return Mercator y-coordinate [m]
     */
    static double getY( double lat );
};

} // end of cgi namespace

////////////////////////////////////////////////////////////////////////////////

#endif // CGI_MERCATOR_H