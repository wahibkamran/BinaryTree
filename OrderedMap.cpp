#include "OrderedMap.h"
#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;

template <typename KK, typename VV>
int OrderedMap<KK,VV>::size() const {return SearchTree<Entry<KK,VV> >::getSize() ;}

template <typename KK, typename VV>
bool OrderedMap<KK,VV>::empty() const {return SearchTree<Entry<KK,VV> >::isEmpty() ; }

template <typename KK, typename VV>
void OrderedMap<KK,VV>::erase(const KK &k)
{
    return;
}

template <typename KK, typename VV>
void OrderedMap<KK,VV>::erase(const BSTIterator & p)
{
    return;
}

template <typename KK, typename VV>
int OrderedMap<KK,VV>::size() const {return SearchTree<Entry<KK,VV> >::getSize() ;}

template <typename KK, typename VV>
bool OrderedMap<KK,VV>::empty() const {return SearchTree<Entry<KK,VV> >::isEmpty() ; }
