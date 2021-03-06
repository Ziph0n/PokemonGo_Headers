/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, July 13, 2016 at 11:49:58 AM Central European Summer Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/12E1CB67-3672-460D-A66D-1980A9BFC6C0/pokemongo.app/pokemongo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMapTable, DisplayConnection;

@interface DisplayManager : NSObject {

	NSMapTable* _displayConnection;
	DisplayConnection* _mainDisplay;
	unsigned long long displayCount;

}

@property (nonatomic,readonly) DisplayConnection * mainDisplay;              //@synthesize mainDisplay=_mainDisplay - In the implementation block
@property (nonatomic,readonly) unsigned long long displayCount; 
+(id)Instance;
+(void)Initialize;
-(void)endFrameRendering;
-(void)registerScreen:(id)arg1 ;
-(void)enumerateDisplaysWithBlock:(/*^block*/id)arg1 ;
-(void)updateDisplayListInUnity;
-(unsigned long long)displayCount;
-(BOOL)displayAvailable:(id)arg1 ;
-(void)startFrameRendering;
-(id)init;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(DisplayConnection *)mainDisplay;
-(id)display:(id)arg1 ;
-(void)present;
-(void)screenDidConnect:(id)arg1 ;
-(void)screenDidDisconnect:(id)arg1 ;
@end

