/*
 * This file is a part of Luminance HDR package.
 * ----------------------------------------------------------------------
 * Copyright (C) 2003,2004 Rafal Mantiuk and Grzegorz Krawczyk
 * Copyright (C) 2006,2007 Giuseppe Rota
 * Copyright (C) 2013 Davide Anastasia
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
 */

//! \brief EXR File Writer
//! \author Rafal Mantiuk <mantiuk@mpi-sb.mpg.de>
//! \author Giuseppe Rota  <grota@users.sourceforge.net>
//! \author Davide Anastasia <davideanastasia@users.sourceforge.net>
//! Adaptation for Luminance HDR and LibHDR

#ifndef PFS_IO_EXRWRITER_H
#define PFS_IO_EXRWRITER_H

#include <Libpfs/io/framewriter.h>

namespace pfs {
namespace io {

class EXRWriter : public FrameWriter {
public:
    EXRWriter(const std::string& filename);

    bool write(const Frame &frame, const Params &params);
};

}   // pfs
}   // io

#endif //  PFS_IO_EXRWRITER_H

