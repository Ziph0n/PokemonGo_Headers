/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, July 13, 2016 at 11:49:59 AM Central European Summer Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/12E1CB67-3672-460D-A66D-1980A9BFC6C0/pokemongo.app/pokemongo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol UpsightDefaultsImpl;
#import <pokemongo/pokemongo-Structs.h>
@interface UpsightDefaults : NSObject {

	id<UpsightDefaultsImpl> _defaultsImpl;

}

@property (nonatomic,readonly) id<UpsightDefaultsImpl> defaultsImpl;              //@synthesize defaultsImpl=_defaultsImpl - In the implementation block
+(id)sharedDefaults;
-(void)removeDefaultForKey:(id)arg1 ;
-(void)removeAllDefaults;
-(id)initWithDefaultsImplementation:(id)arg1 ;
-(id<UpsightDefaultsImpl>)defaultsImpl;
-(void)setInteger:(long long)arg1 forKey:(id)arg2 ;
-(id)objectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(BOOL)boolForKey:(id)arg1 ;
-(void)setBool:(BOOL)arg1 forKey:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)integerForKey:(id)arg1 ;
@end
