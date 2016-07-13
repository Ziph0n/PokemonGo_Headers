/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, July 13, 2016 at 11:49:58 AM Central European Summer Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/12E1CB67-3672-460D-A66D-1980A9BFC6C0/pokemongo.app/pokemongo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CRRawCrash, NSArray, NSDictionary, NSString;

@interface CRCrash : NSObject {

	CRRawCrash* _rawCrash;
	NSArray* _transactions;
	NSDictionary* _userBreadcrumbs;
	NSArray* _systemBreadcrumbs;
	NSArray* _endpoints;
	NSString* _appID;
	NSString* _libVersion;
	NSString* _deviceID;
	NSDictionary* _storedPrefs;
	NSDictionary* _storedDeviceDict;

}

@property (retain) CRRawCrash * rawCrash;                        //@synthesize rawCrash=_rawCrash - In the implementation block
@property (retain) NSArray * transactions;                       //@synthesize transactions=_transactions - In the implementation block
@property (retain) NSDictionary * userBreadcrumbs;               //@synthesize userBreadcrumbs=_userBreadcrumbs - In the implementation block
@property (retain) NSArray * systemBreadcrumbs;                  //@synthesize systemBreadcrumbs=_systemBreadcrumbs - In the implementation block
@property (retain) NSArray * endpoints;                          //@synthesize endpoints=_endpoints - In the implementation block
@property (retain) NSString * appID;                             //@synthesize appID=_appID - In the implementation block
@property (retain) NSString * libVersion;                        //@synthesize libVersion=_libVersion - In the implementation block
@property (retain) NSString * deviceID;                          //@synthesize deviceID=_deviceID - In the implementation block
@property (retain) NSDictionary * storedPrefs;                   //@synthesize storedPrefs=_storedPrefs - In the implementation block
@property (retain) NSDictionary * storedDeviceDict;              //@synthesize storedDeviceDict=_storedDeviceDict - In the implementation block
+(id)crashWithRawCrash:(id)arg1 andStoredDevice:(id)arg2 andStoredPrefs:(id)arg3 andTransactions:(id)arg4 andUserBreadcrumbs:(id)arg5 andSystemBreadcrumbs:(id)arg6 andEndpoints:(id)arg7 appID:(id)arg8 libVersion:(id)arg9 deviceID:(id)arg10 ;
-(NSArray *)systemBreadcrumbs;
-(id)initWithRawCrash:(id)arg1 andStoredDevice:(id)arg2 andStoredPrefs:(id)arg3 andTransactions:(id)arg4 andUserBreadcrumbs:(id)arg5 andSystemBreadcrumbs:(id)arg6 andEndpoints:(id)arg7 appID:(id)arg8 libVersion:(id)arg9 deviceID:(id)arg10 ;
-(id)makeAppStateDict;
-(void)addDataFromRawCrashTo:(id)arg1 ;
-(void)addAppStateFromRawCrashTo:(id)arg1 ;
-(id)getMetadata;
-(id)getRawCrashData;
-(CRRawCrash *)rawCrash;
-(void)setRawCrash:(CRRawCrash *)arg1 ;
-(NSDictionary *)userBreadcrumbs;
-(void)setUserBreadcrumbs:(NSDictionary *)arg1 ;
-(void)setSystemBreadcrumbs:(NSArray *)arg1 ;
-(NSString *)libVersion;
-(void)setLibVersion:(NSString *)arg1 ;
-(NSDictionary *)storedPrefs;
-(void)setStoredPrefs:(NSDictionary *)arg1 ;
-(NSDictionary *)storedDeviceDict;
-(void)setStoredDeviceDict:(NSDictionary *)arg1 ;
-(void)setTransactions:(NSArray *)arg1 ;
-(NSArray *)transactions;
-(void)setAppID:(NSString *)arg1 ;
-(void)setDeviceID:(NSString *)arg1 ;
-(NSString *)deviceID;
-(NSArray *)endpoints;
-(void)setEndpoints:(NSArray *)arg1 ;
-(NSString *)appID;
@end

