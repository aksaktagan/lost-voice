#include "stdafx.h"
#include "MyGame.h"

CMyGame::CMyGame(void) : 
	m_player(400, 540, 0, 0, 0)	,
	mainmenu(400, 300, "mainmenu.png", 0)
	// to initialise more sprites here use a comma-separated list
{
	// TODO: add initialisation here
}

void CMyGame::Lvl1Part1()
{
	level = 1;
	part = 1;

	CSprite* pSprite;

	// spawn the player
	m_player.SetPos(50, 115);
	m_player.SetImage("stand_right");

	background.SetImage("lvl1part1");
	background.SetPosition(400, 300);

	// spawn all other sprites here ...

	// platforms
	pSprite = new CSpriteRect(400, 70, 800, 20, CColor::Black(), CColor::White(), GetTime());
	pSprite->SetProperty("tag", "platform");
	m_sprites.push_back(pSprite);

	// Enemies
	pSprite = new CSprite(700, 150, 0, 0, GetTime());
	pSprite->SetProperty("tag", "mage");
	pSprite->AddImage("mage.png", "mage_fly", 6, 1, 5, 0, 0, 0);
	pSprite->SetAnimation("mage_fly", 7);
	pSprite->SetHealth(50);
	m_sprites.push_back(pSprite);
}


void CMyGame::Lvl1Part2()
{
	level = 1;
	part = 2;
	cutscene = true;

	CSprite* pSprite;

	// spawn the player
	m_player.SetPos(10, 115);
	m_player.SetImage("stand_right");

	background.SetImage("lvl1part2");
	background.SetPosition(400, 300);

	// spawn all other sprites here ...

	// platforms
	pSprite = new CSpriteRect(400, 70, 800, 20, CColor::Black(), CColor::White(), GetTime());
	pSprite->SetProperty("tag", "platform");
	m_sprites.push_back(pSprite);

	// Enemies
	pSprite = new CSprite(810, 400, 0, 0, GetTime());
	pSprite->SetProperty("tag", "witch");
	pSprite->AddImage("witchR.png", "witch_flyR", 40, 2, 39, 0, 0, 0);
	pSprite->AddImage("witchR.png", "witch_atk1R", 40, 2, 34, 3, 24, 3);
	pSprite->SetAnimation("witch_flyR",10);
	pSprite->SetVelocity(-100, 0);
	m_sprites.push_back(pSprite);

	pSprite = new CSprite(830, 115, 0, 0, GetTime());
	pSprite->SetProperty("tag", "rabbit");
	pSprite->AddImage("rabbit_standL.png", "rabbit_standL", 4, 1, 3, 0, 0, 0, CColor::White());
	pSprite->AddImage("rabbit_runL.png", "rabbit_runL", 5, 1, 4, 0, 0, 0, CColor::White());
	pSprite->SetAnimation("rabbit_runL", 10);
	m_sprites.push_back(pSprite);
}

void CMyGame::Lvl2Part1()
{
	level = 2;
	part = 1;

	CSprite* pSprite;

	// spawn the player
	m_player.SetPos(105, 115);
	m_player.SetImage("stand_right1");

	background.SetImage("lvl2part1");
	background.SetPosition(400, 300);

	// spawn all other sprites here ...

	// platforms
	pSprite = new CSpriteRect(400, 70, 800, 20, CColor::Black(), CColor::White(), GetTime());
	pSprite->SetProperty("tag", "platform");
	m_sprites.push_back(pSprite);

	// Enemies
	pSprite = new CSprite(70, 450, 0, 0, GetTime());
	pSprite->SetProperty("tag", "archerL");
	pSprite->AddImage("archer_attackL.png", "archer_attackL", 16, 1, 15, 0, 0, 0, CColor::Black());
	pSprite->SetAnimation("archer_attackL", 7);
	m_sprites.push_back(pSprite);

	pSprite = new CSprite(730, 545, 0, 0, GetTime());
	pSprite->SetProperty("tag", "archerR1");
	pSprite->AddImage("archer_attackR.png", "archer_attackR", 16, 1, 0, 0, 15, 0, CColor::Black());
	pSprite->SetAnimation("archer_attackR",10);
	m_sprites.push_back(pSprite);

	pSprite = new CSprite(750, 370, 0, 0, GetTime());
	pSprite->SetProperty("tag", "archerR2");
	pSprite->AddImage("archer_attackR.png", "archer_attackR", 16, 1, 0, 0, 15, 0, CColor::Black());
	pSprite->SetAnimation("archer_attackR", 5);
	m_sprites.push_back(pSprite);
}

void CMyGame::Lvl2Part2()
{
	level = 2;
	part = 2;

	CSprite* pSprite;

	// spawn the player
	m_player.SetPos(10, 115);
	m_player.SetImage("stand_right");

	background.SetImage("lvl2part2");
	background.SetPosition(400, 300);

	// spawn all other sprites here ...

	// platforms
	pSprite = new CSpriteRect(400, 70, 800, 20, CColor::Black(), CColor::White(), GetTime());
	pSprite->SetProperty("tag", "platform");
	m_sprites.push_back(pSprite);

	pSprite = new CSpriteRect(150, 250, 140, 10, CColor::Black(), CColor::White(), GetTime());
	pSprite->SetProperty("tag", "platform");
	m_sprites.push_back(pSprite);

	pSprite = new CSpriteRect(400, 165, 140, 10, CColor::Black(), CColor::White(), GetTime());
	pSprite->SetProperty("tag", "platform");
	m_sprites.push_back(pSprite);

	pSprite = new CSpriteRect(650, 250, 140, 10, CColor::Black(), CColor::White(), GetTime());
	pSprite->SetProperty("tag", "platform");
	m_sprites.push_back(pSprite);



	pSprite = new CSprite(400, 70, 0, 0, GetTime());
	pSprite->SetProperty("tag", "woodfloor");
	pSprite->LoadImage("woodfloor.png", "woodfloor", CColor::Black());
	pSprite->SetImage("woodfloor");
	m_sprites.push_back(pSprite);

	pSprite = new CSprite(150, 250, 0, 0, GetTime());
	pSprite->SetProperty("tag", "woodplatform");
	pSprite->LoadImage("woodplatform.png", "woodplatform", CColor::Black());
	pSprite->SetImage("woodplatform");
	m_sprites.push_back(pSprite);

	pSprite = new CSprite(400, 165, 0, 0, GetTime());
	pSprite->SetProperty("tag", "woodplatform");
	pSprite->LoadImage("woodplatform.png", "woodplatform", CColor::Black());
	pSprite->SetImage("woodplatform");
	m_sprites.push_back(pSprite);

	pSprite = new CSprite(650, 250, 0, 0, GetTime());
	pSprite->SetProperty("tag", "woodplatform");
	pSprite->LoadImage("woodplatform.png", "woodplatform", CColor::Black());
	pSprite->SetImage("woodplatform");
	m_sprites.push_back(pSprite);


	// Enemies
	pSprite = new CSprite(400, 450, 0, 0, GetTime());
	pSprite->SetProperty("tag", "reaper");
	pSprite->AddImage("reaper_standL.png", "reaper_standL", 17, 1, 16, 0, 0, 0, CColor::Black());
	pSprite->AddImage("reaper_standR.png", "reaper_standR", 17, 1, 0, 0, 16, 0, CColor::Black());
	pSprite->AddImage("reaper_atkL.png", "reaper_atkL", 13, 1, 12, 0, 0, 0, CColor::Black());
	pSprite->AddImage("reaper_atkR.png", "reaper_atkR", 13, 1, 0, 0, 12, 0, CColor::Black());
	pSprite->SetAnimation("reaper_standR", 10);
	pSprite->SetHealth(reaperHealth);
	m_sprites.push_back(pSprite);
}

void CMyGame::Lvl3()
{
	level = 3;
	part = 0;

	CSprite* pSprite;

	// spawn the player
	m_player.SetPos(10, 115);
	m_player.SetImage("stand_right");

	background.SetImage("lvl3");
	background.SetPosition(400, 300);

	// spawn all other sprites here ...

	// platforms
	pSprite = new CSpriteRect(400, 70, 800, 20, CColor::Black(), CColor::White(), GetTime());
	pSprite->SetProperty("tag", "platform");
	m_sprites.push_back(pSprite);

	pSprite = new CSpriteRect(150, 250, 140, 10, CColor::Black(), CColor::White(), GetTime());
	pSprite->SetProperty("tag", "platform");
	m_sprites.push_back(pSprite);

	pSprite = new CSpriteRect(400, 165, 140, 10, CColor::Black(), CColor::White(), GetTime());
	pSprite->SetProperty("tag", "platform");
	m_sprites.push_back(pSprite);

	pSprite = new CSpriteRect(650, 250, 140, 10, CColor::Black(), CColor::White(), GetTime());
	pSprite->SetProperty("tag", "platform");
	m_sprites.push_back(pSprite);



	pSprite = new CSprite(400, 70, 0, 0, GetTime());
	pSprite->SetProperty("tag", "woodfloor");
	pSprite->LoadImage("woodfloor.png", "woodfloor", CColor::Black());
	pSprite->SetImage("woodfloor");
	m_sprites.push_back(pSprite);

	pSprite = new CSprite(150, 250, 0, 0, GetTime());
	pSprite->SetProperty("tag", "woodplatform");
	pSprite->LoadImage("woodplatform.png", "woodplatform", CColor::Black());
	pSprite->SetImage("woodplatform");
	m_sprites.push_back(pSprite);

	pSprite = new CSprite(400, 165, 0, 0, GetTime());
	pSprite->SetProperty("tag", "woodplatform");
	pSprite->LoadImage("woodplatform.png", "woodplatform", CColor::Black());
	pSprite->SetImage("woodplatform");
	m_sprites.push_back(pSprite);

	pSprite = new CSprite(650, 250, 0, 0, GetTime());
	pSprite->SetProperty("tag", "woodplatform");
	pSprite->LoadImage("woodplatform.png", "woodplatform", CColor::Black());
	pSprite->SetImage("woodplatform");
	m_sprites.push_back(pSprite);


	// Enemies
	pSprite = new CSprite(400, 400, 0, 0, GetTime());
	pSprite->SetProperty("tag", "witch");
	pSprite->AddImage("witchR.png", "witch_flyR", 40, 2, 39, 0, 0, 0);
	pSprite->AddImage("witchR.png", "witch_atk1R", 40, 2, 34, 1, 24, 1);
	pSprite->AddImage("witchL.png", "witch_flyL", 40, 2, 0, 0, 39, 0);
	pSprite->AddImage("witchL.png", "witch_atk1L", 40, 2, 5, 1, 15, 1);
	pSprite->SetAnimation("witch_flyR", 10);
	pSprite->SetHealth(witchHealth);
	m_sprites.push_back(pSprite);
}


