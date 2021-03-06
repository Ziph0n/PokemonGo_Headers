/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, July 13, 2016 at 11:49:59 AM Central European Summer Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/12E1CB67-3672-460D-A66D-1980A9BFC6C0/pokemongo.app/pokemongo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCoding.h>

@class NSString, USUpsightDataFilter, NSDictionary;

@interface USEventDataAssociation : NSObject <NSCoding> {

	NSString* _eventType;
	USUpsightDataFilter* _upsightDataFilter;
	NSDictionary* _upsightData;

}

@property (nonatomic,readonly) NSString * eventType;                                 //@synthesize eventType=_eventType - In the implementation block
@property (nonatomic,readonly) USUpsightDataFilter * upsightDataFilter;              //@synthesize upsightDataFilter=_upsightDataFilter - In the implementation block
@property (nonatomic,readonly) NSDictionary * upsightData;                           //@synthesize upsightData=_upsightData - In the implementation block
+(id)associationWithEventType:(id)arg1 upsightDataFilter:(id)arg2 upsightData:(id)arg3 ;
-(NSDictionary *)upsightData;
-(id)initWithEventType:(id)arg1 upsightDataFilter:(id)arg2 upsightData:(id)arg3 ;
-(USUpsightDataFilter *)upsightDataFilter;
-(BOOL)isEqualToAssociation:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)eventType;
@end

