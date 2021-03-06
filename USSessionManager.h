/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, July 13, 2016 at 11:49:59 AM Central European Summer Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/12E1CB67-3672-460D-A66D-1980A9BFC6C0/pokemongo.app/pokemongo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol USAnalyticsInterface, UpsightDataStoreInterface;
@class USSession, NSDictionary, NSString, NSNumber;

@interface USSessionManager : NSObject {

	id<USAnalyticsInterface> _analytics;
	USSession* _currentSession;
	id<UpsightDataStoreInterface> _dataStore;
	double _timeToNewSession;
	NSDictionary* _stateTable;
	NSString* _currentState;
	NSNumber* _messageID;
	NSNumber* _campaignID;

}

@property (nonatomic,copy,readonly) USSession * session; 
@property (nonatomic,readonly) id<UpsightDataStoreInterface> dataStore;              //@synthesize dataStore=_dataStore - In the implementation block
@property (assign,nonatomic) double timeToNewSession;                                //@synthesize timeToNewSession=_timeToNewSession - In the implementation block
@property (retain) USSession * currentSession;                                       //@synthesize currentSession=_currentSession - In the implementation block
@property (nonatomic,readonly) id<USAnalyticsInterface> analytics;                   //@synthesize analytics=_analytics - In the implementation block
@property (nonatomic,retain) NSDictionary * stateTable;                              //@synthesize stateTable=_stateTable - In the implementation block
@property (assign,nonatomic) NSString * currentState;                                //@synthesize currentState=_currentState - In the implementation block
@property (nonatomic,retain) NSNumber * messageID;                                   //@synthesize messageID=_messageID - In the implementation block
@property (nonatomic,retain) NSNumber * campaignID;                                  //@synthesize campaignID=_campaignID - In the implementation block
+(id)sharedSessionManager;
+(void)startWithMessageID:(id)arg1 campaignID:(id)arg2 ;
+(id)defaultConfiguration;
-(id<USAnalyticsInterface>)analytics;
-(NSNumber *)campaignID;
-(void)setMessageID:(id)arg1 campaignID:(id)arg2 ;
-(void)applyConfiguration:(id)arg1 ;
-(void)startWithMessageID:(id)arg1 campaignID:(id)arg2 ;
-(void)sessionManagerConfigurationDidUpdate:(id)arg1 action:(unsigned long long)arg2 ;
-(void)checkForConfiguration;
-(void)setCampaignID:(NSNumber *)arg1 ;
-(void)executeLaunched;
-(void)enterStarted;
-(void)executeStarted;
-(id)exitStarted;
-(void)enterResumed;
-(void)executeResumed;
-(id)exitResumed;
-(void)enterPaused;
-(void)executePaused;
-(id)exitPaused;
-(id)exitLaunched;
-(NSDictionary *)stateTable;
-(void)setCurrentSession:(USSession *)arg1 ;
-(double)timeToNewSession;
-(void)saveSession:(id)arg1 ;
-(void)setTimeToNewSession:(double)arg1 ;
-(void)setStateTable:(NSDictionary *)arg1 ;
-(USSession *)session;
-(void)dealloc;
-(id)init;
-(NSString *)currentState;
-(void)transition;
-(void)setCurrentState:(NSString *)arg1 ;
-(id)initWithDataStore:(id)arg1 ;
-(USSession *)currentSession;
-(NSNumber *)messageID;
-(id<UpsightDataStoreInterface>)dataStore;
-(void)setMessageID:(NSNumber *)arg1 ;
@end