void CMyGame::PlayerControls()
{
	if (!gamewon || !cutscene)
	{
		if (!playerGotPower)
		{
			if (m_state == AIRBORNE)
				m_player.Accelerate(0, -50);

			if (jumpcd == 0 && m_state == AIRBORNE)
				m_player.SetImage(m_side == LEFT ? "crouch_left" : "crouch_right");

			// Run and Stand
			if (m_state == STANDING || m_state == RUNNING)
			{
				m_player.SetVelocity(0, 0);
				if (attackcd == 0)
				{
					if (IsKeyDown(SDLK_a) || IsKeyDown(SDLK_LEFT))
					{
						m_player.Accelerate(-300, 0);
						if (m_state != RUNNING || m_side != LEFT)
							m_player.SetAnimation("run_left");
						m_state = RUNNING;
						m_side = LEFT;
					}
					else if (IsKeyDown(SDLK_d) || IsKeyDown(SDLK_RIGHT))
					{
						m_player.Accelerate(300, 0);
						if (m_state != RUNNING || m_side != RIGHT)
							m_player.SetAnimation("run_right");
						m_state = RUNNING;
						m_side = RIGHT;
					}
					else
					{
						if (m_state == RUNNING)
							m_player.SetImage(m_side == LEFT ? "stand_left" : "stand_right");
						m_state = STANDING;
					}
				}
			}


			//************* PLAYER ATTACK *************

			if (clicked && attackcd == 0)
			{
				clicked = false;
				playerAttack = true;
				attackcd = 15;
			}

			if (playerAttack == true)
			{
				m_player.SetVelocity(0, 0);
				m_player.Accelerate(0, 0);

				m_player.SetImage(m_side == LEFT ? "atk1_left" : "atk1_right");

				if (m_side == RIGHT)
				{
					CSprite* atk1fx = new CSprite(m_player.GetX() + 30, m_player.GetY() + 10, 0, 0, GetTime());
					atk1fx->AddImage("atk_fx.png", "atk1fx_left", 6, 1, 0, 0, 2, 0, CColor::Black());
					atk1fx->SetAnimation("atk1fx_left", 10);
					atk1fx->Die(300);
					atkfxList.push_back(atk1fx);
				}
				else if (m_side == LEFT)
				{
					CSprite* atk1fx = new CSprite(m_player.GetX() - 30, m_player.GetY() + 10, 0, 0, GetTime());
					atk1fx->AddImage("atk_fx.png", "atk1fx_right", 6, 1, 5, 0, 3, 0, CColor::Black());
					atk1fx->SetAnimation("atk1fx_right", 10);
					atk1fx->Die(300);
					atkfxList.push_back(atk1fx);
				}

				for (CSprite* atk1fx : atkfxList)
				{
					if (m_side == RIGHT)
					{
						if (attackcd == 8)
							hitbox.SetPosition(atk1fx->GetX() + 30, atk1fx->GetY());
						else
							hitbox.SetY(-1000);
					}
					else if (m_side == LEFT)
					{
						if (attackcd == 8)
							hitbox.SetPosition(atk1fx->GetX() - 30, atk1fx->GetY());
						else
							hitbox.SetY(-1000);
					}
				}

			}

			if (attackcd == 0 && playerAttack)
			{
				playerAttack = false;

				if (IsKeyDown(SDLK_a))
					m_player.SetAnimation("run_left");
				else if (IsKeyDown(SDLK_d))
					m_player.SetAnimation("run_right");
				else
					m_player.SetImage(m_side == LEFT ? "stand_left" : "stand_right");
			}
		}
		else
		{
			if (!knightSummoned)
			{
				if (m_state == AIRBORNE)
					m_player.Accelerate(0, -50);

				if (jumpcd == 0 && m_state == AIRBORNE)
					m_player.SetImage(m_side == LEFT ? "crouch_left1" : "crouch_right1");

				// Run and Stand
				if (m_state == STANDING || m_state == RUNNING)
				{
					m_player.SetVelocity(0, 0);
					if (attackcd == 0)
					{
						if (IsKeyDown(SDLK_a) || IsKeyDown(SDLK_LEFT))
						{
							m_player.Accelerate(-300, 0);
							if (m_state != RUNNING || m_side != LEFT)
								m_player.SetAnimation("run_left1");
							m_state = RUNNING;
							m_side = LEFT;
						}
						else if (IsKeyDown(SDLK_d) || IsKeyDown(SDLK_RIGHT))
						{
							m_player.Accelerate(300, 0);
							if (m_state != RUNNING || m_side != RIGHT)
								m_player.SetAnimation("run_right1");
							m_state = RUNNING;
							m_side = RIGHT;
						}
						else
						{
							if (m_state == RUNNING)
								m_player.SetImage(m_side == LEFT ? "stand_left1" : "stand_right1");
							m_state = STANDING;
						}
					}
				}

				//************* PLAYER ATTACK *************

				if (clicked && attackcd == 0)
				{
					clicked = false;
					playerAttack = true;
					attackcd = 15;
				}

				if (playerAttack == true)
				{
					m_player.SetVelocity(0, 0);
					m_player.Accelerate(0, 0);

					m_player.SetImage(m_side == LEFT ? "atk1_left" : "atk1_right");

					if (m_side == RIGHT)
					{
						CSprite* atk1fx = new CSprite(m_player.GetX() + 30, m_player.GetY() + 10, 0, 0, GetTime());
						atk1fx->AddImage("atk_fx1.png", "atk1fx_left", 6, 1, 0, 0, 2, 0, CColor::Black());
						atk1fx->SetAnimation("atk1fx_left", 10);
						atk1fx->Die(300);
						atkfxList.push_back(atk1fx);
					}
					else if (m_side == LEFT)
					{
						CSprite* atk1fx = new CSprite(m_player.GetX() - 30, m_player.GetY() + 10, 0, 0, GetTime());
						atk1fx->AddImage("atk_fx1.png", "atk1fx_right", 6, 1, 5, 0, 3, 0, CColor::Black());
						atk1fx->SetAnimation("atk1fx_right", 10);
						atk1fx->Die(300);
						atkfxList.push_back(atk1fx);
					}

					for (CSprite* atk1fx : atkfxList)
					{
						if (m_side == RIGHT)
						{
							if (attackcd == 8)
								hitbox.SetPosition(atk1fx->GetX() + 30, atk1fx->GetY());
							else
								hitbox.SetY(-1000);
						}
						else if (m_side == LEFT)
						{
							if (attackcd == 8)
								hitbox.SetPosition(atk1fx->GetX() - 30, atk1fx->GetY());
							else
								hitbox.SetY(-1000);
						}
					}

				}

				if (attackcd == 0 && playerAttack)
				{
					playerAttack = false;

					if (IsKeyDown(SDLK_a))
						m_player.SetAnimation("run_left1");
					else if (IsKeyDown(SDLK_d))
						m_player.SetAnimation("run_right1");
					else
						m_player.SetImage(m_side == LEFT ? "stand_left1" : "stand_right1");
				}
			}

			//---------- summoning attacks ----------

			knightSummonIcon.SetImage("knightSummonIcon");
			knightSummonIcon.SetPosition(50, 550);

			if (IsKeyDown(SDLK_e) && !knightSummoned && playerMana != 0)
			{
				knightSummoned = true;
				player_summons.SetPosition(m_player.GetX(), m_player.GetY() + 35);
				m_player.Delete();

				playerMana -= 10;
			}

			if (knightSummoned)
			{
				if (!knightSummoned1 && !knightSummoned2 && !knightSummoned3 && !knightSummoned4)
				{
					knightSummoned1 = true;
					knightSummonedcd1 = 70;
					player_summons.SetAnimation("player_summons1", 10);
				}
				else if (knightSummonedcd1 == 0 && knightSummoned1 && !knightSummoned2 && !knightSummoned3 && !knightSummoned4)
				{
					knightSummoned2 = true;
					knightSummonedcd2 = 100;
					knightSummon.SetPosition(player_summons.GetX(), player_summons.GetY() + 35);
					knightSummon.SetAnimation("KinghtSummonCircle", 10);
					player_summons.SetY(-1000);
				}
				else if (knightSummonedcd2 == 0 && knightSummoned1 && knightSummoned2 && !knightSummoned3 && !knightSummoned4)
				{
					knightSummoned3 = true;
					knightSummonedcd3 = 50;

					if (m_side == RIGHT)
					{
						knight.SetPosition(knightSummon.GetX() + 130, knightSummon.GetY() - 20);
						knight.SetAnimation("HeadlessKnightR", 10);
						knightSummon.SetY(-1000);
					}
					else if (m_side == LEFT)
					{
						knight.SetPosition(knightSummon.GetX() - 130, knightSummon.GetY() - 20);
						knight.SetAnimation("HeadlessKnightL", 10);
						knightSummon.SetY(-1000);
					}
				}
				else if (knightSummonedcd3 == 0 && knightSummoned1 && knightSummoned2 && knightSummoned3 && !knightSummoned4)
				{
					knightSummoned4 = true;
					knightSummonedcd3 = 50;

					if (m_side == RIGHT)
					{
						player_summons.SetPosition(m_player.GetX() - 10, m_player.GetY() + 35);
						player_summons.SetAnimation("player_summons2R", 10);
						knight.SetY(-1000);
					}
					else if (m_side == LEFT)
					{
						player_summons.SetPosition(m_player.GetX(), m_player.GetY() + 35);
						player_summons.SetAnimation("player_summons2L", 10);
						knight.SetY(-1000);
					}
				}
				else if (knightSummonedcd3 == 0 && knightSummoned4)
				{
					knightSummoned = false;
					knightSummoned1 = false;
					knightSummoned2 = false;
					knightSummoned3 = false;
					knightSummoned4 = false;

					m_player.UnDelete();
					player_summons.SetY(-1000);
				}

				if (m_side == RIGHT)
				{
					if (knightSummonedcd3 == 20)
					{
						knightHitbox.SetPosition(knight.GetX() + 110, knight.GetY() - 30);
					}
					else
					{
						knightHitbox.SetY(-1000);
					}
				}
				else if (m_side == LEFT)
				{
					if (knightSummonedcd3 == 20)
					{
						knightHitbox.SetPosition(knight.GetX() - 110, knight.GetY() - 30);
					}
					else
					{
						knightHitbox.SetY(-1000);
					}
				}
			}
		}
	}

	//*********** PLAYER GIVE DAMAGE **************

	for (CSprite* atk1fx : atkfxList)
	{
		for (CSprite* pSprite : m_sprites)
		{
			if ((string)pSprite->GetProperty("tag") == "mage")
			{
				if (hitbox.HitTest(pSprite) && damagecd == 0)
				{
					pSprite->SetHealth(pSprite->GetHealth() - playerDamage);
					damagecd = 30;
				}

				if (pSprite->GetHealth() <= 0)
				{
					pSprite->Delete();
				}
			}
		}
	}

	for (CSprite* pSprite : m_sprites)
		if ((string)pSprite->GetProperty("tag") == "reaper")
		{
			if (hitbox.HitTest(pSprite))
			{
				enemyIsDamaged = true;
				if (enemyIsDamaged == true)
				{
					hitbox.SetY(-1000);
					reaperHealth -= playerDamage;
					enemyIsDamaged = false;
				}
			}
			if (knightHitbox.HitTest(pSprite))
			{
				enemyIsDamaged = true;
				if (enemyIsDamaged == true)
				{
					knightHitbox.SetY(-1000);
					reaperHealth -= playerDamage;
					enemyIsDamaged = false;
				}
			}
		}

	for (CSprite* pSprite : m_sprites)
		if ((string)pSprite->GetProperty("tag") == "witch")
		{
			if (hitbox.HitTest(pSprite))
			{
				enemyIsDamaged = true;
				if (enemyIsDamaged == true)
				{
					hitbox.SetY(-1000);
					witchHealth -= playerDamage;
					enemyIsDamaged = false;
				}
			}
			if (knightHitbox.HitTest(pSprite))
			{
				enemyIsDamaged = true;
				if (enemyIsDamaged == true)
				{
					knightHitbox.SetY(-1000);
					witchHealth -= playerDamage;
					enemyIsDamaged = false;
				}
			}
		}

	//*********** PLAYER TAKE DAMAGE **************
	m_player.SetHealth(playerHealth);

	player_HealthBar.SetPosition(680, 550);

	if (level != 2 && part != 2)
	{

		if (playerHealth == 360)
		{
			player_HealthBar.SetImage("SwordHealth1");
		}
		else if (playerHealth == 330)
		{
			player_HealthBar.SetImage("SwordHealth2");
		}
		else if (playerHealth == 300)
		{
			player_HealthBar.SetImage("SwordHealth3");
		}
		else if (playerHealth == 270)
		{
			player_HealthBar.SetImage("SwordHealth4");
		}
		else if (playerHealth == 240)
		{
			player_HealthBar.SetImage("SwordHealth5");
		}
		else if (playerHealth == 210)
		{
			player_HealthBar.SetImage("SwordHealth6");
		}
		else if (playerHealth == 180)
		{
			player_HealthBar.SetImage("SwordHealth7");
		}
		else if (playerHealth == 150)
		{
			player_HealthBar.SetImage("SwordHealth8");
		}
		else if (playerHealth == 120)
		{
			player_HealthBar.SetImage("SwordHealth9");
		}
		else if (playerHealth == 90)
		{
			player_HealthBar.SetImage("SwordHealth10");
		}
		else if (playerHealth == 45)
		{
			player_HealthBar.SetImage("SwordHealth11");
		}
		else if (playerHealth == 0)
		{
			player_HealthBar.SetImage("SwordHealth12");
		}


		if (m_player.HitTest(&enemyHitbox))
		{
			isDamaged = true;
			if (isDamaged == true)
			{
				enemyHitbox.SetY(-1000);
				playerHealth -= 20;
				isDamaged = false;
			}
		}

		if (m_player.HitTest(&purplefireball) && level == 3)
		{
			isDamaged = true;
			if (isDamaged == true)
			{
				purplefireball.SetY(-1000);
				playerHealth -= 20;
				isDamaged = false;
			}
		}

		for (CSprite* fireball : spellList)
		{
			if (m_player.HitTest(fireball))
			{
				isDamaged = true;
				if (isDamaged == true)
				{
					fireball->Delete();
					playerHealth -= 10;
					isDamaged = false;
				}
			}
		}

		for (CSprite* arrowR : arrowRList)
		{
			if (m_player.HitTest(arrowR))
			{
				isDamaged = true;
				if (isDamaged == true)
				{
					arrowR->Delete();
					playerHealth -= 10;
					isDamaged = false;
				}
			}
		}

		for (CSprite* arrowL : arrowLList)
		{
			if (m_player.HitTest(arrowL))
			{
				isDamaged = true;
				if (isDamaged == true)
				{
					arrowL->Delete();
					playerHealth -= 10;
					isDamaged = false;
				}
			}
		}

		for (CSprite* barrel : barrelList)
		{
			if (m_player.HitTest(barrel))
			{
				isDamaged = true;
				if (isDamaged == true)
				{
					barrel->SetY(-1000);
					barrel->Delete();
					playerHealth -= 10;
					isDamaged = false;
				}
			}
		}
	}



	//*********** PLAYER MANA USAGE **************

	player_ManaBar.SetPosition(680, 470);

	if (playerMana == 100)
	{
		player_ManaBar.SetImage("ManaBar1");
		playerManaZero = false;
		playerMana20 = false;
		playerManaRecover = false;
	}
	else if (playerMana == 90)
	{
		player_ManaBar.SetImage("ManaBar2");
		playerManaZero = false;
		playerMana20 = false;
	}
	else if (playerMana == 80)
	{
		player_ManaBar.SetImage("ManaBar3");
		playerManaZero = false;
		playerMana20 = false;
	}
	else if (playerMana == 70)
	{
		player_ManaBar.SetImage("ManaBar4");
		playerManaZero = false;
		playerMana20 = false;
	}
	else if (playerMana == 60)
	{
		player_ManaBar.SetImage("ManaBar5");
		playerManaZero = false;
		playerMana20 = false;
	}
	else if (playerMana == 50)
	{
		player_ManaBar.SetImage("ManaBar6");
		playerManaZero = false;
		playerMana20 = false;
	}
	else if (playerMana == 40)
	{
		player_ManaBar.SetImage("ManaBar7");
		playerManaZero = false;
		playerMana20 = false;
	}
	else if (playerMana == 30)
	{
		player_ManaBar.SetImage("ManaBar8");
		playerManaZero = false;
		playerMana20 = false;
	}
	else if (!playerMana20 && playerMana == 20)
	{
		player_ManaBar.SetAnimation("ManaBar9", 5);
		playerManaZero = false;
		playerMana20 = true;
	}
	else if (playerMana == 10)
	{
		player_ManaBar.SetImage("ManaBar10");
		playerManaZero = false;
		playerMana20 = false;
	}
	else if (playerMana == 0 && !playerManaZero)
	{
		playerManaRecover = true;
		playerManaZero = true;
		playerMana20 = false;
		player_ManaBar.SetAnimation("ManaBar11", 5);
	}

	if (playerMana < 100 && playerManaRecover)
	{
		playerMana++;
	}



	arrowRList.delete_if(deleted);
	arrowLList.delete_if(deleted);
	barrelList.delete_if(deleted);
	atkfxList.delete_if(deleted);
	spellList.delete_if(deleted);
}


