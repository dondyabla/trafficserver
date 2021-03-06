#
#  Licensed to the Apache Software Foundation (ASF) under one
#  or more contributor license agreements.  See the NOTICE file
#  distributed with this work for additional information
#  regarding copyright ownership.  The ASF licenses this file
#  to you under the Apache License, Version 2.0 (the
#  "License"); you may not use this file except in compliance
#  with the License.  You may obtain a copy of the License at
#
#      http://www.apache.org/licenses/LICENSE-2.0
#
#  Unless required by applicable law or agreed to in writing, software
#  distributed under the License is distributed on an "AS IS" BASIS,
#  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
#  See the License for the specific language governing permissions and
#  limitations under the License.

experimental_webp_transform_WebpTransform_la_CPPFLAGS = $(AM_CPPFLAGS) $(LIBMAGICKCPP_CFLAGS)
experimental_webp_transform_WebpTransform_la_CXXFLAGS = $(AM_CXXFLAGS) -Wno-unused-variable

pkglib_LTLIBRARIES += experimental/webp_transform/WebpTransform.la

experimental_webp_transform_WebpTransform_la_SOURCES = \
  experimental/webp_transform/ImageTransform.cc

experimental_webp_transform_WebpTransform_la_LDFLAGS = \
  $(TS_PLUGIN_LD_FLAGS) \
  -L$(top_builddir)/lib/cppapi

experimental_webp_transform_WebpTransform_la_LIBADD = \
  -latscppapi \
  $(LIBMAGICKCPP_LIBS)
