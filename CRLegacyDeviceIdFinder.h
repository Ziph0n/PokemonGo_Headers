/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, July 13, 2016 at 11:49:58 AM Central European Summer Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/12E1CB67-3672-460D-A66D-1980A9BFC6C0/pokemongo.app/pokemongo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSUserDefaults;

@interface CRLegacyDeviceIdFinder : NSObject {

	NSString* _appId;
	NSUserDefaults* _defaults;

}

@property (retain) NSString * appId;                       //@synthesize appId=_appId - In the implementation block
@property (retain) NSUserDefaults * defaults;              //@synthesize defaults=_defaults - In the implementation block
+(id)idFinderUsingAppId:(id)arg1 andUserDefaults:(id)arg2 ;
-(id)initWithAppId:(id)arg1 andUserDefaults:(id)arg2 ;
-(id)getDeviceUUIDFromAppSettings;
-(id)getDeviceUUIDFromPasteboards;
-(id)lookupId;
-(NSUserDefaults *)defaults;
-(void)setDefaults:(NSUserDefaults *)arg1 ;
-(NSString *)appId;
-(void)setAppId:(NSString *)arg1 ;
@end

