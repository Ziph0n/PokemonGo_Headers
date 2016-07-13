/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, July 13, 2016 at 11:49:59 AM Central European Summer Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/12E1CB67-3672-460D-A66D-1980A9BFC6C0/pokemongo.app/pokemongo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CrittercismDelegate;
@class CRAppLocator, CRPreferences, NSString, CRDevice, CRExceptionHandler, CRCrashArchive, CRTransactionReporter, CRNetStatDispatch, CRNetCollector, CRAppRater, CRReachability, NSOperationQueue, CRThrottle, PLCrashReporter, CrittercismConfig;

@interface CritterImpl : NSObject {

	id<CrittercismDelegate> delegate;
	BOOL _loggingCritterError;
	BOOL _isOptedOut;
	unsigned long long _sessionNum;
	BOOL _isReady;
	BOOL _didCrashOnLastLoad;
	BOOL _didSendAppLoadData;
	CRAppLocator* _appLocator;
	CRPreferences* _preferences;
	NSString* _deviceUUID;
	NSString* _appId;
	NSString* _critterURL;
	NSString* _netDataURL;
	NSString* _appLoadURL;
	NSString* _LibraryId;
	CRDevice* _device;
	CRExceptionHandler* _exceptionHandler;
	CRExceptionHandler* _internalExceptionHandler;
	CRCrashArchive* _crashArchive;
	CRTransactionReporter* _transactionReporter;
	CRNetStatDispatch* _netStatDispatch;
	CRNetCollector* _netCollector;
	CRAppRater* _appRater;
	CRReachability* _hostReach;
	CRReachability* _internetReach;
	CRReachability* _wifiReach;
	NSString* _lastReachabilityStatusString;
	NSOperationQueue* _breadcrumbQueue;
	CRThrottle* _pluginCrashThrottle;
	double _sessionStartTime;
	PLCrashReporter* _plCrashReporter;
	CrittercismConfig* _config;

}

