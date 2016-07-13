/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, July 13, 2016 at 11:49:59 AM Central European Summer Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/12E1CB67-3672-460D-A66D-1980A9BFC6C0/pokemongo.app/pokemongo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <pokemongo/UpsightStorableObject.h>

@class USEvent, NSError;

@interface USEventResponse : UpsightStorableObject {

	USEvent* _event;
	NSError* _error;

}

@property (nonatomic,readonly) USEvent * event;              //@synthesize event=_event - In the implementation block
@property (nonatomic,readonly) NSError * error;              //@synthesize error=_error - In the implementation block
-(id)initWithType:(id)arg1 version:(id)arg2 ID:(id)arg3 ;
-(id)initWithEvent:(id)arg1 error:(id)arg2 ;
-(NSError *)error;
-(id)init;
-(USEvent *)event;
@end

