#include <_qry_case_cheat_player_vote_infoDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::_qry_case_cheat_player_vote_infosize2_ptr _qry_case_cheat_player_vote_infosize2_next(nullptr);
        Info::_qry_case_cheat_player_vote_infosize2_clbk _qry_case_cheat_player_vote_infosize2_user(nullptr);
        
        int _qry_case_cheat_player_vote_infosize2_wrapper(struct _qry_case_cheat_player_vote_info* _this)
        {
           return _qry_case_cheat_player_vote_infosize2_user(_this, _qry_case_cheat_player_vote_infosize2_next);
        };
        
        ::std::array<hook_record, 1> _qry_case_cheat_player_vote_info_functions = 
        {
            _hook_record {
                (LPVOID)0x14007e150L,
                (LPVOID *)&_qry_case_cheat_player_vote_infosize2_user,
                (LPVOID *)&_qry_case_cheat_player_vote_infosize2_next,
                (LPVOID)cast_pointer_function(_qry_case_cheat_player_vote_infosize2_wrapper),
                (LPVOID)cast_pointer_function((int(_qry_case_cheat_player_vote_info::*)())&_qry_case_cheat_player_vote_info::size)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
