/*
 * operator.hpp
 * 
 * Author: Bryce M. Westheimer
 * Copied: Apr 8, 2019
 *
 * Details: Abstract base class for second-quantization operator (creation/annihilation)
 *  
 */

#ifndef QCCG_ABSTRACT_OPERATOR_HPP_
#define QCCG_ABSTRACT_OPERATOR_HPP_

#include "libaccint.hpp"  // BasisSet

// Convenience typedef(s)
typedef libaccint::host::core::BasisSet BasisSet;

namespace qccg {

  namespace abstract {

    /*! \class Operator
     *  \ingroup TODO:ADD_GROUP
     * 
     *  \brief The abstract second-quantization Operator class
     * 
     *  \details TODO
     * 
     *  \author Bryce M. Westheimer
     * 
     *  \date Apr 9, 2019 
     * 
     */ 
    class Operator {
    
      public:

      /***** Constructor(s) and Destructor(s) *****/

        Operator();
        // TODO: Etc.
        ~Operator();

      /***** Public Member Functions *****/

        // TODO

      /***** Public Member Variables *****/

        // TODO

      /***** Operator Overloads *****/

        // TODO
      
      protected:

      /***** Protected Member Functions *****/

        // TODO

      /***** Protected Member Variables *****/

        // TODO

      private:

      /***** Private Member Functions *****/

        // TODO

      /***** Private Member Variables *****/

        // Basis set that an operator is expanded in
        BasisSet basis_set_;
        
        // TODO: Etc.

    };

  } // namespace qccg::abstract

} // namespace qccg

#endif /* QCCG_ABSTRACT_OPERATOR_HPP_ */