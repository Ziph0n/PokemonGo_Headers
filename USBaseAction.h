/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, July 13, 2016 at 11:49:59 AM Central European Summer Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/12E1CB67-3672-460D-A66D-1980A9BFC6C0/pokemongo.app/pokemongo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <pokemongo/USAction.h>

@class NSDictionary, USActionMap, NSString;

@interface USBaseAction : NSObject <USAction> {

	NSDictionary* _parameters;
	USActionMap* _map;
	/*^block*/id _handler;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSDictionary * parameters;              //@synthesize parameters=_parameters - In the implementation block
@property (nonatomic,__weak,readonly) USActionMap * map;               //@synthesize map=_map - In the implementation block
@property (nonatomic,copy,readonly) id handler;                        //@synthesize handler=_handler - In the implementation block
+(id)type;
-(id)initWithParameters:(id)arg1 map:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)executeWithCompletionBlock:(/*^block*/id)arg1 ;
-(id)init;
-(id)handler;
-(NSDictionary *)parameters;
-(USActionMap *)map;
@end

