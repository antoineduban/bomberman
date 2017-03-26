#pragma once

#include "Tests.hpp"

#include <HierarchyNode.hpp>
#include <Namable.hpp>

namespace ft
{
	namespace TestsHierarchyNode
	{
		struct Node : public HierarchyNode, public Namable
		{
			typedef HierarchyNodeIterator<		Node>	iterator;
			typedef HierarchyNodeIterator<const Node>	const_iterator;
		};

		uint32	All();
		uint32	Basics();
	}
}
