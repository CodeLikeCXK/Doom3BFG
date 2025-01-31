// Monster_zombie_commando_tentacle.h
//

#pragma once

class rvmMonsterZombieCommandoTentacle : public rvmMonsterZombie
{
	CLASS_PROTOTYPE( rvmMonsterZombieCommandoTentacle );
public:
	virtual void				Init( void ) override;
	virtual void				AI_Begin( void ) override;

	virtual int					check_attacks() override;
	virtual void				do_attack( int attack_flags ) override;
private:
	stateResult_t				state_Begin( stateParms_t* parms );
	stateResult_t				state_Idle( stateParms_t* parms );
	stateResult_t				combat_tentacle( stateParms_t* parms );
	stateResult_t				combat_melee( stateParms_t* parms );

	void						tentacle_attack_end();
	void						tentacle_attack_start();
private:
	float						nextAttack;
	float						nextNoFOVAttack;
	boolean						tentacleDamage;
};
