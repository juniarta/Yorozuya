// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "CCryptor_info.hpp"

/*
START_ATF_NAMESPACE
    namespace detail
    {
        static info::CCryptorctor_CCryptor2_ptr CCryptorctor_CCryptor2_next(nullptr);
        static info::CCryptorctor_CCryptor2_clbk CCryptorctor_CCryptor2_user(nullptr);
        static info::CCryptorCiphertextLength4_ptr CCryptorCiphertextLength4_next(nullptr);
        static info::CCryptorCiphertextLength4_clbk CCryptorCiphertextLength4_user(nullptr);
        static info::CCryptorCreateKey6_ptr CCryptorCreateKey6_next(nullptr);
        static info::CCryptorCreateKey6_clbk CCryptorCreateKey6_user(nullptr);
        static info::CCryptorDecrypt8_ptr CCryptorDecrypt8_next(nullptr);
        static info::CCryptorDecrypt8_clbk CCryptorDecrypt8_user(nullptr);
        static info::CCryptorEncrypt10_ptr CCryptorEncrypt10_next(nullptr);
        static info::CCryptorEncrypt10_clbk CCryptorEncrypt10_user(nullptr);
        static info::CCryptorGenerateBlock12_ptr CCryptorGenerateBlock12_next(nullptr);
        static info::CCryptorGenerateBlock12_clbk CCryptorGenerateBlock12_user(nullptr);
        static info::CCryptorGetKeyStr14_ptr CCryptorGetKeyStr14_next(nullptr);
        static info::CCryptorGetKeyStr14_clbk CCryptorGetKeyStr14_user(nullptr);
        static info::CCryptorInit16_ptr CCryptorInit16_next(nullptr);
        static info::CCryptorInit16_clbk CCryptorInit16_user(nullptr);
        static info::CCryptorMakeHash18_ptr CCryptorMakeHash18_next(nullptr);
        static info::CCryptorMakeHash18_clbk CCryptorMakeHash18_user(nullptr);
        static info::CCryptorMaxPlaintextLength20_ptr CCryptorMaxPlaintextLength20_next(nullptr);
        static info::CCryptorMaxPlaintextLength20_clbk CCryptorMaxPlaintextLength20_user(nullptr);
        static info::CCryptorSaveKey22_ptr CCryptorSaveKey22_next(nullptr);
        static info::CCryptorSaveKey22_clbk CCryptorSaveKey22_user(nullptr);
        static info::CCryptorVerifyHash24_ptr CCryptorVerifyHash24_next(nullptr);
        static info::CCryptorVerifyHash24_clbk CCryptorVerifyHash24_user(nullptr);
        static info::CCryptordtor_CCryptor29_ptr CCryptordtor_CCryptor29_next(nullptr);
        static info::CCryptordtor_CCryptor29_clbk CCryptordtor_CCryptor29_user(nullptr);
        
        static void CCryptorctor_CCryptor2_wrapper(struct CCryptor* _this)
        {
           CCryptorctor_CCryptor2_user(_this, CCryptorctor_CCryptor2_next);
        };
        static uint64_t CCryptorCiphertextLength4_wrapper(struct CCryptor* _this, uint64_t tMaxUseSize)
        {
           return CCryptorCiphertextLength4_user(_this, tMaxUseSize, CCryptorCiphertextLength4_next);
        };
        static bool CCryptorCreateKey6_wrapper(struct CCryptor* _this)
        {
           return CCryptorCreateKey6_user(_this, CCryptorCreateKey6_next);
        };
        static bool CCryptorDecrypt8_wrapper(struct CCryptor* _this, char* pCipherText, uint64_t tCipherTextLength, char* pText, uint64_t tLength)
        {
           return CCryptorDecrypt8_user(_this, pCipherText, tCipherTextLength, pText, tLength, CCryptorDecrypt8_next);
        };
        static bool CCryptorEncrypt10_wrapper(struct CCryptor* _this, char* pText, uint64_t tLength, char* pCipherText, uint64_t tCipherTextLength)
        {
           return CCryptorEncrypt10_user(_this, pText, tLength, pCipherText, tCipherTextLength, CCryptorEncrypt10_next);
        };
        static void CCryptorGenerateBlock12_wrapper(struct CCryptor* _this, char* output, uint64_t size)
        {
           CCryptorGenerateBlock12_user(_this, output, size, CCryptorGenerateBlock12_next);
        };
        static bool CCryptorGetKeyStr14_wrapper(struct CCryptor* _this, char* szKeyStr, uint64_t tBuffSize)
        {
           return CCryptorGetKeyStr14_user(_this, szKeyStr, tBuffSize, CCryptorGetKeyStr14_next);
        };
        static bool CCryptorInit16_wrapper(struct CCryptor* _this, char* szKeyPath, bool bUseCreate)
        {
           return CCryptorInit16_user(_this, szKeyPath, bUseCreate, CCryptorInit16_next);
        };
        static bool CCryptorMakeHash18_wrapper(struct CCryptor* _this, char* pBuff, uint64_t tBufSize, char* pHash, uint64_t tHashSize)
        {
           return CCryptorMakeHash18_user(_this, pBuff, tBufSize, pHash, tHashSize, CCryptorMakeHash18_next);
        };
        static uint64_t CCryptorMaxPlaintextLength20_wrapper(struct CCryptor* _this, uint64_t ciphertextLength)
        {
           return CCryptorMaxPlaintextLength20_user(_this, ciphertextLength, CCryptorMaxPlaintextLength20_next);
        };
        static bool CCryptorSaveKey22_wrapper(struct CCryptor* _this)
        {
           return CCryptorSaveKey22_user(_this, CCryptorSaveKey22_next);
        };
        static bool CCryptorVerifyHash24_wrapper(struct CCryptor* _this, char* pBuff, uint64_t tBufSize, char* pHash, uint64_t tHashSize)
        {
           return CCryptorVerifyHash24_user(_this, pBuff, tBufSize, pHash, tHashSize, CCryptorVerifyHash24_next);
        };
        static void CCryptordtor_CCryptor29_wrapper(struct CCryptor* _this)
        {
           CCryptordtor_CCryptor29_user(_this, CCryptordtor_CCryptor29_next);
        };
        
        static hook_record CCryptor_functions[] = {
        {   (LPVOID)0x1401bf910L,
            (LPVOID *)&CCryptorctor_CCryptor2_user,
            (LPVOID *)&CCryptorctor_CCryptor2_next,
            (LPVOID)cast_pointer_function(CCryptorctor_CCryptor2_wrapper),
            (LPVOID)cast_pointer_function((void(CCryptor::*)())&CCryptor::ctor_CCryptor) },
        {   (LPVOID)0x14046b3b0L,
            (LPVOID *)&CCryptorCiphertextLength4_user,
            (LPVOID *)&CCryptorCiphertextLength4_next,
            (LPVOID)cast_pointer_function(CCryptorCiphertextLength4_wrapper),
            (LPVOID)cast_pointer_function((uint64_t(CCryptor::*)(uint64_t))&CCryptor::CiphertextLength) },
        {   (LPVOID)0x14046b510L,
            (LPVOID *)&CCryptorCreateKey6_user,
            (LPVOID *)&CCryptorCreateKey6_next,
            (LPVOID)cast_pointer_function(CCryptorCreateKey6_wrapper),
            (LPVOID)cast_pointer_function((bool(CCryptor::*)())&CCryptor::CreateKey) },
        {   (LPVOID)0x14046b4f0L,
            (LPVOID *)&CCryptorDecrypt8_user,
            (LPVOID *)&CCryptorDecrypt8_next,
            (LPVOID)cast_pointer_function(CCryptorDecrypt8_wrapper),
            (LPVOID)cast_pointer_function((bool(CCryptor::*)(char*, uint64_t, char*, uint64_t))&CCryptor::Decrypt) },
        {   (LPVOID)0x14046b470L,
            (LPVOID *)&CCryptorEncrypt10_user,
            (LPVOID *)&CCryptorEncrypt10_next,
            (LPVOID)cast_pointer_function(CCryptorEncrypt10_wrapper),
            (LPVOID)cast_pointer_function((bool(CCryptor::*)(char*, uint64_t, char*, uint64_t))&CCryptor::Encrypt) },
        {   (LPVOID)0x14046b550L,
            (LPVOID *)&CCryptorGenerateBlock12_user,
            (LPVOID *)&CCryptorGenerateBlock12_next,
            (LPVOID)cast_pointer_function(CCryptorGenerateBlock12_wrapper),
            (LPVOID)cast_pointer_function((void(CCryptor::*)(char*, uint64_t))&CCryptor::GenerateBlock) },
        {   (LPVOID)0x14046b530L,
            (LPVOID *)&CCryptorGetKeyStr14_user,
            (LPVOID *)&CCryptorGetKeyStr14_next,
            (LPVOID)cast_pointer_function(CCryptorGetKeyStr14_wrapper),
            (LPVOID)cast_pointer_function((bool(CCryptor::*)(char*, uint64_t))&CCryptor::GetKeyStr) },
        {   (LPVOID)0x14046b0d0L,
            (LPVOID *)&CCryptorInit16_user,
            (LPVOID *)&CCryptorInit16_next,
            (LPVOID)cast_pointer_function(CCryptorInit16_wrapper),
            (LPVOID)cast_pointer_function((bool(CCryptor::*)(char*, bool))&CCryptor::Init) },
        {   (LPVOID)0x14046b5c0L,
            (LPVOID *)&CCryptorMakeHash18_user,
            (LPVOID *)&CCryptorMakeHash18_next,
            (LPVOID)cast_pointer_function(CCryptorMakeHash18_wrapper),
            (LPVOID)cast_pointer_function((bool(CCryptor::*)(char*, uint64_t, char*, uint64_t))&CCryptor::MakeHash) },
        {   (LPVOID)0x14046b410L,
            (LPVOID *)&CCryptorMaxPlaintextLength20_user,
            (LPVOID *)&CCryptorMaxPlaintextLength20_next,
            (LPVOID)cast_pointer_function(CCryptorMaxPlaintextLength20_wrapper),
            (LPVOID)cast_pointer_function((uint64_t(CCryptor::*)(uint64_t))&CCryptor::MaxPlaintextLength) },
        {   (LPVOID)0x14046b520L,
            (LPVOID *)&CCryptorSaveKey22_user,
            (LPVOID *)&CCryptorSaveKey22_next,
            (LPVOID)cast_pointer_function(CCryptorSaveKey22_wrapper),
            (LPVOID)cast_pointer_function((bool(CCryptor::*)())&CCryptor::SaveKey) },
        {   (LPVOID)0x14046b780L,
            (LPVOID *)&CCryptorVerifyHash24_user,
            (LPVOID *)&CCryptorVerifyHash24_next,
            (LPVOID)cast_pointer_function(CCryptorVerifyHash24_wrapper),
            (LPVOID)cast_pointer_function((bool(CCryptor::*)(char*, uint64_t, char*, uint64_t))&CCryptor::VerifyHash) },
        {   (LPVOID)0x14046af70L,
            (LPVOID *)&CCryptordtor_CCryptor29_user,
            (LPVOID *)&CCryptordtor_CCryptor29_next,
            (LPVOID)cast_pointer_function(CCryptordtor_CCryptor29_wrapper),
            (LPVOID)cast_pointer_function((void(CCryptor::*)())&CCryptor::dtor_CCryptor) },
        
        };
        
    }; // static end namespace detail
END_ATF_NAMESPACE
*/