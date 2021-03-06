/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, July 13, 2016 at 11:49:59 AM Central European Summer Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/12E1CB67-3672-460D-A66D-1980A9BFC6C0/pokemongo.app/pokemongo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NSMutableDictionary;

@interface USUserAttributes : NSObject {

	NSDictionary* _bundleUserAttributes;
	NSMutableDictionary* _userAttributes;

}

@property (nonatomic,retain) NSMutableDictionary * userAttributes;              //@synthesize userAttributes=_userAttributes - In the implementation block
@property (readonly) NSDictionary * bundleUserAttributes;                       //@synthesize bundleUserAttributes=_bundleUserAttributes - In the implementation block
+(id)sharedUserAttributes;
+(void)clearUserAttributes;
+(id)stringForKey:(id)arg1 ;
+(id)dictionaryRepresentation;
+(id)numberForKey:(id)arg1 ;
+(void)setNumber:(id)arg1 forKey:(id)arg2 ;
+(void)setString:(id)arg1 forKey:(id)arg2 ;
-(void)setUserAttributes:(NSMutableDictionary *)arg1 ;
-(NSDictionary *)bundleUserAttributes;
-(BOOL)isValidValue:(id)arg1 forKey:(id)arg2 expectedValueClass:(Class)arg3 ;
-(NSMutableDictionary *)userAttributes;
-(BOOL)isValidKey:(id)arg1 ;
-(id)stringForKey:(id)arg1 ;
-(id)numberForKey:(id)arg1 ;
-(void)setNumber:(id)arg1 forKey:(id)arg2 ;
-(void)setString:(id)arg1 forKey:(id)arg2 ;
@end

