/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, July 13, 2016 at 11:49:59 AM Central European Summer Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/12E1CB67-3672-460D-A66D-1980A9BFC6C0/pokemongo.app/pokemongo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSDictionary, USActionMap;


@protocol USAction <NSObject>
@property (nonatomic,readonly) NSDictionary * parameters; 
@property (nonatomic,__weak,readonly) USActionMap * map; 
@property (nonatomic,copy,readonly) id handler; 
@required
+(id)type;
-(void)executeWithCompletionBlock:(/*^block*/id)arg1;
-(id)handler;
-(NSDictionary *)parameters;
-(USActionMap *)map;

@end

