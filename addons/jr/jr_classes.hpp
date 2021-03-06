//ASDG prefixed original classes preserved to ensure compatibility

class asdg_SlotInfo { // Base class
    access = ReadAndWrite;
    scope = private;
    linkProxy = "defaultProxy";
    iconPosition[] = {0.0, 0.0};
    iconScale = 0.0;
    iconPicture = "";
    iconPinpoint = "Center";
};

class asdg_OpticRail: asdg_SlotInfo { // Base optic rail class
    linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
    displayName = "$STR_A3_CowsSlot0";
    iconPicture = "\A3\Weapons_F\Data\UI\attachment_top";
    iconPinpoint = "Bottom";
};

class asdg_MuzzleSlot: asdg_SlotInfo { // Base muzzle slot
    linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
    displayName = "$str_a3_cfgweapons_abr_base_f_weaponslotsinfo_muzzleslot0";
    iconPicture = "\A3\Weapons_F\Data\UI\attachment_muzzle";
};

class asdg_FrontSideRail: asdg_SlotInfo { // Laser / flashlight rail
    linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
    displayName = "$STR_A3_PointerSlot0";
    iconPicture = "\A3\Weapons_F\Data\UI\attachment_side";
    class compatibleItems {
        acc_flashlight = 1;
        acc_pointer_IR = 1;
    };
};

class asdg_UnderSlot: asdg_SlotInfo { // Base under barrel slot
    linkProxy = "\A3\Data_F_Mark\Proxies\Weapon_Slots\UNDERBARREL";
    iconPicture = "\A3\Weapons_F_Mark\Data\UI\attachment_under";
    iconPinpoint = "Bottom";
    class compatibleItems {
        bipod_01_F_snd = 1;
        bipod_01_F_blk = 1;
        bipod_01_F_mtp = 1;
        bipod_02_F_blk = 1;
        bipod_02_F_tan = 1;
        bipod_02_F_hex = 1;
        bipod_03_F_blk = 1;
        bipod_03_F_oli = 1;
    };
};

// Picattiny rails for optic mounts

class asdg_OpticRail1913: asdg_OpticRail { // the "medium" rail, long enough to fit any optic, but not enough to attach a clip-on NVS in front of a long scope.
    class compatibleItems {
        optic_Nightstalker = 1;
        optic_tws = 1;
        optic_tws_mg = 1;
        optic_NVS = 1;
        optic_SOS = 1;
        optic_MRCO = 1;
        optic_Arco = 1;
        optic_aco = 1;
        optic_ACO_grn = 1;
        optic_aco_smg = 1;
        optic_ACO_grn_smg = 1;
        optic_hamr = 1;
        optic_Holosight = 1;
        optic_Holosight_smg = 1;
        optic_DMS = 1;
        optic_LRPS = 1;
        optic_AMS = 1;
        optic_AMS_khk = 1;
        optic_AMS_snd = 1;
        optic_KHS_blk = 1;
        optic_KHS_hex = 1;
        optic_KHS_old = 1;
        optic_KHS_tan = 1;
    };
};

class asdg_OpticRail1913_short: asdg_OpticRail1913 { // attachments that fit on medium rail but not on the short rail
    class compatibleItems: compatibleItems {
        ///optic_DMS = 0;
    };
};

class asdg_OpticRail1913_short_MG: asdg_OpticRail1913_short { // attachments that would not work well on machine guns
    class compatibleItems: compatibleItems {
        optic_SOS = 0;
        optic_DMS = 0;
        optic_LRPS = 0;
        optic_AMS = 0;
        optic_AMS_khk = 0;
        optic_AMS_snd = 0;
        optic_KHS_blk = 0;
        optic_KHS_hex = 0;
        optic_KHS_old = 0;
        optic_KHS_tan = 0;
    };
};

class asdg_OpticRail1913_long: asdg_OpticRail1913 {
    class compatibleItems: compatibleItems {
        // supports really long attachments, like scope + clip-on NVS
    };
};

// AK-style optic mount

class asdg_OpticSideMount: asdg_OpticRail {
    class compatibleItems {
        //by default we have none, because there's no vanilla accessory that would fit here
        //but there are plenty Russian weapon mods out there that could benefit from this standardized base slot class
    };
};

// Muzzle slots

class asdg_MuzzleSlot_762: asdg_MuzzleSlot { // for 7.62x51 universal mount suppressors
    class compatibleItems {
        muzzle_snds_B = 1;
    };
};

class asdg_MuzzleSlot_556: asdg_MuzzleSlot { // for 5.56x45 universal mount suppressors
    class compatibleItems {
        muzzle_snds_M = 1;
    };
};

class asdg_MuzzleSlot_762MG: asdg_MuzzleSlot { // for 7.62, 6.5 and 5.56 universal mount MG suppressors
    class compatibleItems {
        muzzle_snds_H_MG = 1;
        muzzle_snds_H_SW = 1;
    };
};

class asdg_MuzzleSlot_338: asdg_MuzzleSlot { // for .338 universal mount suppressors
    class compatibleItems {
        muzzle_snds_338_black = 1;
        muzzle_snds_338_green = 1;
        muzzle_snds_338_sand = 1;
    };
};

class asdg_MuzzleSlot_93x64: asdg_MuzzleSlot { // for 9.3x64 universal mount suppressors
    class compatibleItems {
        muzzle_snds_93mmg = 1;
        muzzle_snds_93mmg_tan = 1;
    };
};

class asdg_MuzzleSlot_9MM: asdg_MuzzleSlot { // for 9x19mm universal mount pistol suppressors
    class compatibleItems {
        muzzle_snds_L = 1;
    };
};
class asdg_MuzzleSlot_9MM_SMG: asdg_MuzzleSlot { // for 9x19mm universal mount SMG suppressors
    class compatibleItems {
        muzzle_snds_L = 1;
    };
};

class asdg_MuzzleSlot_45ACP: asdg_MuzzleSlot { // for .45ACP universal mount pistol suppressors
    class compatibleItems {
        muzzle_snds_acp = 1;
    };
};
class asdg_MuzzleSlot_45ACP_SMG: asdg_MuzzleSlot { // for .45ACP universal mount SMG suppressors
    class compatibleItems {
        muzzle_snds_acp = 1;
    };
};

class asdg_MuzzleSlot_545R: asdg_MuzzleSlot { // for 5.45x39 suppressors
    class compatibleItems {};
};

class asdg_MuzzleSlot_762R: asdg_MuzzleSlot { // for 7.62x39 suppressors
    class compatibleItems {};
};
