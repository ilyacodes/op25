/*
 * Copyright 2023 Free Software Foundation, Inc.
 *
 * This file is part of GNU Radio
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 *
 */

/***********************************************************************************/
/* This file is automatically generated using bindtool and can be manually
 * edited  */
/* The following lines can be configured to regenerate this file during cmake */
/* If manual edits are made, the following tags should be modified accordingly.
 */
/* BINDTOOL_GEN_AUTOMATIC(0) */
/* BINDTOOL_USE_PYGCCXML(0) */
/* BINDTOOL_HEADER_FILE(frame_assembler.h) */
/* BINDTOOL_HEADER_FILE_HASH(039ddef878982559df6298d2cbbe8747) */
/***********************************************************************************/

#include <pybind11/complex.h>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

#include <gnuradio/op25_repeater/frame_assembler.h>
// pydoc.h is automatically generated in the build directory
#include <frame_assembler_pydoc.h>

void bind_frame_assembler(py::module &m) {

  using frame_assembler = ::gr::op25_repeater::frame_assembler;

  py::class_<frame_assembler, gr::block, gr::basic_block,
             std::shared_ptr<frame_assembler>>(m, "frame_assembler",
                                               D(frame_assembler))

      .def(py::init(&frame_assembler::make), py::arg("options"),
           py::arg("debug"), py::arg("msgq_id"), py::arg("queue"),
           D(frame_assembler, make))

      .def("set_debug", &frame_assembler::set_debug, py::arg("debug"),
           D(frame_assembler, set_debug))

      .def("control", &frame_assembler::control, py::arg("args"),
           D(frame_assembler, control))

      ;
}
