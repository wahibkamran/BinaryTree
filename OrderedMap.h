#ifndef DirectedMap_h
#define DirectedMap_h

#include "BinarySearchTrees.h"

template <typename KK, typename VV>
class OrderedMap: public SearchTree<Entry<KK,VV> > {
public:
    // Usefull Typedef
    typedef  SearchTree<Entry<KK,VV> > BST;
    typedef typename SearchTree<Entry<KK,VV> >::Iterator BSTIterator;

public:
    OrderedMap(): SearchTree<Entry<KK,VV> >(){}
    int size () const ;
    bool empty () const ;
    BSTIterator find ( const KK& k) const {find(k);}
    BSTIterator put ( const KK& k, const VV& v){return BST::insert(k,v) ;}
    void erase ( const KK& k) ;
    void erase ( const BSTIterator & p);
    BSTIterator begin () {return BST::begin(); }
    BSTIterator end () {return BST::end();}
} ;

#endif /* DirectedMap_h */
