/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, July 13, 2016 at 11:49:59 AM Central European Summer Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/12E1CB67-3672-460D-A66D-1980A9BFC6C0/pokemongo.app/pokemongo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <pokemongo/USBaseAction.h>

@class NSString;

@interface USOpenInAppStoreAction : USBaseAction {

	NSString* _iTunesID;

}

@property (nonatomic,copy) NSString * iTunesID;              //@synthesize iTunesID=_iTunesID - In the implementation block
+(id)type;
-(id)initWithParameters:(id)arg1 map:(id)arg2 handler:(/*^block*/id)arg3 ;
-(NSString *)iTunesID;
-(void)setITunesID:(NSString *)arg1 ;
@end
