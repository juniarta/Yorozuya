#include <_guild_alter_member_state_inform_zocl.hpp>


START_ATF_NAMESPACE
    _guild_alter_member_state_inform_zocl::_guild_alter_member_state_inform_zocl()
    {
        using org_ptr = void (WINAPIV*)(struct _guild_alter_member_state_inform_zocl*);
        (org_ptr(0x14025d540L))(this);
    };
    void _guild_alter_member_state_inform_zocl::ctor__guild_alter_member_state_inform_zocl()
    {
        using org_ptr = void (WINAPIV*)(struct _guild_alter_member_state_inform_zocl*);
        (org_ptr(0x14025d540L))(this);
    };
    int _guild_alter_member_state_inform_zocl::size()
    {
        using org_ptr = int (WINAPIV*)(struct _guild_alter_member_state_inform_zocl*);
        return (org_ptr(0x14025d560L))(this);
    };
    
END_ATF_NAMESPACE
