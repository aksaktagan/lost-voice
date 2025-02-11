#pragma once

class CMyGame : public CGame
{
	// Define sprites and other instance variables here

	CSprite background;
	CSprite mainmenu;
	CSprite m_player;		// Player sprite
	CSprite player_GetsPower;
	CSprite player_HealthBar;
	CSprite player_ManaBar;
	CSprite player_summons;
	CSprite hitbox;
	CSprite Wtextbox;
	CSprite purplefireball;
	CSprite blackscreen;
	CSprite Rtextbox;
	CSprite Ptextbox;
	CSprite gravityball;
	CSprite knightSummonIcon;
	CSprite knightSummon;
	CSprite knight;
	CSprite knightHitbox;
	CSprite enemyHitbox;
	CSprite enemy_HealthBar;
	CSprite enemy_HealthBarAnim;

	CSoundPlayer bgmusic;


	CSpriteList m_sprites;	// All other sprites
	CSpriteList spellList;
	CSpriteList arrowLList;
	CSpriteList arrowRList;
	CSpriteList barrelList;
	CSpriteList atkfxList;

	// Player State
	enum { STANDING, RUNNING, AIRBORNE} m_state;
	enum { LEFT, RIGHT } m_side;
	enum { REAPER_LEFT, REAPER_RIGHT } reaper_side;
	enum { WITCH_LEFT, WITCH_RIGHT } witch_side;

	//**** player *****
	int playerHealth = 360;
	int playerMana = 100;
	bool playerManaRecover = false;
	bool playerManaZero = false;
	bool playerMana20 = false;
	int playerDamage;
	bool isDamaged = false;
	int jumpcd = 0;
	bool leftjump = false;
	bool rightjump = false;
	bool playerAttack = false;
	int player_thoughts = 0;
	int attackcd = 0;
	int damagecd = 0;
	bool playerGotPower = false;
	int playerGetsPowercd = -1;
	bool knightSummoned = false;
	bool knightSummoned1 = false;
	bool knightSummoned2 = false;
	bool knightSummoned3 = false;
	bool knightSummoned4 = false;
	int knightSummonedcd1 = 0;
	int knightSummonedcd2 = 0;
	int knightSummonedcd3 = 0;

	bool enemyIsDamaged = false;

	int Healthcd = 0;
	bool OpenHealthAnim = false;

	bool rabbitAppears = false;
	bool rabbitStopped = false;
	bool rabbitTalk = false;
	bool rabbitTalk1 = false;
	bool rabbitTalk2 = false;
	bool rabbitTalk3 = false;
	bool rabbitTalk4 = false;
	int rabbitTalk1cd = 0;
	int rabbitTalk2cd = 0;
	int rabbitTalk3cd = 0;
	int rabbitTalk4cd = -1;

	bool cutscene = false;


	int witchHealth = 500;
	bool witchDead = false;
	bool witchAtk = false;
	int witchAtkcd = 0;
	int witchAtk1cd = 0;
	bool witchFightMode = false;
	bool witchPurpleFireBall = false;
	bool witchCutsceneAtk = false;
	int witchCutsceneAtkcd = 0;
	bool witchTalk = false;
	int witchTalkcd = 0;



	int arrowLcd = 0;
	int arrowR1cd = 0;
	int arrowR2cd = 0;
	int arrowLcd1 = 0;
	int arrowR1cd1 = 0;
	int arrowR2cd1 = 0;


	int reaperHealth = 500;
	bool reaperDead = false;
	bool reaperFightMode = false;
	bool reaperAtk = false;
	int  reaperAtkcd = 0;
	int  reaperAtkcd1 = 0;
	bool reaperGravityAtk = false;
	bool GravityBallShowed = false;
	int  GravityBallSpwanedcd = 0;
	int  GravityBallSpwanedcd1 = 0;
	int  GravityBallDamagecd = 0;

	bool talkScene = false;
	
	int blackscreencd = -1;

	bool clicked = false;
	bool gamewon = false;

	int arrowRotation = 270;
	bool arrowRot = false;

	int level = 0;
	int part = 0;


	void Lvl1Part1();
	void Lvl1Part2();

	void Lvl2Part1();
	void Lvl2Part2();

	void Lvl3();

	void PlayerControls();

public:
	CMyGame(void);
	~CMyGame(void);

	// Per-Frame Callback Funtions (must be implemented!)
	virtual void OnUpdate();
	virtual void OnDraw(CGraphics* g);

	// Game Life Cycle
	virtual void OnInitialize();
	virtual void OnDisplayMenu();
	virtual void OnStartGame();
	virtual void OnGameOver();
	virtual void OnTerminate();

	// Keyboard Event Handlers
	virtual void OnKeyDown(SDLKey sym, SDLMod mod, Uint16 unicode);
	virtual void OnKeyUp(SDLKey sym, SDLMod mod, Uint16 unicode);

	// Mouse Events Handlers
	virtual void OnMouseMove(Uint16 x,Uint16 y,Sint16 relx,Sint16 rely,bool bLeft,bool bRight,bool bMiddle);
	virtual void OnLButtonDown(Uint16 x,Uint16 y);
	virtual void OnLButtonUp(Uint16 x,Uint16 y);
	virtual void OnRButtonDown(Uint16 x,Uint16 y);
	virtual void OnRButtonUp(Uint16 x,Uint16 y);
	virtual void OnMButtonDown(Uint16 x,Uint16 y);
	virtual void OnMButtonUp(Uint16 x,Uint16 y);
};
