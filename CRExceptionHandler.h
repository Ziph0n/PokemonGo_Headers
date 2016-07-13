/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, July 13, 2016 at 11:49:58 AM Central European Summer Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/12E1CB67-3672-460D-A66D-1980A9BFC6C0/pokemongo.app/pokemongo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CritterImpl, NSString, NSDate, NSMutableArray;

@interface CRExceptionHandler : NSObject {

	CritterImpl* _critterDelegate;
	NSString* _appID;
	NSString* _libVersion;
	NSString* _deviceID;
	NSString* _baseURL;
	NSString* _binaryImageUUID;
	NSString* _binaryImageName;
	NSString* _binaryImageArch;
	NSDate* _lastSendTime;
	NSMutableArray* _batchedExceptions;

}

@property (assign) CritterImpl * critterDelegate;                   //@synthesize critterDelegate=_critterDelegate - In the implementation block
@property (retain) NSString * appID;                                //@synthesize appID=_appID - In the implementation block
@property (retain) NSString * libVersion;                           //@synthesize libVersion=_libVersion - In the implementation block
@property (retain) NSString * deviceID;                             //@synthesize deviceID=_deviceID - In the implementation block
@property (retain) NSString * baseURL;                              //@synthesize baseURL=_baseURL - In the implementation block
@property (retain) NSString * binaryImageUUID;                      //@synthesize binaryImageUUID=_binaryImageUUID - In the implementation block
@property (retain) NSString * binaryImageName;                      //@synthesize binaryImageName=_binaryImageName - In the implementation block
@property (retain) NSString * binaryImageArch;                      //@synthesize binaryImageArch=_binaryImageArch - In the implementation block
@property (retain) NSDate * lastSendTime;                           //@synthesize lastSendTime=_lastSendTime - In the implementation block
@property (retain) NSMutableArray * batchedExceptions;              //@synthesize batchedExceptions=_batchedExceptions - In the implementation block
-(NSString *)binaryImageName;
-(NSString *)libVersion;
-(void)setLibVersion:(NSString *)arg1 ;
-(void)setBinaryImageName:(NSString *)arg1 ;
-(void)setLastSendTime:(NSDate *)arg1 ;
-(id)makeExceptionDictFromException:(id)arg1 andName:(id)arg2 andReason:(id)arg3 andUserBreadcrumbs:(id)arg4 andSystemBreadcrumbs:(id)arg5 andEndpoints:(id)arg6 andAppState:(id)arg7 ;
-(void)sendBatch;
-(id)initWithAppID:(id)arg1 andLibVersion:(id)arg2 andDeviceID:(id)arg3 andCritterDelegate:(id)arg4 andBaseURL:(id)arg5 ;
-(BOOL)logHandledException:(id)arg1 withUserBreadcrumbs:(id)arg2 andSystemBreadcrumbs:(id)arg3 andEndpoints:(id)arg4 andName:(id)arg5 andReason:(id)arg6 andAppState:(id)arg7 ;
-(CritterImpl *)critterDelegate;
-(void)setCritterDelegate:(CritterImpl *)arg1 ;
-(NSString *)binaryImageUUID;
-(void)setBinaryImageUUID:(NSString *)arg1 ;
-(NSString *)binaryImageArch;
-(void)setBinaryImageArch:(NSString *)arg1 ;
-(NSDate *)lastSendTime;
-(NSMutableArray *)batchedExceptions;
-(void)setBatchedExceptions:(NSMutableArray *)arg1 ;
-(NSString *)baseURL;
-(void)setBaseURL:(NSString *)arg1 ;
-(void)setAppID:(NSString *)arg1 ;
-(void)setDeviceID:(NSString *)arg1 ;
-(NSString *)deviceID;
-(NSString *)appID;
@end
