/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, July 13, 2016 at 11:49:59 AM Central European Summer Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/12E1CB67-3672-460D-A66D-1980A9BFC6C0/pokemongo.app/pokemongo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CRRateAppAlert, CritterImpl, CRPreferences;

@interface CRAppRater : NSObject {

	unsigned long long _appLoadCount;
	CRRateAppAlert* _rateMeAlert;
	CritterImpl* _critterDelegate;
	CRPreferences* _storedState;

}

@property (retain) CRRateAppAlert * rateMeAlert;               //@synthesize rateMeAlert=_rateMeAlert - In the implementation block
@property (__weak) CritterImpl * critterDelegate;              //@synthesize critterDelegate=_critterDelegate - In the implementation block
@property (retain) CRPreferences * storedState;                //@synthesize storedState=_storedState - In the implementation block
-(CRPreferences *)storedState;
-(void)setStoredState:(CRPreferences *)arg1 ;
-(CritterImpl *)critterDelegate;
-(void)setCritterDelegate:(CritterImpl *)arg1 ;
-(BOOL)shouldResetRateMeSettings;
-(void)resetRateMeSettings;
-(void)incrementAppLoadCount;
-(void)persistItunesIdIfPresent:(id)arg1 ;
-(BOOL)shouldDisplayRateMeAlertWithDict:(id)arg1 ;
-(void)setRateMeAlert:(CRRateAppAlert *)arg1 ;
-(CRRateAppAlert *)rateMeAlert;
-(void)openAppStore;
-(id)initWithStoredState:(id)arg1 andCritterDelegate:(id)arg2 ;
-(void)appLoadedWithLaunch:(BOOL)arg1 ;
-(void)handleRateMeSettings:(id)arg1 ;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2 ;
@end

