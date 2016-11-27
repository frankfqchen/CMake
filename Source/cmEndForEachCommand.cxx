/* Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
   file Copyright.txt or https://cmake.org/licensing for details.  */
#include "cmEndForEachCommand.h"

class cmExecutionStatus;

bool cmEndForEachCommand::InitialPass(std::vector<std::string> const&,
                                      cmExecutionStatus&)
{
  this->SetError("An ENDFOREACH command was found outside of a proper "
                 "FOREACH ENDFOREACH structure. Or its arguments did "
                 "not match the opening FOREACH command.");
  return false;
}
