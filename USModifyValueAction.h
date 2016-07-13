/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, July 13, 2016 at 11:49:59 AM Central European Summer Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/12E1CB67-3672-460D-A66D-1980A9BFC6C0/pokemongo.app/pokemongo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <pokemongo/USBaseAction.h>

@class NSString, NSArray;

@interface USModifyValueAction : USBaseAction {

	NSString* _type;
	NSArray* _matchValues;
	NSArray* _operations;

}

@property (nonatomic,readonly) NSString * type;                    //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSArray * matchValues;              //@synthesize matchValues=_matchValues - In the implementation block
@property (nonatomic,readonly) NSArray * operations;               //@synthesize operations=_operations - In the implementation block
+(id)type;
-(id)initWithParameters:(id)arg1 map:(id)arg2 handler:(/*^block*/id)arg3 ;
-(NSArray *)matchValues;
-(NSString *)type;
-(NSArray *)operations;
@end

