/*
 * Software License Agreement (BSD License)
 *
 * Point Cloud Library (PCL) - www.pointclouds.org
 * Copyright (c) 2009-2012, Willow Garage, Inc.
 * Copyright (c) 2012-, Open Perception, Inc.
 * Copyright (c) Martin Saelzle, respective authors.
 *
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 *  * Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 *  * Redistributions in binary form must reproduce the above
 *    copyright notice, this list of conditions and the following
 *    disclaimer in the documentation and/or other materials provided
 *    with the distribution.
 *  * Neither the name of the copyright holder(s) nor the names of its
 *    contributors may be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
 * COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
 * BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
 * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 * ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 * $Id$
 *
 */

#include <pcl/geometry/mesh_element_index.h>

////////////////////////////////////////////////////////////////////////////////
// VertexIndex
////////////////////////////////////////////////////////////////////////////////

pcl::VertexIndex::VertexIndex (const int idx)
  : Base (idx)
{
}

pcl::VertexIndex::VertexIndex (const Self& other)
  : Base (other.idx ())
{
}

////////////////////////////////////////////////////////////////////////////////
// HalfEdgeIndex
////////////////////////////////////////////////////////////////////////////////

pcl::HalfEdgeIndex::HalfEdgeIndex (const int idx)
  : Base (idx)
{
}

pcl::HalfEdgeIndex::HalfEdgeIndex (const Self& other)
  : Base (other.idx ())
{
}

////////////////////////////////////////////////////////////////////////////////
// EdgeIndex
////////////////////////////////////////////////////////////////////////////////

pcl::EdgeIndex::EdgeIndex (const pcl::HalfEdgeIndex& idx_he)
  : Base (idx_he.idx () / 2) // Floor
{
}

pcl::EdgeIndex::EdgeIndex (const Self& other)
  : Base (other.idx ())
{
}


////////////////////////////////////////////////////////////////////////////////
// FaceIndex
////////////////////////////////////////////////////////////////////////////////


pcl::FaceIndex::FaceIndex (const int idx)
  : Base (idx)
{
}

pcl::FaceIndex::FaceIndex (const Self& other)
  : Base (other.idx ())
{
}

////////////////////////////////////////////////////////////////////////////////
// TriangleIndex
////////////////////////////////////////////////////////////////////////////////

//pcl::TriangleIndex::TriangleIndex (const int idx)
//  : Base (idx)
//{
//}

//pcl::TriangleIndex::TriangleIndex (const Self& other)
//  : Base (other.idx ())
//{
//}

//pcl::TriangleIndex::TriangleIndex (const Base& base)
//  : Base (base.idx ())
//{
//}

