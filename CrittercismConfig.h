/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, July 13, 2016 at 11:49:59 AM Central European Summer Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/12E1CB67-3672-460D-A66D-1980A9BFC6C0/pokemongo.app/pokemongo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CrittercismDelegate;
@class NSArray;

@interface CrittercismConfig : NSObject {

	BOOL _monitorNSURLConnection;
	BOOL _monitorNSURLSession;
	BOOL _monitorUIWebView;
	BOOL _monitorWKWebView;
	BOOL _monitorWCSession;
	BOOL _enableServiceMonitoring;
	BOOL _delaySendingAppLoad;
	long long _loggingLevel;
	NSArray* _urlFilters;
	id<CrittercismDelegate> _delegate;

}

@property (assign,nonatomic) BOOL monitorNSURLConnection;                   //@synthesize monitorNSURLConnection=_monitorNSURLConnection - In the implementation block
@property (assign,nonatomic) BOOL monitorNSURLSession;                      //@synthesize monitorNSURLSession=_monitorNSURLSession - In the implementation block
@property (assign,nonatomic) BOOL monitorUIWebView;                         //@synthesize monitorUIWebView=_monitorUIWebView - In the implementation block
@property (assign,nonatomic) BOOL monitorWKWebView;                         //@synthesize monitorWKWebView=_monitorWKWebView - In the implementation block
@property (assign,nonatomic) BOOL monitorWCSession;                         //@synthesize monitorWCSession=_monitorWCSession - In the implementation block
@property (assign,nonatomic) BOOL enableServiceMonitoring;                  //@synthesize enableServiceMonitoring=_enableServiceMonitoring - In the implementation block
@property (assign,nonatomic) BOOL delaySendingAppLoad;                      //@synthesize delaySendingAppLoad=_delaySendingAppLoad - In the implementation block
@property (assign,nonatomic) long long loggingLevel;                        //@synthesize loggingLevel=_loggingLevel - In the implementation block
@property (nonatomic,retain) NSArray * urlFilters;                          //@synthesize urlFilters=_urlFilters - In the implementation block
@property (nonatomic,retain) id<CrittercismDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)defaultConfig;
-(void)setEnableServiceMonitoring:(BOOL)arg1 ;
-(void)setUrlFilters:(NSArray *)arg1 ;
-(long long)internalLoggingLevel;
-(BOOL)enableServiceMonitoring;
-(BOOL)delaySendingAppLoad;
-(NSArray *)urlFilters;
-(BOOL)monitorNSURLSession;
-(BOOL)monitorNSURLConnection;
-(BOOL)monitorUIWebView;
-(BOOL)monitorWKWebView;
-(BOOL)monitorWCSession;
-(void)setMonitorNSURLConnection:(BOOL)arg1 ;
-(void)setMonitorNSURLSession:(BOOL)arg1 ;
-(void)setMonitorUIWebView:(BOOL)arg1 ;
-(void)setMonitorWKWebView:(BOOL)arg1 ;
-(void)setMonitorWCSession:(BOOL)arg1 ;
-(void)setDelaySendingAppLoad:(BOOL)arg1 ;
-(void)setLoggingLevel:(long long)arg1 ;
-(void)setDelegate:(id<CrittercismDelegate>)arg1 ;
-(id)init;
-(id)description;
-(id<CrittercismDelegate>)delegate;
-(long long)loggingLevel;
@end