CMyGame::~CMyGame(void)
{
	// TODO: add destruction code here
}

/////////////////////////////////////////////////////
// Per-Frame Callback Funtions (must be implemented!)

void CMyGame::OnUpdate()
{

	// do not run game logic when in menu mode
	if (IsMenuMode()) return;

	Uint32 t = GetTime();
	Uint32 dt = GetDeltaTime();

	PlayerControls();

	if (level == 1 && part == 1)
	{
		for (CSprite* barrel : barrelList)
		{
			CVector barrelGravity = barrel->GetVelocity();
			barrelGravity.m_y -= 10;
			barrel->SetVelocity(barrelGravity);

			barrel->SetOmega(-3.82 * 100);

			for (CSprite* pSprite : m_sprites)
			{
				if ((string)pSprite->GetProperty("tag") == "platform")
				{
					CVector v = barrel->GetVelocity() * dt / 1000;
					float alpha = DEG2RAD(pSprite->GetRotation());
					CVector t = pSprite->GetPos() - barrel->GetPos();
					float Y = pSprite->GetHeight() / 2;
					float X = pSprite->GetWidth() / 2;
					float r = barrel->GetHeight() / 2;

					CVector nt = CVector(sin(alpha), cos(alpha));

					if (Dot(v, nt) < 0)
					{
						//top
						float vyt = Dot(v, nt);
						CVector dt = t + (Y + r) * nt;
						float dyt = Dot(dt, nt);
						float f1t = dyt / vyt;
						float vxt = Cross(v, nt);
						float dxt = Cross(t, nt);
						float f2t = (dxt - vxt * f1t) / (X + r);

						if (f1t >= 0 && f1t <= 1 && f2t >= -1 && f2t <= 1)
						{
							barrel->SetVelocity(0.9 * Reflect(barrel->GetVelocity(), nt));
						}
					}
				}
			}
		}

		for (CSprite* pSprite : m_sprites)
			if ((string)pSprite->GetProperty("tag") == "mage")
			{
				//for player to go forward when enemy is dead
				if (m_player.GetX() > 790 && pSprite->IsDeleted())
				{
					Lvl1Part2();
					cutscene = true;
				}
			}

		// ---- fireballs ai -----
		for (CSprite* fireball : spellList)
		{
			if (fireball->GetY() < 250)
			{
				fireball->SetDirection(fireball->GetDirection());
				fireball->SetRotation(fireball->GetRotation());
			}
			else
			{
				fireball->SetDirection(m_player.GetPosition() - fireball->GetPosition());
				fireball->SetRotation(fireball->GetDirection() + 180);
			}
		}

		for (CSprite* fireball : spellList)
		{
			if ((fireball->GetY() < -10 || fireball->GetX() < -10 || fireball->GetX() > 810))
			{
				fireball->Delete();
			}
		}

		for (CSprite* pSprite : m_sprites)
			if ((string)pSprite->GetProperty("tag") == "mage")
			{
				//spawnes fireballs and barrels for level 1
				if (rand() % 100 == 0 && !pSprite->IsDeleted())
				{
					CSprite* fireball = new CSprite(30 + rand() % 740, 610, 0, 0, GetTime());
					fireball->AddImage("fireball.png", "fireball", 36, 1, 0, 0, 35, 0);
					fireball->SetAnimation("fireball", 10);
					fireball->SetSpeed(300);
					spellList.push_back(fireball);
				}
				if (rand() % 250 == 0 && !pSprite->IsDeleted())
				{
					CSprite* barrel = new CSprite(810, 150 + rand() % 150, 0, 0, GetTime());
					barrel->LoadImage("barrel.png");
					barrel->SetImage("barrel.png");
					barrel->Accelerate(-200, 0);
					barrelList.push_back(barrel);
				}
			}
	}


	if ((level == 1 && part == 2) && cutscene)
	{
		if (m_player.GetX() < 150)
		{
			m_player.Accelerate(300, 0);
			m_player.SetAnimation("run_right");
		}
		else
		{
			if (!playerGotPower)
			{
				m_player.SetVelocity(0, 0);
				m_player.Accelerate(0, 0);
				m_player.SetImage("stand_right");
			}
			else
			{
				m_player.SetVelocity(0, 0);
				m_player.Accelerate(0, 0);
				m_player.SetImage("stand_right1");
			}
		}

		for (CSprite* pSprite : m_sprites)
		{
			if ((string)pSprite->GetProperty("tag") == "witch")
			{
				if (level == 1 && part == 2)
					talkScene = true;

				if (pSprite->GetX() < 550 && !witchAtk)
				{
					witchTalk = true;

					pSprite->SetVelocity(0, 0);
				}

				if (witchTalkcd != 0)
				{
					Wtextbox.SetImage("witch_textbox");
					Wtextbox.SetPosition(pSprite->GetX() - 70, pSprite->GetY() + 100);
				}
				else
					Wtextbox.SetY(-1000);

				if (witchTalk && witchTalkcd == 0)
				{
					witchTalkcd = 300;
					witchTalk = false;
					witchAtk = true;
				}

				if (witchTalkcd == 0 && !witchTalk && witchAtk && talkScene && witchAtkcd == 0 && !witchCutsceneAtk)
				{
					witchAtkcd = 50;
					talkScene = false;
				}

				if (!talkScene && witchAtkcd != 0 && !witchCutsceneAtk)
				{
					witchCutsceneAtk = true;
					pSprite->SetAnimation("witch_atk1R", 10);

					witchCutsceneAtkcd = 25;
				}
				else if (witchCutsceneAtk && witchCutsceneAtkcd == 0)
				{
					pSprite->SetAnimation("witch_flyR", 10);
				}
			}

			if ((string)pSprite->GetProperty("tag") == "witch")
			{
				if (witchCutsceneAtk && !witchPurpleFireBall)
				{
					witchPurpleFireBall = true;
					purplefireball.SetAnimation("purplefireballR");
					purplefireball.SetPosition(450, 400);
					purplefireball.SetDirection(m_player.GetPosition() - purplefireball.GetPosition());
					purplefireball.SetRotation(purplefireball.GetDirection() + 90);
					purplefireball.SetSpeed(300);
				}

				if (m_player.HitTest(&purplefireball))
				{
					blackscreen.SetImage("blackscreen");
					blackscreen.SetPosition(400, 300);

					purplefireball.SetY(-1000);

					pSprite->Delete();

					blackscreencd = 100;
				}

				if (blackscreencd == 0 && !rabbitAppears)
				{
					rabbitAppears = true;
					blackscreen.SetY(-1000);

					player_thoughts = 170;
				}


				if (player_thoughts != 0)
				{
					Ptextbox.SetPosition(m_player.GetX() + 90, m_player.GetY() + 60);
					Ptextbox.SetImage("player_thoughts");
				}
				else
				{
					Ptextbox.SetY(-1000);
				}

			}

			if (rabbitAppears)
			{

				if ((string)pSprite->GetProperty("tag") == "rabbit")
				{
					if (pSprite->GetX() < 550 && !rabbitStopped)
					{
						rabbitTalk1 = true;
						rabbitStopped = true;
						rabbitTalk = true;
					}
					else
					{
						pSprite->SetVelocity(-100, 0);
					}

					if (rabbitStopped)
					{
						pSprite->SetVelocity(0, 0);
						pSprite->SetAnimation("rabbit_standL", 10);
					}

					if (rabbitTalk)
					{
						if (rabbitTalk1 && !rabbitTalk2 && !rabbitTalk3 && !rabbitTalk4)
						{
							Rtextbox.SetImage("rabbit_talk1");
							Rtextbox.SetPosition(pSprite->GetX() - 140, pSprite->GetY() + 90);

							rabbitTalk1cd = 600;
							rabbitTalk1 = false;
							rabbitTalk2 = true;
						}

						if (rabbitTalk1cd == 0 && rabbitTalk2 && !rabbitTalk1 && !rabbitTalk3 && !rabbitTalk4)
						{
							Rtextbox.SetImage("rabbit_talk2");
							Rtextbox.SetPosition(pSprite->GetX() - 140, pSprite->GetY() + 90);

							rabbitTalk2cd = 600;
							rabbitTalk2 = false;
							rabbitTalk3 = true;
						}

						if (!playerGotPower && rabbitTalk2cd == 0 && rabbitTalk3 && !rabbitTalk1 && !rabbitTalk2 && !rabbitTalk4)
						{
							m_player.SetY(-1000);
							player_GetsPower.SetPosition(140, 150);
							player_GetsPower.SetAnimation("player_GetsPower", 7);

							playerGetsPowercd = 60;
							playerGotPower = true;
						}

						if (playerGetsPowercd == 0 && playerGotPower && rabbitTalk3 && !rabbitTalk1 && !rabbitTalk2 && !rabbitTalk4)
						{
							player_GetsPower.SetY(-1000);
							m_player.SetY(115);
							m_player.SetImage("stand_right1");

							Rtextbox.SetImage("rabbit_talk3");
							Rtextbox.SetPosition(pSprite->GetX() - 140, pSprite->GetY() + 90);

							rabbitTalk3cd = 600;
							rabbitTalk3 = false;
							rabbitTalk4 = true;
						}

						if (rabbitTalk3cd == 0 && rabbitTalk4 && !rabbitTalk1 && !rabbitTalk2 && !rabbitTalk3)
						{
							Rtextbox.SetImage("rabbit_talk4");
							Rtextbox.SetPosition(pSprite->GetX() - 140, pSprite->GetY() + 90);

							rabbitTalk4cd = 300;
							rabbitTalk4 = false;
						}

						if (rabbitTalk4cd == 0 && !rabbitTalk1 && !rabbitTalk2 && !rabbitTalk3 && !rabbitTalk4)
						{
							rabbitTalk = false;
							cutscene = false;

							Rtextbox.SetY(-1000);
						}
					}
				}
			}
		}
	}

	if (level == 1 && part == 2)
	{
		if (m_player.GetX() > 790)
		{
			Lvl2Part1();

			Rtextbox.SetY(-1000);

			for (CSprite* pSprite : m_sprites)
				if ((string)pSprite->GetProperty("tag") == "rabbit")
				{
					pSprite->Delete();
					pSprite->SetY(-1000);
				}
		}
	}

	if (level == 2 && part == 1)
	{

		for (CSprite* pSprite : m_sprites)
			if ((string)pSprite->GetProperty("tag") == "archerR1")
			{
				if (pSprite->GetCurrentAnimationFrame() == 11 && arrowR1cd == 0)
				{
					CSprite* arrowR = new CSprite(pSprite->GetX(), pSprite->GetY() + 1, 0, 0, GetTime());
					arrowR->LoadImage("arrow.png");
					arrowR->SetImage("arrow.png");
					arrowR->Accelerate(-700, 0);
					arrowR->SetRotation(arrowR->GetRotation() - 3);
					arrowRList.push_back(arrowR);

					arrowR1cd = 10;
				}
			}

		for (CSprite* pSprite : m_sprites)
			if ((string)pSprite->GetProperty("tag") == "archerR2")
			{
				if (pSprite->GetCurrentAnimationFrame() == 11 && arrowR2cd == 0)
				{
					CSprite* arrowR = new CSprite(pSprite->GetX(), pSprite->GetY() + 1, 0, 0, GetTime());
					arrowR->LoadImage("arrow.png");
					arrowR->SetImage("arrow.png");
					arrowR->Accelerate(-500, 0);
					arrowR->SetRotation(arrowR->GetRotation() - 10);
					arrowRList.push_back(arrowR);

					arrowR2cd = 15;
				}
			}
		for (CSprite* pSprite : m_sprites)
			if ((string)pSprite->GetProperty("tag") == "archerL")
			{
				if (pSprite->GetCurrentAnimationFrame() == 11 && arrowLcd == 0)
				{
					CSprite* arrowL = new CSprite(pSprite->GetX(), pSprite->GetY(), 0, 0, GetTime());
					arrowL->LoadImage("arrow.png");
					arrowL->SetImage("arrow.png");
					arrowL->Accelerate(600, 0);
					arrowL->SetRotation(180);
					arrowLList.push_back(arrowL);

					arrowLcd = 15;
				}
			}

		for (CSprite* pSprite : m_sprites)
			if ((string)pSprite->GetProperty("tag") == "archerR1")
			{
				for (CSprite* arrowR : arrowRList)
				{
					CVector arrowRGravity = arrowR->GetVelocity();
					arrowRGravity.m_y -= 10;
					arrowR->SetVelocity(arrowRGravity);

					arrowR->SetOmega(-0.82 * 100);
				}
			}

		for (CSprite* pSprite : m_sprites)
			if ((string)pSprite->GetProperty("tag") == "archerR2")
			{
				for (CSprite* arrowR : arrowRList)
				{
					CVector arrowRGravity = arrowR->GetVelocity();
					arrowRGravity.m_y -= 10;
					arrowR->SetVelocity(arrowRGravity);

					arrowR->SetOmega(-0.82 * 100);
				}
			}

		for (CSprite* pSprite : m_sprites)
			if ((string)pSprite->GetProperty("tag") == "archerL")
			{
				for (CSprite* arrowL : arrowLList)
				{
					CVector arrowLGravity = arrowL->GetVelocity();
					arrowLGravity.m_y -= 10;
					arrowL->SetVelocity(arrowLGravity);

					arrowL->SetOmega(0.5 * 100);
				}
			}

		for (CSprite* arrowL : arrowLList)
		{
			if ((arrowL->GetY() < -10 || arrowL->GetX() < -10 || arrowL->GetX() > 810))
			{
				arrowL->Delete();
			}
		}

		for (CSprite* arrowR : arrowRList)
		{
			if ((arrowR->GetY() < -10 || arrowR->GetX() < -10 || arrowR->GetX() > 810))
			{
				arrowR->Delete();
			}
		}

		if (m_player.GetX() > 790)
		{
			level = 2;
			part = 2;

			if (level == 2 && part == 2)
			{
				Lvl2Part2();
				for (CSprite* pSprite : m_sprites)
					if ((string)pSprite->GetProperty("tag") == "archerL")
					{
						pSprite->Delete();
						pSprite->SetY(-1000);
					}

				for (CSprite* pSprite : m_sprites)
					if ((string)pSprite->GetProperty("tag") == "archerR1")
					{
						pSprite->Delete();
						pSprite->SetY(-1000);
					}

				for (CSprite* pSprite : m_sprites)
					if ((string)pSprite->GetProperty("tag") == "archerR2")
					{
						pSprite->Delete();
						pSprite->SetY(-1000);
					}
			}
		}
	}

	for (CSprite* pSprite : m_sprites)
		if ((string)pSprite->GetProperty("tag") == "reaper")
		{

			if (level == 2 && part == 2 && !reaperDead)
			{

				if (!OpenHealthAnim && Healthcd == 0)
				{
					OpenHealthAnim = true;
					Healthcd = 50;

					enemy_HealthBarAnim.SetPosition(400, 550);
					enemy_HealthBarAnim.SetAnimation("OpenAnimForHealth", 7);
				}

				if (enemy_HealthBarAnim.GetCurrentAnimationFrame() == 18)
				{
					enemy_HealthBarAnim.Delete();
					enemy_HealthBar.SetPosition(400, 550);
					enemy_HealthBar.SetImage("EnemyHealth1");
				}

				for (CSprite* pSprite : m_sprites)
					if ((string)pSprite->GetProperty("tag") == "reaper")
					{
						if (reaperHealth == 500)
						{
							enemy_HealthBar.SetImage("EnemyHealth1");
						}
						else if (reaperHealth <= 438 && reaperHealth >= 377)
						{
							enemy_HealthBar.SetImage("EnemyHealth2");
						}
						else if (reaperHealth <= 376 && reaperHealth >= 315)
						{
							enemy_HealthBar.SetImage("EnemyHealth3");
						}
						else if (reaperHealth <= 314 && reaperHealth >= 253)
						{
							enemy_HealthBar.SetImage("EnemyHealth4");
						}
						else if (reaperHealth <= 252 && reaperHealth >= 191)
						{
							enemy_HealthBar.SetImage("EnemyHealth5");
						}
						else if (reaperHealth <= 190 && reaperHealth >= 129)
						{
							enemy_HealthBar.SetImage("EnemyHealth6");
						}
						else if (reaperHealth <= 128 && reaperHealth >= 1)
						{
							enemy_HealthBar.SetImage("EnemyHealth7");
						}
						if (reaperHealth <= 0)
						{
							enemy_HealthBar.SetImage("EnemyHealth8");
							pSprite->SetY(-1000);
							reaperDead = true;
						}


						if (m_player.GetX() > pSprite->GetX())
						{
							reaper_side = REAPER_LEFT;
						}
						if (m_player.GetX() < pSprite->GetX())
						{
							reaper_side = REAPER_RIGHT;
						}

						CVector displ = m_player.GetPosition() - pSprite->GetPosition();
						float distance = hypot(displ.GetX(), displ.GetY());

						if (distance > 100 && !reaperGravityAtk && !reaperAtk)
						{
							if (rand() % 100 == 0)
							{
								pSprite->SetVelocity(100, 0);
								pSprite->SetDirection(m_player.GetPosition() - pSprite->GetPosition());
							}
						}
						else
						{
							pSprite->SetVelocity(0, 0);
						}

						if (distance < 100 && !reaperGravityAtk && !reaperAtk && !knightSummoned && !reaperFightMode && reaperAtkcd1 == 0)
						{
							reaperFightMode = true;
						}
						else
						{
							reaperFightMode = false;
						}

						if (rand() % 800 == 0 && !reaperGravityAtk && !reaperAtk && !knightSummoned)
						{
							reaperGravityAtk = true;
							GravityBallSpwanedcd = 200;
						}

						if (reaperFightMode)
						{
							if (!reaperAtk)
							{
								reaperAtkcd = 70;
								reaperAtk = true;

								if (reaper_side == REAPER_RIGHT)
									pSprite->SetAnimation("reaper_atkR", 10);
								else if (reaper_side == REAPER_LEFT)
									pSprite->SetAnimation("reaper_atkL", 10);
							}
						}

						if (reaper_side == REAPER_RIGHT)
						{
							if (reaperAtkcd == 60)
							{
								enemyHitbox.SetPosition(pSprite->GetX() - 80, pSprite->GetY() - 20);
								enemyHitbox.SetRotation(45);
							}
							else
							{
								enemyHitbox.SetY(-1000);
							}
						}
						else if (reaper_side == REAPER_LEFT)
						{
							if (reaperAtkcd == 60)
							{
								enemyHitbox.SetPosition(pSprite->GetX() + 80, pSprite->GetY() - 20);
								enemyHitbox.SetRotation(315);
							}
							else
							{
								enemyHitbox.SetY(-1000);
							}
						}

						if (reaperAtk && reaperAtkcd == 0)
						{
							reaperAtkcd1 = 300;
							reaperAtk = false;
							if (reaper_side == REAPER_RIGHT)
								pSprite->SetAnimation("reaper_standR", 10);
							else if (reaper_side == REAPER_LEFT)
								pSprite->SetAnimation("reaper_standL", 10);
						}


						if (reaperGravityAtk && GravityBallSpwanedcd != 0)
						{
							pSprite->SetVelocity(0, 0);
							pSprite->SetPosition(370, 500);

							GravityBallShowed = true;

							if (GravityBallShowed && GravityBallSpwanedcd1 == 0)
							{
								GravityBallSpwanedcd1 = 200;

								gravityball.SetPosition(400, 300);
								gravityball.SetAnimation("gravityball", 10);
							}

							if (m_player.HitTest(&gravityball) && GravityBallDamagecd == 0)
							{
								GravityBallDamagecd = 10;
								m_player.SetHealth(playerHealth -= 1);
							}

							if (!knightSummoned)
							{
								if (m_player.GetX() <= gravityball.GetX())
								{
									if (m_player.GetY() <= gravityball.GetY())
									{
										CVector playerGravity = m_player.GetVelocity();
										playerGravity.m_y += 90;
										playerGravity.m_x += 90;
										m_player.SetVelocity(playerGravity);
									}
									else if (m_player.GetY() >= gravityball.GetY())
									{
										CVector playerGravity = m_player.GetVelocity();
										playerGravity.m_y -= 90;
										playerGravity.m_x += 90;
										m_player.SetVelocity(playerGravity);
									}
								}
								else if (m_player.GetX() >= gravityball.GetX())
								{
									if (m_player.GetY() <= gravityball.GetY())
									{
										CVector playerGravity = m_player.GetVelocity();
										playerGravity.m_y += 70;
										playerGravity.m_x -= 70;
										m_player.SetVelocity(playerGravity);
									}
									else if (m_player.GetY() >= gravityball.GetY())
									{
										CVector playerGravity = m_player.GetVelocity();
										playerGravity.m_y -= 70;
										playerGravity.m_x -= 70;
										m_player.SetVelocity(playerGravity);
									}
								}
							}
						}
						else
						{
							reaperGravityAtk = false;
							gravityball.SetY(-1000);
						}
					}
			}
		}


	if (level == 3)
	{
		for (CSprite* pSprite : m_sprites)
			if ((string)pSprite->GetProperty("tag") == "witch")
			{

				if (witchDead)
				{
					gamewon = true;
					GameOver();
				}


				if (!OpenHealthAnim && Healthcd == 0)
				{
					OpenHealthAnim = true;
					Healthcd = 50;

					enemy_HealthBarAnim.SetPosition(400, 550);
					enemy_HealthBarAnim.SetAnimation("OpenAnimForHealth", 7);
				}

				if (enemy_HealthBarAnim.GetCurrentAnimationFrame() == 18)
				{
					enemy_HealthBarAnim.Delete();
					enemy_HealthBar.SetPosition(400, 550);
					enemy_HealthBar.SetImage("EnemyHealth1");
				}

				
				if (witchHealth == 500)
				{
					enemy_HealthBar.SetImage("EnemyHealth1");
				}
				else if (witchHealth <= 438 && witchHealth >= 377)
				{
					enemy_HealthBar.SetImage("EnemyHealth2");
				}
				else if (witchHealth <= 376 && witchHealth >= 315)
				{
					enemy_HealthBar.SetImage("EnemyHealth3");
				}
				else if (witchHealth <= 314 && witchHealth >= 253)
				{
					enemy_HealthBar.SetImage("EnemyHealth4");
				}
				else if (witchHealth <= 252 && witchHealth >= 191)
				{
					enemy_HealthBar.SetImage("EnemyHealth5");
				}
				else if (witchHealth <= 190 && witchHealth >= 129)
				{
					enemy_HealthBar.SetImage("EnemyHealth6");
				}
				else if (witchHealth <= 128 && witchHealth >= 1)
				{
					enemy_HealthBar.SetImage("EnemyHealth7");
				}
				if (witchHealth <= 0)
				{
					witchDead = true;
					pSprite->SetY(-1000);
					enemy_HealthBar.SetImage("EnemyHealth8");
				}

				if (m_player.GetX() > pSprite->GetX())
				{
					witch_side = WITCH_LEFT;
				}
				if (m_player.GetX() < pSprite->GetX())
				{
					witch_side = WITCH_RIGHT;
				}

				CVector displ = m_player.GetPosition() - pSprite->GetPosition();
				float distance = hypot(displ.GetX(), displ.GetY());

				if (distance > 200 && !witchAtk)
				{
					if (rand() % 100 == 0)
					{
						pSprite->SetVelocity(100, 0);
						pSprite->SetDirection(m_player.GetPosition() - pSprite->GetPosition());
					}
				}
				else
				{
					pSprite->SetVelocity(0, 0);
				}

				if (distance < 200 && !witchAtk && !knightSummoned && !witchFightMode && witchAtk1cd == 0)
				{
					witchFightMode = true;
				}

				if (witchFightMode)
				{
					if (!witchAtk)
					{
						witchAtkcd = 50;
						witchAtk = true;

						cout << "0000000000000000000000000000000000000" << endl;

						if (witch_side == WITCH_RIGHT)
						{
							pSprite->SetAnimation("witch_atk1R");
							purplefireball.SetAnimation("purplefireballR");
							purplefireball.SetPosition(pSprite->GetX(), pSprite->GetY());
							purplefireball.SetDirection(m_player.GetPosition() - purplefireball.GetPosition());
							purplefireball.SetRotation(purplefireball.GetDirection() + 90);
							purplefireball.SetSpeed(300);
						}
						else if (witch_side == WITCH_LEFT)
						{
							pSprite->SetAnimation("witch_atk1L");
							purplefireball.SetAnimation("purplefireballL");
							purplefireball.SetPosition(pSprite->GetX(), pSprite->GetY());
							purplefireball.SetDirection(m_player.GetPosition() - purplefireball.GetPosition());
							purplefireball.SetRotation(purplefireball.GetDirection() - 90);
							purplefireball.SetSpeed(300);
						}
					}
				}

				cout << "witchAtkcd ======================================= " << witchAtkcd << endl;

				cout<<"witchAtk1cd ====== " << witchAtk1cd << endl;

				if (witchAtk && witchAtkcd == 0)
				{
					witchAtk1cd = 100;
					witchAtk = false;
					witchFightMode = false;
					if (witch_side == WITCH_RIGHT)
						pSprite->SetAnimation("witch_flyR", 10);
					else if (witch_side == WITCH_LEFT)
						pSprite->SetAnimation("witch_flyL", 10);
				}
			}
	}

	// Pre-Update Position
	CVector v0 = m_player.GetPos();

	// Updates
	for (CSprite* pSprite : m_sprites)
		pSprite->Update(t);
	for (CSprite* fireball : spellList)
		fireball->Update(t);
	for (CSprite* arrowR : arrowRList)
		arrowR->Update(t);
	for (CSprite* arrowL : arrowLList)
		arrowL->Update(t);
	purplefireball.Update(t);
	for (CSprite* barrel : barrelList)
		barrel->Update(t);
	for (CSprite* atk1fx : atkfxList)
		atk1fx->Update(t);

	m_player.Update(t);
	player_summons.Update(t);
	knight.Update(t);
	knightSummon.Update(t);
	blackscreen.Update(t);
	Wtextbox.Update(t);
	Rtextbox.Update(t);
	Ptextbox.Update(t);
	player_GetsPower.Update(t);
	gravityball.Update(t);
	hitbox.Update(t);
	knightHitbox.Update(t);
	enemyHitbox.Update(t);
	enemy_HealthBar.Update(t);
	enemy_HealthBarAnim.Update(t);
	player_ManaBar.Update(t);

	//for player to not get out of the screen
	for (CSprite* pSprite : m_sprites)
		if ((string)pSprite->GetProperty("tag") == "mage")
		{
			//for player to not go forward until enemy is dead
			if (m_player.GetX() > 790 && !pSprite->IsDeleted())
			{
				m_player.SetVelocity(0, 0);
				m_player.SetPos(v0);
			}
		}
	if (m_player.GetX() < 10)
	{
		m_player.SetVelocity(0, 0);
		m_player.SetPos(v0);
	}

	if (level == 2 && part == 2)
	{
		if (reaperDead)
		{
			if (m_player.GetX() > 790)
			{
				Lvl3();
			}
		}
		else
		{
			if (m_player.GetX() > 790)
			{
				m_player.SetVelocity(0, 0);
				m_player.SetPos(v0);
			}
		}
	}

	if (level == 3)
	{
		if (m_player.GetX() > 790)
		{
			m_player.SetVelocity(0, 0);
			m_player.SetPos(v0);
		}
	}

	if (level == 2 && part == 1)
	{
		if (m_player.GetX() < 100)
		{
			m_player.SetVelocity(0, 0);
			m_player.SetPos(v0);
		}
	}


	if (m_player.GetHealth() <= 0)
	{
		GameOver();
		PauseGame();
	}


	int h = m_player.GetHeight() / 2 - 1;
	bool bTouchingPlatform = false;
	for (CSprite* pSprite : m_sprites)
		if (m_player.HitTest(pSprite, 0))
		{
			//platform and walls
			if ((string)pSprite->GetProperty("tag") == "platform")
			{
				if (v0.m_y >= pSprite->GetTop() + h)
				{
					m_player.SetVelocity(0, 0);
					m_player.SetY(pSprite->GetTop() + h);
					bTouchingPlatform = true;
				}
			}
		}

	if (!playerGotPower)
	{
		if (m_state == AIRBORNE && bTouchingPlatform)
		{
			//landing
			m_state = STANDING;
			m_player.SetImage(m_side == LEFT ? "stand_left" : "stand_right");
		}
		if (m_state != AIRBORNE && !bTouchingPlatform)
		{
			//jumping
			m_state = AIRBORNE;
			m_player.SetImage(m_side == LEFT ? "jump_left" : "jump_right");
		}
	}
	else
	{
		if (m_state == AIRBORNE && bTouchingPlatform)
		{
			//landing
			m_state = STANDING;
			m_player.SetImage(m_side == LEFT ? "stand_left1" : "stand_right1");
		}
		if (m_state != AIRBORNE && !bTouchingPlatform)
		{
			//jumping
			m_state = AIRBORNE;
			m_player.SetImage(m_side == LEFT ? "jump_left1" : "jump_right1");
		}
	}

	arrowRList.delete_if(deleted);
	arrowLList.delete_if(deleted);
	barrelList.delete_if(deleted);
	atkfxList.delete_if(deleted);
	spellList.delete_if(deleted);


	if (jumpcd > 0)
	{
		jumpcd--;
	}

	if (attackcd > 0)
	{
		attackcd--;
	}

	if (damagecd > 0)
	{
		damagecd--;
	}

	if (witchAtkcd > 0)
	{
		witchAtkcd--;
	}

	if (witchTalkcd > 0)
	{
		witchTalkcd--;
	}

	if (witchCutsceneAtkcd > 0)
	{
		witchCutsceneAtkcd--;
	}

	if (blackscreencd > 0)
	{
		blackscreencd--;
	}

	if (rabbitTalk1cd > 0)
	{
		rabbitTalk1cd--;
	}

	if (rabbitTalk2cd > 0)
	{
		rabbitTalk2cd--;
	}

	if (rabbitTalk3cd > 0)
	{
		rabbitTalk3cd--;
	}

	if (rabbitTalk4cd > 0)
	{
		rabbitTalk4cd--;
	}

	if (playerGetsPowercd > 0)
	{
		playerGetsPowercd--;
	}

	if (arrowLcd > 0)
	{
		arrowLcd--;
	}

	if (arrowR1cd > 0)
	{
		arrowR1cd--;
	}

	if (arrowR2cd > 0)
	{
		arrowR2cd--;
	}

	if (GravityBallSpwanedcd > 0)
	{
		GravityBallSpwanedcd--;
	}

	if (GravityBallDamagecd > 0)
	{
		GravityBallDamagecd--;
	}

	if (GravityBallSpwanedcd1 > 0)
	{
		GravityBallSpwanedcd1--;
	}

	if (reaperAtkcd > 0)
	{
		reaperAtkcd--;
	}

	if (knightSummonedcd1 > 0)
	{
		knightSummonedcd1--;
	}

	if (knightSummonedcd2 > 0)
	{
		knightSummonedcd2--;
	}

	if (knightSummonedcd3 > 0)
	{
		knightSummonedcd3--;
	}

	if (Healthcd > 0)
	{
		Healthcd--;
	}

	if (reaperAtkcd1 > 0)
	{
		reaperAtkcd1--;
	}

	if (witchAtk1cd > 0)
	{
		witchAtk1cd--;
	}

	if (player_thoughts > 0)
	{
		player_thoughts--;
	}
}

