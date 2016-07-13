/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, July 13, 2016 at 11:49:59 AM Central European Summer Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/12E1CB67-3672-460D-A66D-1980A9BFC6C0/pokemongo.app/pokemongo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <pokemongo/USEvent.h>

@class USMonetizationPurchaseInfo;

@interface USMonetizationEvent : USEvent {

	USMonetizationPurchaseInfo* _info;

}

@property (nonatomic,retain) USMonetizationPurchaseInfo * info;              //@synthesize info=_info - In the implementation block
+(id)monetizationEventWithWithParameters:(id)arg1 info:(id)arg2 ;
-(id)initWithType:(id)arg1 parameters:(id)arg2 ;
-(id)initWithParameters:(id)arg1 monetizationInfo:(id)arg2 ;
-(id)init;
-(USMonetizationPurchaseInfo *)info;
-(void)setInfo:(USMonetizationPurchaseInfo *)arg1 ;
@end

