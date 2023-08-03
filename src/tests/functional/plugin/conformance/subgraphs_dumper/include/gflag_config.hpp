// Copyright (C) 2018-2023 Intel Corporation
// SPDX-License-Identifier: Apache-2.0
//

#pragma once

#include <gflags/gflags.h>
#include <iostream>

static const char help_message[] = "Print a usage message.";
static const char input_folders_message[] = "Required. Comma separated paths to the input folders with IRs";
static const char local_cache_message[] = "Optional. Comma separated paths to the local cache folders with IRs";
static const char output_folder_message[] = "Required. Path to the output folders where to serialize IRs";
static const char path_regex_message[] = "Optional. regular expression to be applied in input "
                                         "folders recursive discovery";
static const char extract_body_message[] = "Optional. Allow to extract operation bodies to operation cache.";
static const char cache_type_message[] = "Optional. Specify caching type: OP, GRAPH. The default value is both";

DEFINE_bool(h, false, help_message);
DEFINE_string(input_folders, "", local_cache_message);
DEFINE_string(local_cache, "", input_folders_message);
DEFINE_string(output_folder, "output", output_folder_message);
DEFINE_string(path_regex, ".*", output_folder_message);
DEFINE_bool(extract_body, true, extract_body_message);
DEFINE_string(cache_type, "", cache_type_message);

/**
* @brief This function shows a help message
*/
static void showUsage() {
    std::cout << "\n";
    std::cout << "Subgraph Dumper [OPTION]\n";
    std::cout << "Options:\n";
    std::cout << "\n";
    std::cout << "    -h                                     " << help_message << "\n";
    std::cout << "    --input_folders \"<path>\"             " << input_folders_message << "\n";
    std::cout << "    --local_cache \"<path>\"               " << input_folders_message << "\n";
    std::cout << "    --output_folder \"<path>\"             " << output_folder_message << "\n";
    std::cout << "    --path_regex \"<path>\"                " << path_regex_message << "\n";
    std::cout << "    --extract_body \"<value>\"             " << extract_body_message << "\n";
    std::cout << "    --cache_type \"<value>\"               " << extract_body_message << "\n";
    std::cout << std::flush;
}