@property (assign) BOOL isReady;                                               //@synthesize isReady=_isReady - In the implementation block
@property (nonatomic,retain) CRAppLocator * appLocator;                        //@synthesize appLocator=_appLocator - In the implementation block
@property (retain) CRPreferences * preferences;                                //@synthesize preferences=_preferences - In the implementation block
@property (retain) id<CrittercismDelegate> delegate; 
@property (assign) BOOL didCrashOnLastLoad;                                    //@synthesize didCrashOnLastLoad=_didCrashOnLastLoad - In the implementation block
@property (getter=getUserUUID,readonly) NSString * deviceUUID;                 //@synthesize deviceUUID=_deviceUUID - In the implementation block
@property (copy) NSString * appId;                                             //@synthesize appId=_appId - In the implementation block
@property (retain) NSString * critterURL;                                      //@synthesize critterURL=_critterURL - In the implementation block
@property (retain) NSString * netDataURL;                                      //@synthesize netDataURL=_netDataURL - In the implementation block
@property (retain) NSString * appLoadURL;                                      //@synthesize appLoadURL=_appLoadURL - In the implementation block
@property (retain) NSString * LibraryId;                                       //@synthesize LibraryId=_LibraryId - In the implementation block
@property (retain) CRDevice * device;                                          //@synthesize device=_device - In the implementation block
@property (retain) CRExceptionHandler * exceptionHandler;                      //@synthesize exceptionHandler=_exceptionHandler - In the implementation block
@property (retain) CRExceptionHandler * internalExceptionHandler;              //@synthesize internalExceptionHandler=_internalExceptionHandler - In the implementation block
@property (retain) CRCrashArchive * crashArchive;                              //@synthesize crashArchive=_crashArchive - In the implementation block
@property (retain) CRTransactionReporter * transactionReporter;                //@synthesize transactionReporter=_transactionReporter - In the implementation block
@property (retain) CRNetStatDispatch * netStatDispatch;                        //@synthesize netStatDispatch=_netStatDispatch - In the implementation block
@property (retain) CRNetCollector * netCollector;                              //@synthesize netCollector=_netCollector - In the implementation block
@property (retain) CRAppRater * appRater;                                      //@synthesize appRater=_appRater - In the implementation block
@property (retain) CRReachability * hostReach;                                 //@synthesize hostReach=_hostReach - In the implementation block
@property (retain) CRReachability * internetReach;                             //@synthesize internetReach=_internetReach - In the implementation block
@property (retain) CRReachability * wifiReach;                                 //@synthesize wifiReach=_wifiReach - In the implementation block
@property (copy) NSString * lastReachabilityStatusString;                      //@synthesize lastReachabilityStatusString=_lastReachabilityStatusString - In the implementation block
@property (retain) NSOperationQueue * breadcrumbQueue;                         //@synthesize breadcrumbQueue=_breadcrumbQueue - In the implementation block
@property (retain) CRThrottle * pluginCrashThrottle;                           //@synthesize pluginCrashThrottle=_pluginCrashThrottle - In the implementation block
@property (assign) double sessionStartTime;                                    //@synthesize sessionStartTime=_sessionStartTime - In the implementation block
@property (retain) PLCrashReporter * plCrashReporter;                          //@synthesize plCrashReporter=_plCrashReporter - In the implementation block
@property (assign) BOOL didSendAppLoadData;                                    //@synthesize didSendAppLoadData=_didSendAppLoadData - In the implementation block
@property (retain) CrittercismConfig * config;                                 //@synthesize config=_config - In the implementation block
+(void)cr_logCritterError:(id)arg1 ;
+(id)sharedInstance;
-(void)shareAction:(id)arg1 ;
-(void)dismiss;
-(void)openFlap:(id)arg1 ;
-(void)setOptOutStatus:(BOOL)arg1 ;
-(void)cr_logCritterError:(id)arg1 ;
-(unsigned long long)maxOfflineCrashReports;
-(void)setMaxOfflineCrashReports:(unsigned long long)arg1 ;
-(CRAppLocator *)appLocator;
-(void)foregroundBackgroundCheck:(id)arg1 ;
-(void)autoTransaction:(id)arg1 withBeginTime:(double)arg2 withEndTime:(double)arg3 ;
-(void)postJSONtoEndpoint:(id)arg1 withBaseURL:(id)arg2 andData:(id)arg3 andHandler:(id)arg4 ;
-(CRCrashArchive *)crashArchive;
-(void)setCrashArchive:(CRCrashArchive *)arg1 ;
-(void)enableWithAppID:(id)arg1 andConfig:(id)arg2 ;
-(BOOL)logNetworkRequest:(id)arg1 urlString:(id)arg2 latency:(double)arg3 bytesRead:(unsigned long long)arg4 bytesSent:(unsigned long long)arg5 responseCode:(long long)arg6 error:(id)arg7 ;
-(void)leaveBreadcrumb:(id)arg1 ;
-(void)setAsyncBreadcrumbMode:(BOOL)arg1 ;
-(BOOL)getOptOutStatus;
-(BOOL)didCrashOnLastLoad;
-(void)logPluginException:(id)arg1 ;
-(void)setUserMetadataCacheIsDirty:(BOOL)arg1 ;
-(void)useStoredSettings;
-(void)receivedSettings:(id)arg1 ;
-(void)handleRateMeAlert:(id)arg1 ;
-(NSString *)appLoadURL;
-(void)logRateMeClickWithButtonIndex:(long long)arg1 ;
-(void)appLoadedWithLaunch:(BOOL)arg1 ;
-(void)enableFromConfigFile;
-(BOOL)logHandledException:(id)arg1 ;
-(id)getUserUUID;
-(void)sendAppLoadData;
-(CRTransactionReporter *)transactionReporter;
-(void)setupURLs;
-(void)setupHandledExceptions;
-(void)setupAppRater;
-(void)setupNetCollectionWithCurrentDevice:(id)arg1 ;
-(void)handleCrashReportWithPLCrashReport:(id)arg1 andStoredDevice:(id)arg2 andStoredPrefs:(id)arg3 andTransactions:(id)arg4 andUserBreadcrumbs:(id)arg5 andSystemBreadcrumbs:(id)arg6 andEndpoints:(id)arg7 andPreviousVersion:(id)arg8 ;
-(BOOL)userMetadataCacheIsDirty;
-(void)sendUserMetadata;
-(void)setupNetMonitoringWithConfig:(id)arg1 ;
-(void)freeDetectedClasses;
-(void)setupReachabilityUpdates;
-(void)setupUserVoice;
-(id)getStateWithFullState:(BOOL)arg1 ;
-(void)setCritterURL:(NSString *)arg1 ;
-(void)setNetDataURL:(NSString *)arg1 ;
-(void)setAppLoadURL:(NSString *)arg1 ;
-(void)setupNotification:(id)arg1 ;
-(void)updateReachability:(id)arg1 ;
-(void)setLastReachabilityStatusString:(NSString *)arg1 ;
-(void)addFullStateDataTo:(id)arg1 withDevice:(id)arg2 ;
-(id)buildAppLoadRequest;
-(id)buildRequestWithState:(int)arg1 appendUserMetadata:(BOOL)arg2 ;
-(void)postURLEncodedToEndpoint:(id)arg1 withData:(id)arg2 andHandler:(id)arg3 ;
-(void)hostReachabilityChanged:(id)arg1 ;
-(void)internetReachabilityChanged:(id)arg1 ;
-(void)handleCRReachabilityNotificationBreadcrumbs:(id)arg1 ;
-(void)wifiReachabilityChanged:(id)arg1 ;
-(void)handleUIDeviceNotification:(id)arg1 ;
-(void)handleCRReachabilityNotification:(id)arg1 ;
-(BOOL)checkSettings:(id)arg1 ;
-(void)receivedAPMSettings:(id)arg1 ;
-(void)receivedTxnSettings:(id)arg1 ;
-(void)useStoredAPMSettings;
-(void)useStoredTxnSettings;
-(void)parseSettings:(id)arg1 withEnabled:(BOOL*)arg2 withFrequency:(id*)arg3 andKillState:(BOOL*)arg4 persistState:(BOOL*)arg5 ;
-(void)storeAPMSettings:(BOOL)arg1 withFrequency:(id)arg2 ;
-(void)configureAPMSampling:(BOOL)arg1 withFrequency:(id)arg2 ;
-(void)storeTxnSettings:(BOOL)arg1 withFrequency:(id)arg2 withDefaultTimeout:(double)arg3 withThresholds:(id)arg4 ;
-(void)configureTxnSampling:(BOOL)arg1 withFrequency:(id)arg2 withDefaultTimeout:(double)arg3 withThresholds:(id)arg4 ;
-(id)makeBasicRequest;
-(void)setAppLocator:(CRAppLocator *)arg1 ;
-(void)setDidCrashOnLastLoad:(BOOL)arg1 ;
-(NSString *)critterURL;
-(NSString *)netDataURL;
-(NSString *)LibraryId;
-(CRExceptionHandler *)internalExceptionHandler;
-(void)setInternalExceptionHandler:(CRExceptionHandler *)arg1 ;
-(void)setTransactionReporter:(CRTransactionReporter *)arg1 ;
-(CRNetStatDispatch *)netStatDispatch;
-(void)setNetStatDispatch:(CRNetStatDispatch *)arg1 ;
-(CRNetCollector *)netCollector;
-(void)setNetCollector:(CRNetCollector *)arg1 ;
-(CRAppRater *)appRater;
-(void)setAppRater:(CRAppRater *)arg1 ;
-(CRReachability *)hostReach;
-(void)setHostReach:(CRReachability *)arg1 ;
-(CRReachability *)internetReach;
-(void)setInternetReach:(CRReachability *)arg1 ;
-(CRReachability *)wifiReach;
-(void)setWifiReach:(CRReachability *)arg1 ;
-(NSString *)lastReachabilityStatusString;
-(NSOperationQueue *)breadcrumbQueue;
-(void)setBreadcrumbQueue:(NSOperationQueue *)arg1 ;
-(CRThrottle *)pluginCrashThrottle;
-(void)setPluginCrashThrottle:(CRThrottle *)arg1 ;
-(PLCrashReporter *)plCrashReporter;
-(void)setPlCrashReporter:(PLCrashReporter *)arg1 ;
-(BOOL)didSendAppLoadData;
-(void)setDidSendAppLoadData:(BOOL)arg1 ;
-(void)handleNotification:(id)arg1 ;
-(BOOL)isReady;
-(CRExceptionHandler *)exceptionHandler;
-(void)deviceOrientationDidChange:(id)arg1 ;
-(void)setValue:(id)arg1 forKey:(id)arg2 ;
-(void)setDelegate:(id<CrittercismDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<CrittercismDelegate>)delegate;
-(void)applicationWillEnterForeground:(id)arg1 ;
-(void)reset;
-(void)setPreferences:(CRPreferences *)arg1 ;
-(CRPreferences *)preferences;
-(CRDevice *)device;
-(CrittercismConfig *)config;
-(void)setConfig:(CrittercismConfig *)arg1 ;
-(BOOL)logError:(id)arg1 ;
-(void)setupNotifications;
-(id)appState;
-(void)setLibraryId:(NSString *)arg1 ;
-(void)addFilter:(id)arg1 ;
-(double)sessionStartTime;
-(void)setSessionStartTime:(double)arg1 ;
-(NSString *)appId;
-(void)setAppId:(NSString *)arg1 ;
-(void)setExceptionHandler:(CRExceptionHandler *)arg1 ;
-(void)setIsReady:(BOOL)arg1 ;
-(void)setDevice:(CRDevice *)arg1 ;
@end
