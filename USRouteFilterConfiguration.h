/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, July 13, 2016 at 11:49:59 AM Central European Summer Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/12E1CB67-3672-460D-A66D-1980A9BFC6C0/pokemongo.app/pokemongo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <pokemongo/USConfigurationBase.h>

@class NSString, NSArray;

@interface USRouteFilterConfiguration : USConfigurationBase {

	NSString* _filter;
	NSArray* _queues;

}

@property (nonatomic,retain) NSString * filter;              //@synthesize filter=_filter - In the implementation block
@property (nonatomic,retain) NSArray * queues;               //@synthesize queues=_queues - In the implementation block
+(BOOL)isValidConfigurationDictionary:(id)arg1 ;
+(id)requiredKeys;
-(NSArray *)queues;
-(void)setQueues:(NSArray *)arg1 ;
-(NSString *)filter;
-(void)setFilter:(NSString *)arg1 ;
-(id)initWithConfigurationDictionary:(id)arg1 ;
@end

