# CMakeLists.txt
#
# Wireshark - Network traffic analyzer
# By Gerald Combs <gerald@wireshark.org>
# Copyright 1998 Gerald Combs
#
# SPDX-License-Identifier: GPL-2.0-or-later
#
cmake_minimum_required (VERSION 2.8)
set( PROTOCOL_NAME ngap )
set (NGAP_BIN_DIR ${CMAKE_CURRENT_BINARY_DIR}${CMAKE_FILES_DIRECTORY})
set( ASN_FILE_LIST
	${CMAKE_CURRENT_SOURCE_DIR}/NGAP-CommonDataTypes.asn
	${CMAKE_CURRENT_SOURCE_DIR}/NGAP-Constants.asn
	${CMAKE_CURRENT_SOURCE_DIR}/NGAP-Containers.asn
	${CMAKE_CURRENT_SOURCE_DIR}/NGAP-IEs.asn
	${CMAKE_CURRENT_SOURCE_DIR}/NGAP-PDU-Contents.asn
  ${CMAKE_CURRENT_SOURCE_DIR}/NGAP-PDU-Descriptions.asn
)


set(NGAP_C_DIR ${NGAP_BIN_DIR}/NGAP)
message("calling ASN1C_PREFIX=NGAP_ asn1c -pdu=all -fcompound-names -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D ${NGAP_C_DIR} ${NGAP_ASN_DIR}/${NGAP_ASN_FILES}")
execute_process(COMMAND mkdir -p ${NGAP_C_DIR}
				COMMAND asn1c -pdu=all -fcompound-names -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D ${NGAP_C_DIR} ${ASN_FILE_LIST}
				RESULT_VARIABLE ret
		         OUTPUT_QUIET
                ERROR_QUIET)

				
if (NOT ${ret} STREQUAL 0)
  message(FATAL_ERROR "${ret}: error")
endif (NOT ${ret} STREQUAL 0)
file(GLOB NGAP_source ${NGAP_C_DIR}/*.c)

file(GLOB ngap_h ${NGAP_C_DIR}/*.h)
set(ngap_h ${ngap_h})

add_library(NGAP_LIB
 ${NGAP_source}
 )

 add_custom_command (
  OUTPUT ${NGAP_C_DIR}/NGAP_asn_constant.h
  COMMAND mkdir -p ${NGAP_C_DIR}
  COMMAND env asn1c -pdu=all -fcompound-names -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D ${NGAP_C_DIR} ${ASN_FILE_LIST}
  DEPENDS ${ASN_FILE_LIST}
)

file(GLOB NGAP_source ${NGAP_C_DIR}/*.c)

file(GLOB ngap_h ${NGAP_C_DIR}/*.h)
set(ngap_h ${ngap_h})

include_directories (${NGAP_C_DIR})
add_definitions("-DASN_DISABLE_OER_SUPPORT")
#add_definitions("-DASN_EMIT_DEBUG")

add_library(ngaplib
  ${NGAP_source}
  )
  add_definitions(-DASN1_MINIMUM_VERSION=924)

  # Source fles for the binary
set(binary_SOURCES
${CMAKE_CURRENT_SOURCE_DIR}/ngap_test.c
)

# Add an executable with the above sources
add_executable(asntest ${binary_SOURCES})

# link the new hello_library target with the hello_binary target
target_link_libraries( asntest
PRIVATE ngaplib
)
