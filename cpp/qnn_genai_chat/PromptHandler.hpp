// ---------------------------------------------------------------------
// Copyright (c) 2024 Qualcomm Innovation Center, Inc. All rights reserved.
// SPDX-License-Identifier: BSD-3-Clause
// ---------------------------------------------------------------------
#pragma once

#include <string>
namespace AppUtils
{

class Llama2PromptHandler
{
  private:
    bool m_is_first_prompt;

  public:
    Llama2PromptHandler();

    std::string GetPromptWithTag(const std::string& user_prompt);
};


class Llama3PromptHandler
{
  private:
    bool m_is_first_prompt;

  public:
    Llama3PromptHandler();

    std::string GetPromptWithTag(const std::string& user_prompt);
};


} // namespace AppUtils
