/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, July 13, 2016 at 11:49:58 AM Central European Summer Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/12E1CB67-3672-460D-A66D-1980A9BFC6C0/pokemongo.app/pokemongo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <pokemongo/pokemongo-Structs.h>
@class NSString;

@interface UnityPLCrashProcessInfo : NSObject {

	int _processID;
	NSString* _processName;
	int _parentProcessID;
	timeval _startTime;
	BOOL _traced;

}

@property (nonatomic,readonly) int processID;                            //@synthesize processID=_processID - In the implementation block
@property (nonatomic,readonly) NSString * processName;                   //@synthesize processName=_processName - In the implementation block
@property (nonatomic,readonly) int parentProcessID;                      //@synthesize parentProcessID=_parentProcessID - In the implementation block
@property (nonatomic,readonly) timeval startTime;                        //@synthesize startTime=_startTime - In the implementation block
@property (getter=isTraced,nonatomic,readonly) BOOL traced;              //@synthesize traced=_traced - In the implementation block
+(id)currentProcessInfo;
-(int)parentProcessID;
-(id)initWithProcessID:(int)arg1 ;
-(void)dealloc;
-(NSString *)processName;
-(timeval)startTime;
-(int)processID;
-(BOOL)isTraced;
@end

