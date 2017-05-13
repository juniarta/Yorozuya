// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "./common/ATFCore.hpp"
#include "lua_tinker__lua2object_detail.hpp"


START_ATF_NAMESPACE
    namespace registry
    {
        class lua_tinker::lua2object<CMonster *>_registry : public IRegistry
        {
            public: virtual void registry() {
                auto& hook_core = CATFCore::get_instance();
                for (auto& r : lua_tinker::detaillua_tinker::lua2object<CMonster *>_functions)
                    hook_core.reg_wrapper(r.pBind, r);
            }
        };
        
    }; // end namespace registry
END_ATF_NAMESPACE
#include "./common/ATFCore.hpp"
#include "lua_tinker__lua2object_detail.hpp"


START_ATF_NAMESPACE
    namespace registry
    {
        class lua_tinker::lua2object<CLuaEventNode *>_registry : public IRegistry
        {
            public: virtual void registry() {
                auto& hook_core = CATFCore::get_instance();
                for (auto& r : lua_tinker::detaillua_tinker::lua2object<CLuaEventNode *>_functions)
                    hook_core.reg_wrapper(r.pBind, r);
            }
        };
        
    }; // end namespace registry
END_ATF_NAMESPACE
#include "./common/ATFCore.hpp"
#include "lua_tinker__lua2object_detail.hpp"


START_ATF_NAMESPACE
    namespace registry
    {
        class lua_tinker::lua2object<CLuaSignalReActor *>_registry : public IRegistry
        {
            public: virtual void registry() {
                auto& hook_core = CATFCore::get_instance();
                for (auto& r : lua_tinker::detaillua_tinker::lua2object<CLuaSignalReActor *>_functions)
                    hook_core.reg_wrapper(r.pBind, r);
            }
        };
        
    }; // end namespace registry
END_ATF_NAMESPACE
#include "./common/ATFCore.hpp"
#include "lua_tinker__lua2object_detail.hpp"


START_ATF_NAMESPACE
    namespace registry
    {
        class lua_tinker::lua2object<CLuaScript *>_registry : public IRegistry
        {
            public: virtual void registry() {
                auto& hook_core = CATFCore::get_instance();
                for (auto& r : lua_tinker::detaillua_tinker::lua2object<CLuaScript *>_functions)
                    hook_core.reg_wrapper(r.pBind, r);
            }
        };
        
    }; // end namespace registry
END_ATF_NAMESPACE
#include "./common/ATFCore.hpp"
#include "lua_tinker__lua2object_detail.hpp"


START_ATF_NAMESPACE
    namespace registry
    {
        class lua_tinker::lua2object<LuaParam3 *>_registry : public IRegistry
        {
            public: virtual void registry() {
                auto& hook_core = CATFCore::get_instance();
                for (auto& r : lua_tinker::detaillua_tinker::lua2object<LuaParam3 *>_functions)
                    hook_core.reg_wrapper(r.pBind, r);
            }
        };
        
    }; // end namespace registry
END_ATF_NAMESPACE
#include "./common/ATFCore.hpp"
#include "lua_tinker__lua2object_detail.hpp"


START_ATF_NAMESPACE
    namespace registry
    {
        class lua_tinker::lua2object<CLuaEventMgr *>_registry : public IRegistry
        {
            public: virtual void registry() {
                auto& hook_core = CATFCore::get_instance();
                for (auto& r : lua_tinker::detaillua_tinker::lua2object<CLuaEventMgr *>_functions)
                    hook_core.reg_wrapper(r.pBind, r);
            }
        };
        
    }; // end namespace registry
END_ATF_NAMESPACE
#include "./common/ATFCore.hpp"
#include "lua_tinker__lua2object_detail.hpp"


START_ATF_NAMESPACE
    namespace registry
    {
        class lua_tinker::lua2object<LuaParam3>_registry : public IRegistry
        {
            public: virtual void registry() {
                auto& hook_core = CATFCore::get_instance();
                for (auto& r : lua_tinker::detaillua_tinker::lua2object<LuaParam3>_functions)
                    hook_core.reg_wrapper(r.pBind, r);
            }
        };
        
    }; // end namespace registry
END_ATF_NAMESPACE