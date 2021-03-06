#ifndef BORGROGUE_H_
#define BORGROGUE_H_

#include "PVEEntity.h"

class BorgRogue : public PVEEntity
{
    public:

        BorgRogue();
        ~BorgRogue();

        string getName();
        int getShieldStrenght();
        int getShieldRegenerativeRate();

        int getRegenerativeAdaptivePlating();
        bool getHasRegenerativeAdaptivePlating();

        int getTransPhasicTorpedos();
        bool getHasTransphasicTorpedos();
        int getChronitonTorpedos();
        bool getHasChronitonTorpedos();

        int getGravimetricTorpedos();
        bool getHasGravimetricTorpedos();
        int getSpatialTorpedos();
        bool getHasSpatialTorpedos();

        bool getHasLasers();
        bool getHasPhasedIonCannon();
        bool getHasPulseWeapon();

        int getBorgComplement();
        bool getHasTractorLock();
        bool getIsWreckPVE();

        void setShieldStrenghtPVE(int strenght);
        void setShieldRegenerativeRatePVE(int rate);

        void setArmourPVE(int armour);

        void setTransPhasicTorpedosPVE(int num);
        void setChronitonTorpedosPVE(int num);
        void setGravimetricTorpedosPVE(int num);
        void setSpatialTorpedosPVE(int num);
        void setHasTractorLockPVE(bool has);

        void setWreckPVE();
};

#endif /*BORGROGUE_H_*/