void CMyGame::OnDraw(CGraphics* g)
{

	// draw menu when in menu mode
	if (IsMenuMode())
	{
		mainmenu.Draw(g);
		static int z = 0; if ((z++ / 60) % 2 == 1) *g << font(30) << color(CColor::White()) << centre << bottom << "Press SPACE to start the game";
		return;
	}

	background.Draw(g);

	for (CSprite* pSprite : m_sprites)
	{
		if ((string)pSprite->GetProperty("tag") == "mage")
		{
			pSprite->Draw(g);
		}
		if ((string)pSprite->GetProperty("tag") == "witch")
		{
			pSprite->Draw(g);
		}
		if ((string)pSprite->GetProperty("tag") == "archerR1")
		{
			pSprite->Draw(g);
		}
		if ((string)pSprite->GetProperty("tag") == "archerR2")
		{
			pSprite->Draw(g);
		}
		if ((string)pSprite->GetProperty("tag") == "archerL")
		{
			pSprite->Draw(g);
		}
		if ((string)pSprite->GetProperty("tag") == "rabbit")
		{
			pSprite->Draw(g);
		}
		if ((string)pSprite->GetProperty("tag") == "reaper")
		{
			pSprite->Draw(g);
		}
		if ((string)pSprite->GetProperty("tag") == "woodfloor")
		{
			pSprite->Draw(g);
		}
		if ((string)pSprite->GetProperty("tag") == "woodplatform")
		{
			pSprite->Draw(g);
		}
	}

	for (CSprite* fireball : spellList)
		fireball->Draw(g);
	for (CSprite* arrowR : arrowRList)
		arrowR->Draw(g);
	for (CSprite* arrowL : arrowLList)
		arrowL->Draw(g);

	purplefireball.Draw(g);
	gravityball.Draw(g);

	for (CSprite* barrel : barrelList)
		barrel->Draw(g);

	for (CSprite* atk1fx : atkfxList)
		atk1fx->Draw(g);

	Wtextbox.Draw(g);
	Rtextbox.Draw(g);
	Ptextbox.Draw(g);

	knightSummonIcon.Draw(g);

	if (IsGameOver())
	{
		if (gamewon)
			*g << font(50) << color(CColor::Green()) << vcenter << center << "YOU WON";
		else
			*g << font(50) << color(CColor::Red()) << vcenter << center << "YOU DIED";
	}

	if (playerGotPower)
	{
		*g << font(20) << color(CColor::Black()) << xy(knightSummonIcon.GetX() - 35, knightSummonIcon.GetY() - 70) << "Press E";
	}

	enemy_HealthBar.Draw(g);
	enemy_HealthBarAnim.Draw(g);

	m_player.Draw(g);

	player_GetsPower.Draw(g);
	player_summons.Draw(g);
	knight.Draw(g);
	knightSummon.Draw(g);

	player_HealthBar.Draw(g);
	player_ManaBar.Draw(g);

	blackscreen.Draw(g);
}

