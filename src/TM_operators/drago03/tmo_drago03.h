/**
 * @brief Frederic Drago logmapping operator
 * 
 * This file is a part of Qtpfsgui package, based on pfstmo.
 * ---------------------------------------------------------------------- 
 * Copyright (C) 2003,2004 Grzegorz Krawczyk
 * 
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 * ---------------------------------------------------------------------- 
 * 
 * @author Grzegorz Krawczyk, <krawczyk@mpi-sb.mpg.de>
 *
 * $Id: tmo_drago03.h,v 1.1 2004/09/22 10:00:23 krawczyk Exp $
 */

#ifndef _tmo_drago03_h_
#define _tmo_drago03_h_

#include "../libpfs/array2d.h"
#include "../libpfs/pfs.h"

/**
 * @brief Frederic Drago Logmapping Algorithm
 *
 * Implementation obtained from source code provided
 * by Frederic Drago on 16 May 2003.
 *
 * @param Y [in] image luminance values
 * @param L [out] tone mapped values
 * @param maxLum maximum luminance in the image
 * @param avLum logarithmic average of luminance in the image
 * @param bias bias parameter of tone mapping algorithm (eg 0.85)
 */
void tmo_drago03(pfs::Array2D* Y, pfs::Array2D* L, float maxLum, float avLum, float bias);

pfs::Frame* pfstmo_drago03(pfs::Frame *inputpfsframe, float _biasValue);
#endif