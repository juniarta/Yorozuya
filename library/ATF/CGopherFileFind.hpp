// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "CFileFind.hpp"
#include "CGopherConnection.hpp"


START_ATF_NAMESPACE
    struct  CGopherFileFind : CFileFind
    {
        CGopherConnection *m_pConnection;
        unsigned __int64 m_dwContext;
    };
END_ATF_NAMESPACE