/////////////////////////////////////////////////////
// Game Life Cycle

// one time initialisation
void CMyGame::OnInitialize()
{

	background.LoadImage("bg.png", "lvl1part1");
	background.LoadImage("bg2.jpg", "lvl1part2");
	background.LoadImage("bg3.png", "lvl2part1");
	background.LoadImage("bg4.png", "lvl2part2");
	background.LoadImage("bg5.png", "lvl3");

	player_HealthBar.LoadImage("SwordHealth.png", "SwordHealth1", 12, 1, 11, 0, CColor::Black());
	player_HealthBar.LoadImage("SwordHealth.png", "SwordHealth2", 12, 1, 10, 0, CColor::Black());
	player_HealthBar.LoadImage("SwordHealth.png", "SwordHealth3", 12, 1, 9, 0, CColor::Black());
	player_HealthBar.LoadImage("SwordHealth.png", "SwordHealth4", 12, 1, 8, 0, CColor::Black());
	player_HealthBar.LoadImage("SwordHealth.png", "SwordHealth5", 12, 1, 7, 0, CColor::Black());
	player_HealthBar.LoadImage("SwordHealth.png", "SwordHealth6", 12, 1, 6, 0, CColor::Black());
	player_HealthBar.LoadImage("SwordHealth.png", "SwordHealth7", 12, 1, 5, 0, CColor::Black());
	player_HealthBar.LoadImage("SwordHealth.png", "SwordHealth8", 12, 1, 4, 0, CColor::Black());
	player_HealthBar.LoadImage("SwordHealth.png", "SwordHealth9", 12, 1, 3, 0, CColor::Black());
	player_HealthBar.LoadImage("SwordHealth.png", "SwordHealth10", 12, 1, 2, 0, CColor::Black());
	player_HealthBar.LoadImage("SwordHealth.png", "SwordHealth11", 12, 1, 1, 0, CColor::Black());
	player_HealthBar.LoadImage("SwordHealth.png", "SwordHealth12", 12, 1, 0, 0, CColor::Black());

	player_ManaBar.LoadImage("ManaBar.png", "ManaBar1", 18, 1, 17, 0, CColor::Black());
	player_ManaBar.LoadImage("ManaBar.png", "ManaBar2", 18, 1, 16, 0, CColor::Black());
	player_ManaBar.LoadImage("ManaBar.png", "ManaBar3", 18, 1, 15, 0, CColor::Black());
	player_ManaBar.LoadImage("ManaBar.png", "ManaBar4", 18, 1, 14, 0, CColor::Black());
	player_ManaBar.LoadImage("ManaBar.png", "ManaBar5", 18, 1, 13, 0, CColor::Black());
	player_ManaBar.LoadImage("ManaBar.png", "ManaBar6", 18, 1, 12, 0, CColor::Black());
	player_ManaBar.LoadImage("ManaBar.png", "ManaBar7", 18, 1, 11, 0, CColor::Black());
	player_ManaBar.LoadImage("ManaBar.png", "ManaBar8", 18, 1, 10, 0, CColor::Black());
	player_ManaBar.AddImage("ManaBar.png", "ManaBar9", 18, 1, 9, 0, 5, 0, CColor::Black());
	player_ManaBar.LoadImage("ManaBar.png", "ManaBar10", 18, 1, 4, 0, CColor::Black());
	player_ManaBar.AddImage("ManaBar.png", "ManaBar11", 18, 1, 0, 0, 3, 0, CColor::Black());

	enemy_HealthBar.LoadImage("EnemyHealth.png", "EnemyHealth1", 8, 1, 0, 0, CColor::Black());
	enemy_HealthBar.LoadImage("EnemyHealth.png", "EnemyHealth2", 8, 1, 1, 0, CColor::Black());
	enemy_HealthBar.LoadImage("EnemyHealth.png", "EnemyHealth3", 8, 1, 2, 0, CColor::Black());
	enemy_HealthBar.LoadImage("EnemyHealth.png", "EnemyHealth4", 8, 1, 3, 0, CColor::Black());
	enemy_HealthBar.LoadImage("EnemyHealth.png", "EnemyHealth5", 8, 1, 4, 0, CColor::Black());
	enemy_HealthBar.LoadImage("EnemyHealth.png", "EnemyHealth6", 8, 1, 5, 0, CColor::Black());
	enemy_HealthBar.LoadImage("EnemyHealth.png", "EnemyHealth7", 8, 1, 6, 0, CColor::Black());
	enemy_HealthBar.LoadImage("EnemyHealth.png", "EnemyHealth8", 8, 1, 7, 0, CColor::Black());
	enemy_HealthBarAnim.AddImage("OpeningAnimationForHealth.png", "OpenAnimForHealth", 19, 1, 0, 0, 18, 0, CColor::Black());
	enemy_HealthBar.SetY(-1000);

	m_player.LoadImage("player_sprites.png", "stand_right", 8, 3, 1, 2, CColor::White());
	m_player.LoadImage("player_sprites.png", "stand_left",  8, 3, 0, 2, CColor::White());
	m_player.AddImage("player_sprites.png", "run_right",    8, 3, 0, 0, 7, 0, CColor::White());
	m_player.AddImage("player_sprites.png", "run_left",     8, 3, 7, 1, 0, 1, CColor::White());
	m_player.LoadImage("player_sprites.png", "jump_right",  8, 3, 4, 2, CColor::White());
	m_player.LoadImage("player_sprites.png", "jump_left",   8, 3, 3, 2, CColor::White());
	m_player.LoadImage("player_sprites.png", "crouch_right",8, 3, 5, 2, CColor::White());
	m_player.LoadImage("player_sprites.png", "crouch_left", 8, 3, 2, 2, CColor::White());
	m_player.LoadImage("player_sprites.png", "atk1_right",	8, 3, 6, 2, CColor::White());
	m_player.LoadImage("player_sprites.png", "atk1_left",	8, 3, 7, 2, CColor::White());

	player_GetsPower.AddImage("player_GetsPowerR.png", "player_GetsPower", 12, 1, 0, 0, 11, 0, CColor::White());

	player_summons.AddImage("summons.png", "player_summons1", 12, 1, 0, 0, 11, 0, CColor::White());
	player_summons.AddImage("player_GetsPowerR.png", "player_summons2R", 12, 1, 0, 0, 11, 0, CColor::White());
	player_summons.AddImage("player_GetsPowerL.png", "player_summons2L", 12, 1, 11, 0, 0, 0, CColor::White());

	m_player.AddImage("player1_sprites.png", "run_right1", 6, 3, 0, 0, 5, 0, CColor::White());
	m_player.AddImage("player1_sprites.png", "run_left1", 6, 3, 5, 1, 0, 1, CColor::White());
	m_player.LoadImage("player1_sprites.png", "stand_right1", 6, 3, 0, 2, CColor::White());
	m_player.LoadImage("player1_sprites.png", "stand_left1", 6, 3, 1, 2, CColor::White());
	m_player.LoadImage("player1_sprites.png", "jump_right1", 6, 3, 2, 2, CColor::White());
	m_player.LoadImage("player1_sprites.png", "jump_left1", 6, 3, 3, 2, CColor::White());
	m_player.LoadImage("player1_sprites.png", "crouch_right1", 6, 3, 4, 2, CColor::White());
	m_player.LoadImage("player1_sprites.png", "crouch_left1", 6, 3, 5, 2, CColor::White());

	knightSummonIcon.LoadImage("knightSummonIcon.png", "knightSummonIcon", CColor::White());
	knightSummon.AddImage("KinghtSummonCircle.png", "KinghtSummonCircle", 19, 1, 0, 0, 18, 0, CColor::White());
	knight.AddImage("HeadlessKnightR.png", "HeadlessKnightR", 8, 1, 0, 0, 7, 0, CColor::Black());
	knight.AddImage("HeadlessKnightL.png", "HeadlessKnightL", 8, 1, 7, 0, 0, 0, CColor::Black());


	hitbox.LoadImage("hitbox.png", "hitbox", CColor::Black());
	hitbox.SetImage("hitbox");
	hitbox.SetY(-1000);

	knightHitbox.LoadImage("enemyHitbox.png", "knightHitbox", CColor::Black());
	knightHitbox.SetImage("knightHitbox");
	knightHitbox.SetY(-1000);

	enemyHitbox.LoadImage("enemyHitbox.png", "enemyHitbox", CColor::Black());
	enemyHitbox.SetImage("enemyHitbox");
	enemyHitbox.SetY(-1000);


	Wtextbox.LoadImage("witch_textbox.png", "witch_textbox", CColor::Black());
	purplefireball.AddImage("purplefireball.png", "purplefireballR", 8, 1, 0, 0, 7, 0, CColor::Black());
	purplefireball.AddImage("purplefireballL.png", "purplefireballL", 8, 1, 7, 0, 0, 0, CColor::Black());

	gravityball.AddImage("gravityball.png", "gravityball", 36, 1, 0, 0, 35, 0, CColor::Black());

	Rtextbox.LoadImage("rabbit_talk1.png", "rabbit_talk1", CColor::Black());
	Rtextbox.LoadImage("rabbit_talk2.png", "rabbit_talk2", CColor::Black());
	Rtextbox.LoadImage("rabbit_talk3.png", "rabbit_talk3", CColor::Black());
	Rtextbox.LoadImage("rabbit_talk4.png", "rabbit_talk4", CColor::Black());

	Ptextbox.LoadImage("player_thoughts.png", "player_thoughts", CColor::Black());

	blackscreen.LoadImage("blackscreen.png", "blackscreen");


	bgmusic.Play("bgmusic.wav", -1);
	bgmusic.Volume(40);
}

// called when a new game is requested (e.g. when F2 pressed)
// use this function to prepare a menu or a welcome screen
void CMyGame::OnDisplayMenu()
{
	//StartGame();	// exits the menu mode and starts the game mode
}

// called when a new game is started
// as a second phase after a menu or a welcome screen
void CMyGame::OnStartGame()
{
}

// called when the game is over
void CMyGame::OnGameOver()
{
}

// one time termination code
void CMyGame::OnTerminate()
{
}

/////////////////////////////////////////////////////
// Keyboard Event Handlers

void CMyGame::OnKeyDown(SDLKey sym, SDLMod mod, Uint16 unicode)
{
	if (sym == SDLK_F4 && (mod & (KMOD_LALT | KMOD_RALT)))
		StopGame();
	if (sym == SDLK_F2)
		NewGame();
	if (IsMenuMode())
	{
		if (sym == SDLK_SPACE)
		{
			Lvl1Part1();
			m_side = RIGHT;
			StartGame();
		}
	}

	if (!cutscene || !knightSummoned)
	{
		if ((sym == SDLK_w || sym == SDLK_UP) && (m_state == STANDING || m_state == RUNNING))
		{
			m_player.Accelerate(0, 800);

			if (IsKeyDown(SDLK_a) || IsKeyDown(SDLK_LEFT) && !leftjump && rightjump)
			{
				rightjump = false;
				leftjump = true;
				m_player.Accelerate(-300, 0);
			}
			else if (IsKeyDown(SDLK_d) || IsKeyDown(SDLK_RIGHT) && !rightjump && leftjump)
			{
				leftjump = false;
				rightjump = true;
				m_player.Accelerate(300, 0);
			}

			if (!playerGotPower)
			{
				m_state = AIRBORNE;
				m_player.SetImage(m_side == LEFT ? "jump_left" : "jump_right");
			}
			else
			{
				m_state = AIRBORNE;
				m_player.SetImage(m_side == LEFT ? "jump_left1" : "jump_right1");
			}

			jumpcd = 15;
		}
		else if ((sym == SDLK_a || sym == SDLK_LEFT) && (m_state == STANDING || m_state == RUNNING))
		{
			rightjump = false;
			leftjump = true;

			m_player.Accelerate(-300, 0);

			if (IsKeyDown(SDLK_w) || IsKeyDown(SDLK_UP))
			{
				m_player.Accelerate(0, 800);
			}

			if (!playerGotPower)
			{
				m_state = AIRBORNE;
				m_player.SetImage(m_side == LEFT ? "jump_left" : "jump_right");
			}
			else
			{
				m_state = AIRBORNE;
				m_player.SetImage(m_side == LEFT ? "jump_left1" : "jump_right1");
			}

			jumpcd = 15;
		}
		else if ((sym == SDLK_d || sym == SDLK_RIGHT) && (m_state == STANDING || m_state == RUNNING))
		{
			leftjump = false;
			rightjump = true;

			m_player.Accelerate(300, 0);

			if (IsKeyDown(SDLK_w) || IsKeyDown(SDLK_UP))
			{
				m_player.Accelerate(0, 800);
			}

			if (!playerGotPower)
			{
				m_state = AIRBORNE;
				m_player.SetImage(m_side == LEFT ? "jump_left" : "jump_right");
			}
			else
			{
				m_state = AIRBORNE;
				m_player.SetImage(m_side == LEFT ? "jump_left1" : "jump_right1");
			}

			jumpcd = 15;
		}
		else if ((sym == SDLK_a || sym == SDLK_LEFT) && !leftjump && rightjump)
		{
			rightjump = false;
			leftjump = true;
			m_player.Accelerate(-300, 0);
		}
		else if ((sym == SDLK_d || sym == SDLK_RIGHT) && !rightjump && leftjump)
		{
			leftjump = false;
			rightjump = true;
			m_player.Accelerate(300, 0);
		}
	}

}

void CMyGame::OnKeyUp(SDLKey sym, SDLMod mod, Uint16 unicode)
{
}


/////////////////////////////////////////////////////
// Mouse Events Handlers

void CMyGame::OnMouseMove(Uint16 x,Uint16 y,Sint16 relx,Sint16 rely,bool bLeft,bool bRight,bool bMiddle)
{
}

void CMyGame::OnLButtonDown(Uint16 x,Uint16 y)
{
	if(!cutscene)
		clicked = true;

	playerDamage = 5 + rand() % 15;
}

void CMyGame::OnLButtonUp(Uint16 x,Uint16 y)
{
	clicked = false;
}

void CMyGame::OnRButtonDown(Uint16 x,Uint16 y)
{
}

void CMyGame::OnRButtonUp(Uint16 x,Uint16 y)
{
}

void CMyGame::OnMButtonDown(Uint16 x,Uint16 y)
{
}

void CMyGame::OnMButtonUp(Uint16 x,Uint16 y)
{
}
